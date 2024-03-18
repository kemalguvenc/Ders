using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake_Game
{
    class Food
    {
        private int x;
        private int y;

        Random rnd;

        public Food()
        {

            rnd = new Random();

            x = rnd.Next(1, Console.WindowWidth - 2);
            y = rnd.Next(1, Console.WindowHeight - 2);

        }

        public void Print()
        {

            Console.BackgroundColor = ConsoleColor.Red;

            Console.SetCursorPosition(x, y);
            Console.Write(" ");
            Console.ResetColor();

        }

        public void update()
        {

            x = rnd.Next(1, Console.WindowWidth - 2);
            y = rnd.Next(1, Console.WindowHeight - 2);

        }

        public int X
        {

            get { return x; }

        }

        public int Y
        {

            get { return y; }

        }
    }
}
