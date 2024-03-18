using System;

namespace Karalama
{
    class Sayi
    {
        int deger;
        public Sayi(Random rnd)
        {

            deger = rnd.Next(1, 100);

        }

        public void Ciz(int x, int y)
        {
            Console.SetCursorPosition(x, y);
            Console.Write("********");
            Console.SetCursorPosition(x, y + 1);
            Console.Write("*{0,6}*", deger);
            Console.SetCursorPosition(x, y + 2);
            Console.Write("********");

        }

    }
}
