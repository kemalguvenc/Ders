/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * BUretim Sınıfı: Kolonilerin kullandığı B Üretim tekniğini tanımlar.
 * </p>
 */

public class BUretim implements Uretim {
    /**
     * Bu üretim taktiğinde koloninin popülasyon ve yemek değerleri birbiriyle toplanır.
     * Bu değerin 10'u geçmemesi için 11'le modu alınır.
     * int değerinin taşmasından korunmak için negatif değer -1 ile çarpılır.
     *
     * @param populasyon Koloninin popülasyonu
     * @param yemek      Koloninin yemek miktarı
     * @return Koloninin ürettiği yemek miktarı
     */
    @Override
    public int Uret(int populasyon, int yemek) {
        int deger = (populasyon + yemek) % 11;
        if (deger < 0)
            deger *= -1;

        return deger;
    }
}
