using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake_Game
{
    class Scheme
    {
        private int x;
        private int y;

        public Scheme()
        {

            x = Console.WindowWidth;
            y = Console.WindowHeight;

        }

        public void Print()
        {
            Console.BackgroundColor = ConsoleColor.Red;

            Console.Write("{0,"+x+"}", " ");

            for (int i = 1; i < y - 2; i++)
            {

                Console.SetCursorPosition(0, i);
                Console.Write(" ");

                Console.SetCursorPosition(x-1, i);
                Console.Write(" ");

            }
            Console.Write("{0," + x + "}", " ");

        }
    }
}
