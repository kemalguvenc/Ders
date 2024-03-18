/**
*
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
* @since 27.03.2022
* <p>
* Operatörleri sayan sýnýf
* </p>
*/


package prg;

import java.io.File;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Arrays;

public class Lexical {
	private FileReader fileReader;					// Okunacak dosya
	private String totalString;						// Dosyadan okunan yazý
	private ArrayList<String> namesOfClass;			// Okunan dosyada þablonlu yapýya sahip olan sýnýflarý tutar.
													// Ayrýca Java'da hazýr bulunan koleksiyon isimlerini de bulundurur.
	private int numberOfUnaryNumericOperators;		// Tekli Sayýsal Operatörlerin sayýsý
	private int numberOfNotUnaryNumericOperators;	// Ýkili Sayýsal Operatörlerin sayýsý
	private int numberOfRelationalOperators;		// Ýliþkisel Operatörlerin sayýsý
	private int numberOfLogicalOperators;			// Mantýksal Operatörlerin sayýsý
	private int numberOfOperands;					// Operand'larýn sayýsý

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
		// Okunan dosyadaki yazýdan bazý þeyler çýkarýlýr.
		clear();
		// Temizlenmiþ olan yazýdan operatörler sayýlýr.
		count();
	}
	
	// Okunan dosyada bulunan yorumlarý, String'leri ve char'larý temizler
	private void clearCommentsAndStrings() {
		/* Dosya, iki karakter kullanýlarak okunur. Okuduðu karakterleri bir baþka String'e atar.
		 * Eðer bir yorumu, String'i veya char'ý ifade eden bir karakter okursa o kýsmýn bitirici 
		 * karakterini okuyana kadar karakterleri aktarmayý durdurur.
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
			// Týrnaklarýn ("") içindekileri temizler.
			if (back != '\\' && front == '\"' && !(apostrophe || singleComment || multiComment)) {
				quotes = !quotes;
				if (quotes)
					newString += (String.valueOf(back) + String.valueOf(front));
			} 
			// Tek týrnaklarýn ('') içindekileri temizler. 
			else if (back != '\\' && front == '\'' && !(quotes || singleComment || multiComment)) {
				apostrophe = !apostrophe;
				if (apostrophe)
					newString += (String.valueOf(back) + String.valueOf(front));
			} 
			// Tek satýrlýk yorumlarý temizler.
			else if (((back == '/' && front == '/' && !singleComment) || (singleComment && front == '\r'))
					&& !(quotes || apostrophe || multiComment)) {
				singleComment = !singleComment;
			} 
			// Çok satýrlýk yorumlarý temizler
			else if (((back == '/' && front == '*' && !multiComment) || (multiComment && back == '*' && front == '/'))
					&& !(quotes || apostrophe || singleComment)) {
				multiComment = !multiComment;
				++i;
			}

			else if (!(quotes || apostrophe || singleComment || multiComment))
				newString += back;
		}
		// Boþluklarý temizler.
		newString = clearWhiteSpace(newString);
		// Týrnaklarýn ("") yanýnda olan "+" iþaretlerini temizler
		newString = newString.replace("+\"", "\"");
		newString = newString.replace("\"+", "\"");
		totalString = newString;
	}

	// Kendisine gönderilen String'deki boþluklarý temizler.
	private String clearWhiteSpace(String string) {
		return string.replaceAll("[\\r\\n\\t\\s]*", "");
	}

	// Okunan dosyada bulunan þablonlu yapýya sahip sýnýflarýn ismini kaydeder.
	private void getNamesOfClass() {
		int index1 = 0;
		int index2 = 0;
		int index3 = 0;
		// Bir sýnýf tanýmlarken eðer yanýnda "<" ve ">" iþareti varsa o sýnýfý kaydeder.
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

	// Okunan dosyadan sadece süslü parantezleri alýr.
	private void onlyInCurlyBrackets() {
		// Sadece sýnýflarýn içindeki üye deðiþkenlerini ve metotlarýn gövdelerini alýr.
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

	// Daha önceden isimlerini kaydettiðimiz þablonlu sýnýflarýn þablonlarý siler.
	private void clearTemplates() {
		// Þablonlu yapýda bulunan "<" ve ">" iþaretleri operatör sayýmýnda hataya sebep olacaðýndan dolayý
		// o kýsýmlar silinir.
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

	// Okunan dosyadan operatörleri saymak için yukarýdaki fonksiyonlarý çaðýrarak dosyayý temizler.
	private void clear() {
		clearCommentsAndStrings();
		getNamesOfClass();
		onlyInCurlyBrackets();
		clearTemplates();
	}

	// Temizlenen dosyadan operatörleri sayar.
	private void count() {
		
		// Sayýlacak operatörlerin listesi
		ArrayList<String> allOperators = new ArrayList<String>(
				Arrays.asList("++", "--", "+ ", "- ", "* ", "/ ", "% ", "& ", "| ", "^ ", "= ", "+=", "-=", "*=", "/=",
						"%=", "&=", "|=", "^=", "< ", "<=", "> ", ">=", "==", "!=", "&&", "||", "! "));
		// Tekli sayýsal operatörlerin listesi
		ArrayList<String> unaryNumericOperators = new ArrayList<String>(Arrays.asList("++", "--"));
		// Ýkili sayýsal operatörlerin listesi
		ArrayList<String> notUnaryNumericOperators = new ArrayList<String>(Arrays.asList("+ ", "- ", "* ", "/ ", "% ",
				"& ", "| ", "^ ", "= ", "+=", "-=", "*=", "/=", "%=", "&=", "|=", "^="));
		// Ýliþkisel operatörlerin listesi
		ArrayList<String> relationalOperators = new ArrayList<String>(
				Arrays.asList("< ", "<=", "> ", ">=", "==", "!="));
		// Mantýksal operatörlerin listesi
		ArrayList<String> logicalOperators = new ArrayList<String>(Arrays.asList("&&", "||", "! "));
		char back;
		char front;

		String dual;
		
		/*
		 * Temizlenmiþ dosya iki karakter kullanýlarak okunur. Eðer uygun bir operatör ile eþleþirse
		 * operatörün bulunduðu kategoriye ait sayaç arttýrýlýr.
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

	// Kendisine gönderilen char'ýn Sembol olup olmadýðýný döndürür.
	private boolean isSymbol(char symbol) {
		String reader = String.valueOf(symbol);
		ArrayList<String> symbols = new ArrayList<String>(
				Arrays.asList("+", "-", "*", "/", "=", "%", "&", "|", "!", "<", ">", "^"));
		if (symbols.contains(reader))
			return true;
		else
			return false;
	}

	// Dosyadaki operatörler sayýldýktan sonra sayým hakkýnda ekrana bilgi çýkartýr.
	public void show() {
		System.out.println("Cevap\r\n" + "Operatör Bilgisi:");
		System.out.println("Tekli Operatör Sayýsý: " + numberOfUnaryNumericOperators);
		System.out.println("Ýkili Operatör Sayýsý: " + numberOfNotUnaryNumericOperators);
		System.out.println(
				"Sayýsal Operatör Sayýsý: " + (numberOfUnaryNumericOperators + numberOfNotUnaryNumericOperators));
		System.out.println("Ýliþkisel Operatör Sayýsý: " + numberOfRelationalOperators);
		System.out.println("Mantýksal Operatör Sayýsý: " + numberOfLogicalOperators);
		System.out.println("Operand Bilgisi:");
		System.out.println("Toplam Operand Sayýsý: " + numberOfOperands);
	}
}