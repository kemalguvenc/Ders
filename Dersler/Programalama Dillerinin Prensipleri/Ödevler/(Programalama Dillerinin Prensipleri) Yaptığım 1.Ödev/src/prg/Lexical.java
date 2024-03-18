/**
*
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
* @since 27.03.2022
* <p>
* Operat�rleri sayan s�n�f
* </p>
*/


package prg;

import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;

public class Lexical {
	private FileReader fileReader;					// Okunacak dosya
	private String totalString;						// Dosyadan okunan yaz�
	private ArrayList<String> namesOfClass;			// Okunan dosyada �ablonlu yap�ya sahip olan s�n�flar� tutar.
													// Ayr�ca Java'da haz�r bulunan koleksiyon isimlerini de bulundurur.
	private int numberOfUnaryNumericOperators;		// Tekli Say�sal Operat�rlerin say�s�
	private int numberOfNotUnaryNumericOperators;	// �kili Say�sal Operat�rlerin say�s�
	private int numberOfRelationalOperators;		// �li�kisel Operat�rlerin say�s�
	private int numberOfLogicalOperators;			// Mant�ksal Operat�rlerin say�s�
	private int numberOfOperands;					// Operand'lar�n say�s�

	public Lexical(File file) {
		numberOfUnaryNumericOperators = 0;
		numberOfNotUnaryNumericOperators = 0;
		numberOfRelationalOperators = 0;
		numberOfLogicalOperators = 0;
		numberOfOperands = 0;
		totalString = "";
		namesOfClass = new ArrayList<String>(
				Arrays.asList("ArrayList", "LinkedList", "List", "Vector", "Stack", "Iterator", "PriorityQueue",
						"ArrayDeque", "Deque", "Queue", "LinkedHashSet", "HashSet", "TreeSet", "SortedSet", "Set",
						"SortedMap", "NavigableMap", "TreeMap", "HashMap", "AbstractMap", "EnumMap", "Map"));
		// Dosya okunur.
		try {
			fileReader = new FileReader(file);
			while (fileReader.ready()) {
				totalString += String.valueOf((char) fileReader.read());
			}
			fileReader.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
		// Okunan dosyadaki yaz�dan baz� �eyler ��kar�l�r.
		clear();
		// Temizlenmi� olan yaz�dan operat�rler say�l�r.
		count();
	}
	
	// Okunan dosyada bulunan yorumlar�, String'leri ve char'lar� temizler
	private void clearCommentsAndStrings() {
		/* Dosya, iki karakter kullan�larak okunur. Okudu�u karakterleri bir ba�ka String'e atar.
		 * E�er bir yorumu, String'i veya char'� ifade eden bir karakter okursa o k�sm�n bitirici 
		 * karakterini okuyana kadar karakterleri aktarmay� durdurur.
		 */
		String newString = "";
		char back;
		char front;
		boolean quotes = false;
		boolean apostrophe = false;
		boolean singleComment = false;
		boolean multiComment = false;

		totalString = totalString.replace("\\\\", "");

		for (int i = 0; i < totalString.length() - 1; ++i) {
			back = totalString.charAt(i);
			front = totalString.charAt(i + 1);
			// T�rnaklar�n ("") i�indekileri temizler.
			if (back != '\\' && front == '\"' && !(apostrophe || singleComment || multiComment)) {
				quotes = !quotes;
				if (quotes)
					newString += (String.valueOf(back) + String.valueOf(front));
			} 
			// Tek t�rnaklar�n ('') i�indekileri temizler. 
			else if (back != '\\' && front == '\'' && !(quotes || singleComment || multiComment)) {
				apostrophe = !apostrophe;
				if (apostrophe)
					newString += (String.valueOf(back) + String.valueOf(front));
			} 
			// Tek sat�rl�k yorumlar� temizler.
			else if (((back == '/' && front == '/' && !singleComment) || (singleComment && front == '\r'))
					&& !(quotes || apostrophe || multiComment)) {
				singleComment = !singleComment;
			} 
			// �ok sat�rl�k yorumlar� temizler
			else if (((back == '/' && front == '*' && !multiComment) || (multiComment && back == '*' && front == '/'))
					&& !(quotes || apostrophe || singleComment)) {
				multiComment = !multiComment;
				++i;
			}

			else if (!(quotes || apostrophe || singleComment || multiComment))
				newString += back;
		}
		// Bo�luklar� temizler.
		newString = clearWhiteSpace(newString);
		// T�rnaklar�n ("") yan�nda olan "+" i�aretlerini temizler
		newString = newString.replace("+\"", "\"");
		newString = newString.replace("\"+", "\"");
		totalString = newString;
	}

	// Kendisine g�nderilen String'deki bo�luklar� temizler.
	private String clearWhiteSpace(String string) {
		return string.replaceAll("[\\r\\n\\t\\s]*", "");
	}

	// Okunan dosyada bulunan �ablonlu yap�ya sahip s�n�flar�n ismini kaydeder.
	private void getNamesOfClass() {
		int index1 = 0;
		int index2 = 0;
		int index3 = 0;
		// Bir s�n�f tan�mlarken e�er yan�nda "<" ve ">" i�areti varsa o s�n�f� kaydeder.
		while (totalString.indexOf("class", index1) != -1) {
			index1 += totalString.indexOf("class", index1);
			index2 = totalString.indexOf('{', index1);
			if (totalString.substring(index1, index2).contains("<")) {
				index3 = totalString.indexOf('<', index1);
				String string = totalString.substring(index1 + 5, index3);
				namesOfClass.add(string);
				index1 += 5;
			}
		}
	}

	// Okunan dosyadan sadece s�sl� parantezleri al�r.
	private void onlyInCurlyBrackets() {
		// Sadece s�n�flar�n i�indeki �ye de�i�kenlerini ve metotlar�n g�vdelerini al�r.
		char charTmp;
		String stringTmp = "";
		String newTotalString = "";
		int index = 0;
		for (int i = 0; i < totalString.length(); i++) {
			charTmp = totalString.charAt(i);
			if (charTmp == '{')
				++index;
			else if (charTmp == '}')
				--index;

			if (index == 0) {
				continue;
			} else if (index == 1 && charTmp == '{')
				newTotalString += charTmp;
			else if (index == 1 && charTmp == ';') {
				newTotalString += stringTmp + ";";
				stringTmp = "";
			} else if (index == 1 && charTmp == '}') {
				newTotalString += (stringTmp + "}");
				stringTmp = "";
			} else if (index == 1) {
				stringTmp += charTmp;
			} else if (index == 2 && charTmp == '{') {
				stringTmp = "";
				newTotalString += "{";
			} else if (index >= 2)
				newTotalString += charTmp;
		}
		totalString = newTotalString;
	}

	// Daha �nceden isimlerini kaydetti�imiz �ablonlu s�n�flar�n �ablonlar� siler.
	private void clearTemplates() {
		// �ablonlu yap�da bulunan "<" ve ">" i�aretleri operat�r say�m�nda hataya sebep olaca��ndan dolay�
		// o k�s�mlar silinir.
		for (var name : namesOfClass) {
			while (totalString.contains(name + "<")) {
				int indexOfLess = totalString.indexOf(name + "<") + name.length();
				int indexOfGreater = 0;
				int count = 1;
				for (int i = indexOfLess + 1; i < totalString.length(); ++i) {
					char tmp = totalString.charAt(i);
					if (tmp == '<')
						++count;
					else if (tmp == '>')
						--count;
					if (count == 0) {
						indexOfGreater = i;
						break;
					}
				}
				totalString = totalString.substring(0, indexOfLess)
						+ totalString.substring(indexOfGreater + 1, totalString.length());
			}
		}
	}

	// Okunan dosyadan operat�rleri saymak i�in yukar�daki fonksiyonlar� �a��rarak dosyay� temizler.
	private void clear() {
		clearCommentsAndStrings();
		getNamesOfClass();
		onlyInCurlyBrackets();
		clearTemplates();
	}

	// Temizlenen dosyadan operat�rleri sayar.
	private void count() {
		
		// Say�lacak operat�rlerin listesi
		ArrayList<String> allOperators = new ArrayList<String>(
				Arrays.asList("++", "--", "+ ", "- ", "* ", "/ ", "% ", "& ", "| ", "^ ", "= ", "+=", "-=", "*=", "/=",
						"%=", "&=", "|=", "^=", "< ", "<=", "> ", ">=", "==", "!=", "&&", "||", "! "));
		// Tekli say�sal operat�rlerin listesi
		ArrayList<String> unaryNumericOperators = new ArrayList<String>(Arrays.asList("++", "--"));
		// �kili say�sal operat�rlerin listesi
		ArrayList<String> notUnaryNumericOperators = new ArrayList<String>(Arrays.asList("+ ", "- ", "* ", "/ ", "% ",
				"& ", "| ", "^ ", "= ", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^="));
		// �li�kisel operat�rlerin listesi
		ArrayList<String> relationalOperators = new ArrayList<String>(
				Arrays.asList("< ", "<=", "> ", ">=", "==", "!="));
		// Mant�ksal operat�rlerin listesi
		ArrayList<String> logicalOperators = new ArrayList<String>(Arrays.asList("&&", "||", "! "));
		char back;
		char front;

		String dual;
		
		/*
		 * Temizlenmi� dosya iki karakter kullan�larak okunur. E�er uygun bir operat�r ile e�le�irse
		 * operat�r�n bulundu�u kategoriye ait saya� artt�r�l�r.
		*/

		for (int i = 0; i < totalString.length() - 1;) {
			back = totalString.charAt(i);
			front = totalString.charAt(i + 1);
			if ((isSymbol(back) && isSymbol(front))
					&& allOperators.contains(String.valueOf(back) + String.valueOf(front)))
				dual = String.valueOf(back) + String.valueOf(front);
			else if (isSymbol(back))
				dual = String.valueOf(back) + " ";
			else {
				++i;
				continue;
			}

			if (unaryNumericOperators.contains(dual)) {
				int lengthOfOperator = dual.strip().length();
				++numberOfUnaryNumericOperators;
				i += lengthOfOperator;
				++numberOfOperands;
			}

			else if (notUnaryNumericOperators.contains(dual)) {
				int lengthOfOperator = dual.strip().length();
				++numberOfNotUnaryNumericOperators;
				i += lengthOfOperator;
				numberOfOperands += 2;
			}

			else if (relationalOperators.contains(dual)) {
				int lengthOfOperator = dual.strip().length();
				++numberOfRelationalOperators;
				i += lengthOfOperator;
				numberOfOperands += 2;
			}

			else if (logicalOperators.contains(dual)) {
				int lengthOfOperator = dual.strip().length();
				++numberOfLogicalOperators;
				i += lengthOfOperator;

				if (dual == "! ")
					++numberOfOperands;
				else
					numberOfOperands += 2;
			}

			else
				++i;
		}
	}

	// Kendisine g�nderilen char'�n Sembol olup olmad���n� d�nd�r�r.
	private boolean isSymbol(char symbol) {
		String reader = String.valueOf(symbol);
		ArrayList<String> symbols = new ArrayList<String>(
				Arrays.asList("+", "-", "*", "/", "=", "%", "&", "|", "!", "<", ">", "^"));
		if (symbols.contains(reader))
			return true;
		else
			return false;
	}

	// Dosyadaki operat�rler say�ld�ktan sonra say�m hakk�nda ekrana bilgi ��kart�r.
	public void show() {
		System.out.println("Cevap\r\n" + "Operat�r Bilgisi:");
		System.out.println("Tekli Operat�r Say�s�: " + numberOfUnaryNumericOperators);
		System.out.println("�kili Operat�r Say�s�: " + numberOfNotUnaryNumericOperators);
		System.out.println(
				"Say�sal Operat�r Say�s�: " + (numberOfUnaryNumericOperators + numberOfNotUnaryNumericOperators));
		System.out.println("�li�kisel Operat�r Say�s�: " + numberOfRelationalOperators);
		System.out.println("Mant�ksal Operat�r Say�s�: " + numberOfLogicalOperators);
		System.out.println("Operand Bilgisi:");
		System.out.println("Toplam Operand Say�s�: " + numberOfOperands);
	}
}