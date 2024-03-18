/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 16.04.2023
 * <p>
 * Ayıklanan(Parse) fonksiyonların saklar.
 * Ayrıca içindeki yorumları da verir.
 * </p>
 */

import java.util.ArrayList;
import java.util.List;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Method {
    private String text;
    private final String methodName;
    private final String contentOfSingleLineComments;
    private final String contentOfMultiLineComments;
    private final String contentOfJavadocComments;
    private final int countOfSingleLineComments;
    private final int countOfMultiLineComments;
    private final int countOfJavadocComments;

    public Method(String text) {
        this.text = text;
        List<String> javadocComments = new ArrayList<>();
        List<String> multiLineComments = new ArrayList<>();
        List<String> singleLineComments = new ArrayList<>();
        this.findComments(singleLineComments, multiLineComments, javadocComments);
        this.methodName = this.findMethodName();
        this.contentOfSingleLineComments = this.createContent(singleLineComments);
        this.contentOfMultiLineComments = this.createContent(multiLineComments);
        this.contentOfJavadocComments = this.createContent(javadocComments);
        this.countOfSingleLineComments = singleLineComments.size();
        this.countOfMultiLineComments = multiLineComments.size();
        this.countOfJavadocComments = javadocComments.size();
    }

    /**
     * Fonksiyonla ilgili bilgileri ekrana çıkartır.
     */
    public void show() {
        System.out.println("\t" + "Fonksiyon: " + this.getMethodName());
        System.out.println("\t\t" + "Tek Satır Yorum Sayısı:   " + this.countOfSingleLineComments);
        System.out.println("\t\t" + "Çok Satırlı Yorum Sayısı: " + this.countOfMultiLineComments);
        System.out.println("\t\t" + "Javadoc Yorum Sayısı:     " + this.countOfJavadocComments);
        System.out.println("-------------------------------------------");
    }

    /**
     * @return Tek satırlık yorumlar
     */
    public String getContentOfSingleLineComments() {
        return this.contentOfSingleLineComments;
    }

    /**
     * @return Çok satırlık yorumlar
     */
    public String getContentOfMultiLineComments() {
        return this.contentOfMultiLineComments;
    }

    /**
     * @return Javadoc yorumlar
     */
    public String getContentOfJavadocComments() {
        return this.contentOfJavadocComments;
    }

    /**
     * @return Metodun ismi
     */
    public String getMethodName() {
        return this.methodName;
    }

    /**
     * Aldığı yorumları birleştirip bir bütün içerik oluşturur.
     *
     * @param comments Yorumlar
     * @return İçerik
     */
    private String createContent(List<String> comments) {
        String content = "";
        for (String comment : comments) {
            content = content.concat(comment + "\n");
        }
        return content;
    }

    /**
     * Fonksiyondaki metot ismini bulur.
     *
     * @return Metot ismi
     */
    private String findMethodName() {
        String methodName = "";
        String regexMethodName = "(?m)(?=(((public|private|protected)\\s+)?(\\w+\\s+)?))(\\w+\\s*)(?=(\\((\\w|,|\\*|\\/|\\s)*\\)\\s*(?=\\{)))";
        Pattern pattern = Pattern.compile(regexMethodName);
        Matcher matcher = pattern.matcher(this.text);
        if (matcher.find())
            methodName = matcher.group();
        return methodName;
    }

    /**
     * Yorumları bulur sonra onları, parametre olarak aldığı listelere yerleştirir
     *
     * @param singleLineComments Tek satır yorumları listesi
     * @param multiLineComments  Çoklu satır yorumları listesi
     * @param javadocComments    Javadoc yorumları listesi
     */
    private void findComments(List<String> singleLineComments,
                              List<String> multiLineComments,
                              List<String> javadocComments) {
        String regexSingleLineComment = "(\\/\\/.*)";
        String regexMultiLineComment = "((\\/\\*[^*][\\s\\S]*?\\*\\/)|(\\/\\*\\*\\/))";
        String regexJavadocComment = "(\\/\\*\\*[\\s\\S]*?\\*\\/)";
        String regexComment = regexSingleLineComment + "|" + regexMultiLineComment + "|" + regexJavadocComment;
        Pattern pattern = Pattern.compile(regexComment);
        Matcher matcher = pattern.matcher(this.text);

        while (matcher.find()) {
            if (matcher.group(1) != null) {
                singleLineComments.add(matcher.group());
            } else if (matcher.group(2) != null) {
                multiLineComments.add(matcher.group());
            } else {
                javadocComments.add(matcher.group());
            }
        }
    }
}
