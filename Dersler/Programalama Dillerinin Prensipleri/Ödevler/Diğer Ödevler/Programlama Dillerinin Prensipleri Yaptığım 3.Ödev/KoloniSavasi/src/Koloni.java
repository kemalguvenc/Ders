import java.util.Random;

/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * Koloni Sınıfı: Koloniyi tanımlar.
 * </p>
 */

public class Koloni {
    public int populasyon;
    private int yemek;
    private boolean yasam;
    private final Taktik taktik;
    private final Uretim uretim;
    private int kazandigiSavasSayisi;
    private int kaybettigiSavasSayisi;
    private final char simge;

    Koloni(int populasyon, char simge) {
        this.populasyon = populasyon;
        this.yemek = populasyon * populasyon;
        this.yasam = true;
        this.kazandigiSavasSayisi = 0;
        this.kaybettigiSavasSayisi = 0;
        this.simge = simge;

        // Savaş ve üretim taktikleri rastgele atanır.
        Random random = new Random();
        this.taktik = (random.nextBoolean() ? new ATaktik() : new BTaktik());
        this.uretim = (random.nextBoolean() ? new AUretim() : new BUretim());
    }

    /**
     * Eğer koloni bir savaşı kazanırsa karşı tarafın yemek miktarının savaş puanı farkının yüzdelik değeri kadarını
     * kendisine alır. Bu yemek miktarı ise parametre olarak alınır.
     *
     * @param kazanilanYemek Koloninin kazandığı yemek miktarı
     */
    public void Kazan(int kazanilanYemek) {
        SayisalYemekArttir(kazanilanYemek);
        ++this.kazandigiSavasSayisi;
    }

    /**
     * Eğer koloni bir savaşı kaybederse savaş puanı farkının yüzdelik değeri kadarını yemek ve popülasyon kaybeder.
     * Popülasyonun kaybettiği yemek miktarını diğer kolonin de bilebilmesi için bu değeri döndürür.
     *
     * @param savasPuaniFarki Koloninin kaybettiği savaştaki puan farkı
     * @return Koloninin kaybetmesinden dolayı kendisinden alınıp kazanan tarafa verilecek yemek miktarı
     */
    public int Kaybet(int savasPuaniFarki) {
        int savasPuaniYuzdesi = savasPuaniFarki / 10;
        int kaybedilenYemek = YuzdeselYemekAzalt(savasPuaniYuzdesi);
        YuzdeselPopulasyonAzalt(savasPuaniYuzdesi);
        ++this.kaybettigiSavasSayisi;

        // Kaybettiği savaş sonucu ölüp ölmediği kontrol ediliyor.
        this.yasam = (this.populasyon > 0 && this.yemek > 0);

        return kaybedilenYemek;
    }

    /**
     * Koloninin savaştan sonra yapması gereken işleri yapar.
     * Koloni üretim yapar; popülasyonu artar; yemek tüketir.
     */
    public void Yenilenme() {
        int uretilenYemekMiktari = this.UretimTeknigi();
        SayisalYemekArttir(uretilenYemekMiktari);
        YuzdeselPopulasyonArttir(20);
        SayisalYemekAzalt(this.populasyon * 2);

        // Yemek tüketimi sonucu ölüp ölmediği kontrol ediliyor.
        this.yasam = (this.populasyon > 0 && this.yemek > 0);
    }

    /**
     * Koloni yaşıyorsa true değilse false döndürür.
     *
     * @return Koloninin yaşama durumu
     */
    public boolean YasiyorMu() {
        return this.yasam;
    }

    /**
     * Koloni hakkındaki bilgileri içeren string döndürür.
     *
     * @return Koloni hakkındaki bilgiler
     */
    public String Goster() {
        if (this.YasiyorMu()) {
            return String.format("  %c                %-10d          %-10d          %-10d       %-10d\n",
                    this.simge,
                    this.populasyon,
                    this.yemek,
                    this.kazandigiSavasSayisi, this.kaybettigiSavasSayisi);
        }
        else {
            return String.format("  %c                --                  --                  --               --     \n",
                    this.simge);
        }
    }

    /**
     * Koloninin savaş puanını hesaplar.
     *
     * @return Koloninin savaş puanı
     */
    public int SavasTaktigi() {
        return this.taktik.Savas(this.populasyon, this.yemek);
    }

    /**
     * Koloninin ürettiği yemek miktarını hesaplar.
     *
     * @return Koloninin ürettiği yemek miktarı
     */
    public int UretimTeknigi() {
        return this.uretim.Uret(this.populasyon, this.yemek);
    }

    /**
     * Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu arttırır.
     *
     * @param yuzde Popülasyonun yüzde kaç artacağı
     */
    private void YuzdeselPopulasyonArttir(int yuzde) {
        yuzde += 100;
        this.populasyon = this.populasyon * yuzde / 100;
    }

    /**
     * Kendisine verilen yüzde (örn %10) değeri kadar koloninin popülasyonunu azaltır.
     *
     * @param yuzde Popülasyonun yüzde kaç azalacağı
     */
    private void YuzdeselPopulasyonAzalt(int yuzde) {
        yuzde = 100 - yuzde;
        this.populasyon = this.populasyon * yuzde / 100;
    }

    /**
     * Kendisine verilen yüzde (örn %10) değeri kadar koloninin yemek miktarını arttırır.
     * Özellikle koloni kaybedince kullanıldığı için azaltılan yemek miktarını döndürür.
     *
     * @param yuzde Yemek miktarının yüzde kaç azalacağı
     * @return Azaltılan yemek miktarı
     */
    private int YuzdeselYemekAzalt(int yuzde) {
        int kaybedilenYemek = this.yemek;
        yuzde = 100 - yuzde;
        this.yemek = this.yemek * yuzde / 100;
        kaybedilenYemek -= this.yemek;

        return kaybedilenYemek;
    }

    /**
     * Kendisine verilen değer kadar koloninin yemek miktarını arttırır.
     *
     * @param sayi Eklenecek yemek miktarı
     */
    private void SayisalYemekArttir(int sayi) {
        this.yemek += sayi;
    }

    /**
     * Kendisine verilen değer kadar koloninin yemek miktarını azaltır.
     *
     * @param sayi Çıkarılacak yemek miktarı
     */
    private void SayisalYemekAzalt(int sayi) {
        this.yemek -= sayi;
    }
}
