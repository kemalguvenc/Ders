/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * BTaktik Sınıfı: Kolonilerin kullandığı B taktiğini tanımlar.
 * </p>
 */

public class BTaktik implements Taktik {
    /**
     * Bu savaş taktiğinde koloninin popülasyon ve yemek değerlerinin kareleri alınıp toplanır.
     * Bu değerin 1000'i geçmemesi için 1001'le modu alınır.
     * int değerinin taşmasından korunmak için negatif değer -1 ile çarpılır.
     *
     * @param populasyon Koloninin popülasyonu
     * @param yemek      Koloninin yemek miktarı
     * @return Koloninin savaş gücü
     */
    @Override
    public int Savas(int populasyon, int yemek) {
        int deger = ((populasyon * populasyon) + (yemek * yemek)) % 1001;
        if (deger < 0)
            deger *= -1;

        return deger;
    }
}
