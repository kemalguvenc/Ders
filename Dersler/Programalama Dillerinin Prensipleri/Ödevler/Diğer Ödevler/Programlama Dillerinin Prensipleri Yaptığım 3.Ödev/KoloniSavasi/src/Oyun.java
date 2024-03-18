import java.util.ArrayList;
import java.util.Random;

/**
 * @author Muhammet Kemal Güvenç --- kemal.guvenc@ogr.sakarya.edu.tr
 * @since 22.05.2023
 * <p>
 * Oyun Sınıfı: Oyunu tanımlar.
 * </p>
 */

public class Oyun {
    private static int tur = 0;
    private final ArrayList<Koloni> koloniler;

    Oyun(String veri) {
        this.koloniler = new ArrayList<>();
        KolonilerOlustur(veri);
    }

    /**
     * Oyunu başlatır. Sırayla,
     * Koloniler hakkındaki bilgileri ekrana yazar.
     * Koloniler muharebe yapar.
     * Koloniler tur sonu işlemleri yapar.
     */
    public void Baslat() {
        while (!OyunBittiMi()) {
            Ciz();
            Muharebe();
            TurBitir();
        }
        Ciz();
    }

    /**
     * Popülasyon bilgilerini alıp koloniler oluşturur.
     *
     * @param veri Kolonilerin popülasyon bilgileri
     */
    private void KolonilerOlustur(String veri) {
        String[] koloniPopulasyonu = veri.split(" ");
        for (String string : koloniPopulasyonu) {
            int populasyon = Integer.parseInt(string);
            Koloni koloni = new Koloni(populasyon, (char) (this.koloniler.size() + 168));
            this.koloniler.add(koloni);
        }
    }

    /**
     * Kolonileri savaştırır.
     */
    private void Muharebe() {
        Koloni koloni1;
        Koloni koloni2;
        int kazanilanYemek;

        // Bütün koloniler sırayla birbiriyle savaşır.
        for (int i = 0; i < this.koloniler.size(); ++i) {
            koloni1 = this.koloniler.get(i);
            if (!koloni1.YasiyorMu()) continue;

            for (int j = i + 1; j < this.koloniler.size(); ++j) {
                koloni2 = this.koloniler.get(j);
                if (!koloni2.YasiyorMu()) continue;

                // Savaş puanları kolonilerin taktik türüne göre hesaplanır.
                int savasPuani1 = koloni1.SavasTaktigi();
                int savasPuani2 = koloni2.SavasTaktigi();
                int sonuc = savasPuani1 - savasPuani2;
                // Savaş puanı büyük olan kazanır.
                if (sonuc > 0) {
                    kazanilanYemek = koloni2.Kaybet(sonuc);
                    koloni1.Kazan(kazanilanYemek);
                    continue;
                }
                else if (sonuc < 0) {
                    kazanilanYemek = koloni1.Kaybet(-1 * sonuc);
                    koloni2.Kazan(kazanilanYemek);
                    continue;
                }

                // Eğer savaş puanları eşitse popülasyonu büyük olan kazanır.
                sonuc = koloni1.populasyon - koloni2.populasyon;
                if (sonuc > 0) {
                    kazanilanYemek = koloni2.Kaybet(0);
                    koloni1.Kazan(kazanilanYemek);
                    continue;
                }
                else if (sonuc < 0) {
                    kazanilanYemek = koloni1.Kaybet(0);
                    koloni2.Kazan(kazanilanYemek);
                    continue;
                }

                // Eğer popülasyonları da eşitse rastgele biri kazanır.
                Random random = new Random();
                sonuc = random.nextInt() % 2;
                if (sonuc == 0) {
                    kazanilanYemek = koloni2.Kaybet(0);
                    koloni1.Kazan(kazanilanYemek);
                }
                else if (sonuc == 1) {
                    kazanilanYemek = koloni1.Kaybet(0);
                    koloni2.Kazan(kazanilanYemek);
                }
            }
        }
    }

    /**
     * Tur bittikten sonra yapılması gerekenleri yapar.
     * Koloni üretim yapar; popülasyonu artar; yemek tüketir.
     */
    private void TurBitir() {
        for (Koloni koloni : this.koloniler) {
            if (koloni.YasiyorMu()) koloni.Yenilenme();
        }
    }

    /**
     * Kolonilere ait bilgileri ekrana yazar.
     */
    private void Ciz() {
        System.out.println("-----------------------------------------------------------------------------------\n");
        System.out.println("Tur Sayisi: " + tur + "\n");
        ++tur;
        System.out.println("Koloni          Populasyon          Yemek Stogu          Kazanma          Kaybetme\n");
        for (Koloni koloni : this.koloniler)
            System.out.println(koloni.Goster());
    }

    /**
     * Oyunun bitip bitmediğini kontrol eder.
     *
     * @return Oyun bitme durumu
     */
    private boolean OyunBittiMi() {
        int yasayanKoloniSayisi = 0;
        for (Koloni koloni : this.koloniler) {
            if (koloni.YasiyorMu()) ++yasayanKoloniSayisi;
            if (yasayanKoloniSayisi > 1) return false;
        }
        return true;
    }

}
