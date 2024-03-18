/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 16.04.2023
 * <p>
 * Kendisine verilen metni fonksiyonlarına kadar ayıklar(parse).
 * </p>
 */

import java.util.ArrayList;
import java.util.List;
import java.util.Stack;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Parser {
    private String text;
    private final Matcher comments;
    private final Stack<LimitsOfMethod> limitsOfMethods;

    /**
     * @param text Ayıklanacak(Parse) metin.
     */
    public Parser(String text) {
        this.text = text;

        String regexSingleLineComment = "(\\/\\/.*)";
        String regexMultiLineComment = "((\\/\\*[^*][\\s\\S]*?\\*\\/)|(\\/\\*\\*\\/))";
        String regexJavadocComment = "(\\/\\*\\*[\\s\\S]*?\\*\\/)";
        String regexComment = regexSingleLineComment + "|" + regexMultiLineComment + "|" + regexJavadocComment;
        Pattern pattern = Pattern.compile(regexComment);
        // Metindeki bütün yorumlar tespit edilir.
        this.comments = pattern.matcher(this.text);

        this.limitsOfMethods = new Stack<LimitsOfMethod>();
    }

    /**
     * Ayıklanan bütün metotları bir liste olarak geri döndürür.
     *
     * @return Ayıklanan(Parse) bütün metotlar
     */
    public List<Method> getMethods() {
        List<Method> methods = new ArrayList<Method>();
        for (LimitsOfMethod limitsOfMethod : this.limitsOfMethods) {
            String textOfMethod = this.text.substring(limitsOfMethod.start, limitsOfMethod.end);
            Method method = new Method(textOfMethod);
            methods.add(method);
        }
        return methods;
    }

    /**
     * Verilen metindeki bütün fonksiyonları ayıklar(parse).
     */
    public void parse() {
        this.clearComments();
        this.getMethodHeaders();
        this.extendMethodsToBodies();
        this.fixComment();
        this.fixMethodLimitsAccordingToComments();
        this.extendMethodsToJavadoc();
    }

    /**
     * Okunan dosyadaki yorum satırları geçici olarak silinir.
     */
    private void clearComments() {
        this.text = this.comments.replaceAll("");
        this.comments.reset();
    }

    /**
     * Dosyada bulunan metotların ön kısımları bulunur. Bu kısımların dosyanın neresinde başlayıp
     * neresinde bittiği "LimitsOfMethod" sınıfı ile saklanır.
     */
    private void getMethodHeaders() {
        String regexMethodHeader = "((public|private|protected)\\s+)?" +
                "(\\w+\\s+)?" +
                "(\\w+\\s*)" +
                "\\((\\w|,|\\s)*\\)" +
                "\\s*(?=\\{)";
        Pattern pattern = Pattern.compile(regexMethodHeader);
        Matcher matcher = pattern.matcher(this.text);
        while (matcher.find()) {
            int start = matcher.start();
            int end = matcher.end();
            LimitsOfMethod limitsOfMethod = new LimitsOfMethod(start, end);
            this.limitsOfMethods.push(limitsOfMethod);
        }
    }

    /**
     * Sadece ön kısımların sınırlarını tuttuğumuz metotları gövdelerine kadar genişletir.
     * Böylece elimizde eksiksiz bir metot bulunmuş olur.
     */
    private void extendMethodsToBodies() {
        char character;
        int position;
        int counterCurlyBracket = 0;
        for (LimitsOfMethod limitsOfMethod : this.limitsOfMethods) {
            position = this.text.indexOf("{", limitsOfMethod.end);
            ++counterCurlyBracket;
            while (counterCurlyBracket != 0) {
                ++position;
                character = this.text.charAt(position);
                if (character == '{')
                    ++counterCurlyBracket;
                else if (character == '}')
                    --counterCurlyBracket;
            }
            limitsOfMethod.end = ++position;
        }
    }

    /**
     * Geçici olarak silinen yorum satırları geri getirilir.
     */
    private void fixComment() {
        StringBuilder stringBuilder = new StringBuilder(this.text);
        while (this.comments.find()) {
            stringBuilder.insert(this.comments.start(), this.comments.group());
        }
        this.text = stringBuilder.toString();
        this.comments.reset();
    }

    /**
     * Fonksiyonların sınırları geri gelen yorum satırlarının konumlarına göre düzeltilir.
     */
    private void fixMethodLimitsAccordingToComments() {
        while (this.comments.find()) {
            for (LimitsOfMethod limitsOfMethod : this.limitsOfMethods) {
                int startPosition = this.comments.start();
                int endPosition = this.comments.end() - 1;

                if (startPosition <= limitsOfMethod.start) {
                    limitsOfMethod.start += (endPosition - startPosition + 1);
                    limitsOfMethod.end += (endPosition - startPosition + 1);
                } else if (startPosition <= limitsOfMethod.end) {
                    limitsOfMethod.end += (endPosition - startPosition + 1);
                }
            }
        }
        this.comments.reset();
    }

    /**
     * Üstünde Javadoc yorum satırı olan fonksiyonların sınırlarını, o yorum satırını da içerecek
     * şekilde genişletir.
     */
    private void extendMethodsToJavadoc() {
        StringBuilder reverseText;
        for (LimitsOfMethod limitsOfMethod : this.limitsOfMethods) {
            reverseText = new StringBuilder(this.text.substring(0, limitsOfMethod.start));
            reverseText.reverse();
            Pattern pattern = Pattern.compile("^\\s*\\/\\*[\\s\\S]*?\\*\\*\\/");
            Matcher matcher = pattern.matcher(reverseText.toString());
            if (matcher.find()) {
                limitsOfMethod.start -= matcher.group().length();
            }
        }
    }
}
