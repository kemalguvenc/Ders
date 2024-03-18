/**
*
* @author Muhammet Kemal Güvenç - kemal.guvenc@ogr.sakarya.edu.tr
* @since 27.03.2022
* <p>
* Ana program sýnýfý
* </p>
*/


package prg;

import java.io.File;

public class Program {

	public static void main(String[] args) {
		String destination = args[0];
		File file = new File(destination);
		Lexical lexical = new Lexical(file);
		lexical.show();
	}

}
