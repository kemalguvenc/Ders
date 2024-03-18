using System;

namespace _L__Shape_Game
{
    class LShape
    {

        private int width;
        private int height;

        public LShape()
        {

            this.width = 10;
            this.height = 10;

        }

        public LShape(int width, int height)
        {

            this.width = width;
            this.height = height;

        }

        public void Print(int x, int y)
        {

            Console.BackgroundColor = ConsoleColor.Red;

            for (int i = 0; i < height; i++)
            {
                Console.SetCursorPosition(x, y);

                Console.Write(" ");

                y++;

                if (i == height - 1)
                {

                    for (int j = 0; j < width; j++)
                        Console.Write(" ");

                }

            }

            Console.ResetColor();

        }

        public void Print()
        {

            Console.BackgroundColor = ConsoleColor.Red;

            for (int i = 0; i < height; i++)
            {


                Console.Write(" ");

                Console.WriteLine("");

                if (i == height - 1)
                {

                    for (int j = 0; j < width; j++)
                        Console.Write(" ");

                }

            }

            Console.ResetColor();

        }

        public int Width
        {

            get { return width; }

        }

        public int Height
        {

            get { return height; }

        }

    }
}
