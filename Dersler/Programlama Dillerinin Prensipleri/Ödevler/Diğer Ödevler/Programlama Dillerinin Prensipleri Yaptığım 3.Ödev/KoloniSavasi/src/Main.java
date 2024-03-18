/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * Main Sınıfı: Ana Program
 * </p>
 */

public class Main {
    public static void main(String[] args) {
        if (args.length == 0) {
            System.out.println("Lutfen parametre giriniz!");
        }

        String string = "";

        for (String s : args) {
            string = string.concat(s);
            string = string.concat(" ");
        }

        Oyun oyun = new Oyun(string);
        oyun.Baslat();
    }
}
