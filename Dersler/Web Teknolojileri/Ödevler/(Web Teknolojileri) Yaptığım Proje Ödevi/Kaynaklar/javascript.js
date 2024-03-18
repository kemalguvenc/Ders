/* Şehrim sayfasında bulunan fotoğraf slaytında gösterilecek yazıları tutan dizi.  */

var texts = ["Dişbudak ağaçlarıyla çevrili ve şehrin stresinden uzak büyüleyici bir yer.",
    "Restoran ve kafeteryanın da hizmet verdiği tesislerde şehrin gizli kalmış güzelliğini keşfedebilirsin.",
    "Kocaala ve Karasu ilçelerinin arasında akan Maden Deresi, etrafını saran ağaçlar ve şelalesiyle doğaseverleri adeta büyülüyor.",
    "Geyve Maksudiye'de bulunan Doğançay Şelalesi tabiat anıtında doğal güzelliklerin keyfini çıkarabilirsin."];

/* Şehrim sayfasında bulunan fotoğraf slaytı ilerletildiğinde yazıların değişmesini sağlar */

function yazi_degistir() {

    var i = 1;
    $(document).ready(function () {

        $("#slayt").on('slide.bs.carousel', function () {
            if (i > 3)
                i = 0;

            document.getElementById("degisen-yazi").innerHTML = texts[i];
            i++;
        });
    });

}

/* Kendisine parametre yoluyla verilen ifadenin dolu olup olmadığını belirtir. Eğer dolu ise true, değilse false döndürür. */

function dolumu(ifade) {

    ifade = ifade.trim();

    if (ifade == null || ifade == "")
        return false;
    else return true;

}

/* Kendisine parametre yoluyla verilen ifadenin, yine parametre olarak verilen tipe uygun olup olmadığını döndürür. Eğer uygunsa true, değilse false döndürür. 3 farklı tip vardır: E-Posta, ad ve soyad. */

function uygunmu(ifade, tip) {

    var eposta_pattern = /[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[a-z0-9!#$%&'*+/=?^_`{|}~-]+)*@(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?/g;
    var adsoyad_pattern = /[<">!£'#^$+½%&{/[()}=?|_*.:,;`0123456789]/g;

    if (tip == "eposta") {
        ifade = ifade.toLowerCase();
        if (ifade.search(eposta_pattern) == -1) {
            return false;
        }
        else return true;
    }

    else if (tip == "ad" || tip == "soyad") {
        if (ifade.search(adsoyad_pattern) == -1) {
            return true;
        }
        else return false;
    }

}

/* İletişim sayfasında bulunan formun içindeki bilgilerin, dolu olup olmadığını ve eğer dolu ise de uygun biçimde olup olmadığını denetler. */

function Iletisim_Kontrol() {

    var bilgiler = {
        ad: document.getElementById("ad").value,
        soyad: document.getElementById("soyad").value,
        eposta: document.getElementById("eposta").value,
        cinsiyet: document.getElementById("cinsiyet").value,
        konular: document.getElementById("konular").value,
        aciliyet: document.getElementById("aciliyet").value,
        tarih: document.getElementById("tarih").value,
        soru: document.getElementById("soru").value
    };

    var eksik_olanlar = "";
    var yanlis_olanlar = "";

    for (var x in bilgiler) {

        if (x == "cinsiyet") {
            var a = document.getElementById("erkek").checked;
            var b = document.getElementById("kadın").checked;

            if (!(a || b))
                eksik_olanlar += "\n" + x;
        }

        else if (x == "konular") {
            var a = document.getElementById("bilgisayar").checked;
            var b = document.getElementById("sanat").checked;
            var c = document.getElementById("diger").checked;

            if (!(a || b || c))
                eksik_olanlar += "\n" + x;
        }

        else if (dolumu(bilgiler[x]) == false) {
            eksik_olanlar += "\n" + x;
        }
    }

    if (dolumu(eksik_olanlar) == true) {
        alert("Şu bilgileri doldurunuz: " + eksik_olanlar);
        return false;
    }

    if (uygunmu(bilgiler.ad, "ad") == false) {
        yanlis_olanlar += ("\nad");
    }

    if (uygunmu(bilgiler.soyad, "soyad") == false) {
        yanlis_olanlar += ("\nsoyad");
    }

    if (uygunmu(bilgiler.eposta, "eposta") == false) {
        yanlis_olanlar += ("\neposta");
    }

    if (dolumu(yanlis_olanlar) == true) {
        alert("Yanlış girilen bilgiler: " + yanlis_olanlar);
        return false;
    }

    return true;


}

/* İletişim sayfasındaki tarih input'una girilecek verinin en fazla bugün olmasını sağlar. */

function max_tarih() {
    var today = new Date;
    var gun = today.getDate();
    var ay = today.getMonth() + 1;
    var yil = today.getFullYear();

    if (gun < 10)
        gun = '0' + gun

    if (ay < 10)
        ay = '0' + ay

    today = yil + '-' + ay + '-' + gun;

    document.getElementById("tarih").setAttribute("max", today);
}

/* İletişim sayfasında bulunan dosya input'una tıklanma olayını meydana getirir. */

function dosya_tiklama() {

    document.getElementById("dosya").click();

}

/* İletişim sayfasında bulunan dosya input'unun değerini butona isim olarak verir.  */

function dosya_isim_degistir(x) {

    if (x == 1) {
        dosya_ismi = document.getElementById("dosya").value;
        dosya_ismi = dosya_ismi.split('\\').pop().split('/').pop();

        if (dosya_ismi != "")
            document.getElementById("btn-dosya").innerHTML = dosya_ismi;
    }

    else if (x == 2) {

        document.getElementById("btn-dosya").innerHTML = "Fotoğrafı Yükle";

    }

}