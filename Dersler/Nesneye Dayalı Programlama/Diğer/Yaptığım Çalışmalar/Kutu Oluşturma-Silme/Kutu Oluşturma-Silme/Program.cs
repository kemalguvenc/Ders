using System;

namespace Karalama
{
    class Program
    {
        static void Main(string[] args)
        {

            Kutu nesne = new Kutu(10);

            while (true)
            {
                Console.Clear();

                nesne.Ciz();

                var deger = Console.ReadKey();

                if (deger.KeyChar == 'e' || deger.KeyChar == 'E')
                    nesne.Ekle();

                else if (deger.KeyChar == 's' || deger.KeyChar == 'S')
                    nesne.Sil();

            }

        }
    }
}
