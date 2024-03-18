/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 16.04.2023
 * <p>
 * Kendisine verilen metotların yorumlarını dosyalara kaydeder.
 * </p>
 */

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class MethodFileWriter {
    private FileWriter fileWriterOfSingleLineComments;
    private FileWriter fileWriterOfMultiLineComments;
    private FileWriter fileWriterOfJavadocComments;

    public MethodFileWriter() {
        File fileOfSingleLineComments = new File("teksatir.txt");
        File fileOfMultiLineComments = new File("coksatir.txt");
        File fileOfJavadocComments = new File("javadoc.txt");

        try {
            fileWriterOfSingleLineComments = new FileWriter(fileOfSingleLineComments, false);
            fileWriterOfMultiLineComments = new FileWriter(fileOfMultiLineComments, false);
            fileWriterOfJavadocComments = new FileWriter(fileOfJavadocComments, false);
        } catch (IOException e) {
            System.out.println("Dosyalar oluşturulamadı!");
            e.printStackTrace();
        }
    }

    /**
     * Kendisine verilen metoda ait yorumları uygun dosyalara yazar.
     *
     * @param method Metot
     */
    public void writeMethodToFiles(Method method) {
        String headOfContent = "Fonksiyon: " + method.getMethodName() + "\n";
        String singleLineComments = headOfContent + method.getContentOfSingleLineComments();
        String multiLineComments = headOfContent + method.getContentOfMultiLineComments();
        String javadocComments = headOfContent + method.getContentOfJavadocComments();

        try {
            fileWriterOfSingleLineComments.write(singleLineComments);
            fileWriterOfSingleLineComments.write("----------------------------------\n");
            fileWriterOfSingleLineComments.flush();
            fileWriterOfMultiLineComments.write(multiLineComments);
            fileWriterOfMultiLineComments.write("----------------------------------\n");
            fileWriterOfMultiLineComments.flush();
            fileWriterOfJavadocComments.write(javadocComments);
            fileWriterOfJavadocComments.write("----------------------------------\n");
            fileWriterOfJavadocComments.flush();
        } catch (Exception e) {
            throw new RuntimeException(e);
        }
    }
}
