/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 16.04.2023
 * <p>
 * Projenin main sınıfı
 * </p>
 */

import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;

public class Main {
    public static void main(String[] args) throws IOException {
        // Parametre olarak verilen Java dosyası okunur.
        String fileName = args[0];
        String fileText = new String(Files.readAllBytes(Paths.get(fileName)));

        // Java dosyalarında sadece 1 adet ve dosya ismi aynı ada sahip sınıf bulunur.
        // Bundan dolayı dosyanın içindeki sınıfı öğrenmek için dosyanın adı okunur.
        String nameOfClass = args[0].substring(0, args[0].indexOf("."));
        System.out.println("Sınıf: " + nameOfClass);

        // Okunan Java dosyası ayıklanır(Pars).
        Parser parser = new Parser(fileText);
        parser.parse();

        // Ayıklama(Parsing) işleminden sonra elde edilen metotlar alınır.
        // Metotlara ait bilgiler dosyalara yazılır ve ekranda gösterilir.
        List<Method> methods = parser.getMethods();
        MethodFileWriter methodFileWriter = new MethodFileWriter();
        for (Method method : methods) {
            methodFileWriter.writeMethodToFiles(method);
            method.show();
        }
    }
}