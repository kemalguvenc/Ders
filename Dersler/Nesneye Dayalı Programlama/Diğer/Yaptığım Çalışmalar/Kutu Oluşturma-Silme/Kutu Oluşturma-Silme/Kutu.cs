using System;

namespace Karalama
{
    class Kutu
    {
        private int elemanSayisi;
        private Sayi[] sayilar;
        public Random _rnd = new Random();
        public Kutu(int toplamElemanSayisi)
        {

            sayilar = new Sayi[toplamElemanSayisi];
            elemanSayisi = 0;

        }

        public void Ekle()
        {
            if (elemanSayisi < 10)
            {

                sayilar[elemanSayisi] = new Sayi(_rnd);
                elemanSayisi++;

            }

        }

        public void Ciz()
        {

            Console.SetCursorPosition(15, 18);
            for (int i = 0; i <= (elemanSayisi * 10) + 5; i++)
            {

                Console.Write("*");

            }
            Console.SetCursorPosition(15, 19);
            Console.Write("*");

            Console.SetCursorPosition(15, 20);
            Console.Write("*");
            Console.SetCursorPosition(15, 21);
            Console.Write("*");
            Console.SetCursorPosition(15, 22);
            Console.Write("*");

            Console.SetCursorPosition(15, 23);
            Console.Write("*");
            Console.SetCursorPosition(15, 24);
            for (int i = 0; i <= (elemanSayisi * 10) + 5; i++)
            {

                Console.Write("*");

            }

            Console.SetCursorPosition(20 + elemanSayisi * 10, 19);
            Console.Write("*");
            Console.SetCursorPosition(20 + elemanSayisi * 10, 20);
            Console.Write("*");
            Console.SetCursorPosition(20 + elemanSayisi * 10, 21);
            Console.Write("*");
            Console.SetCursorPosition(20 + elemanSayisi * 10, 22);
            Console.Write("*");
            Console.SetCursorPosition(20 + elemanSayisi * 10, 23);
            Console.Write("*");

            for (int i = 0; i < elemanSayisi; i++)
            {
                Console.SetCursorPosition(20 + i * 10, 20);
                sayilar[i].Ciz(20 + i * 10, 20);
            }

        }

        public void Sil()
        {
            if (elemanSayisi > 0)
                elemanSayisi--;

        }



    }
}
