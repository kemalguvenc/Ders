/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * AUretim Sınıfı: Kolonilerin kullandığı A Üretim tekniğini tanımlar.
 * </p>
 */

public class AUretim implements Uretim {
    /**
     * Bu üretim taktiğinde koloninin popülasyon ve yemek değerleri birbirinden çıkarılır.
     * Bu değerin 10'u geçmemesi için 11'le modu alınır.
     *
     * @param populasyon Koloninin popülasyonu
     * @param yemek      Koloninin yemek miktarı
     * @return Koloninin ürettiği yemek miktarı
     */
    @Override
    public int Uret(int populasyon, int yemek) {
        int deger = (populasyon - yemek) % 11;

        return deger;
    }
}
