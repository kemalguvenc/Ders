/**
*
* @author Muhammet Kemal G�ven� - kemal.guvenc@ogr.sakarya.edu.tr
* @since 27.03.2022
* <p>
* Ana program s�n�f�
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
