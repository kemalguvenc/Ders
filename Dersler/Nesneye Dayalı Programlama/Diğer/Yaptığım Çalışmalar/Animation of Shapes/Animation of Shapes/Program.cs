using System;
using System.Threading;

namespace Animation_of_Shapes
{
    class Program
    {
        private static Random rnd = new Random();
        static void Main(string[] args)
        {

            Shape[] objArray = new Shape[10];

            for (int i = 0; i < 10; i++)
            {

                if (i % 2 == 0)
                    objArray[i] = new Square(rnd.Next(10, Console.WindowWidth - 10), rnd.Next(10, Console.WindowHeight - 10), rnd.Next(3, 10));

                else objArray[i] = new Triangle(rnd.Next(10, Console.WindowWidth - 10), rnd.Next(10, Console.WindowHeight - 10), rnd.Next(3, 10));

            }

            while (true)
            {
                Console.Clear();
                for (int i = 0; i < 10; i++)
                {

                    objArray[i].draw();

                    int x;

                    x = rnd.Next(4);

                    if (x == 0)
                        objArray[i].X++;

                    else if (x == 1)
                        objArray[i].Y++;

                    else if (x == 2)
                        objArray[i].X--;

                    else if (x == 3)
                        objArray[i].Y--;

                    if (objArray[i].X > Console.WindowWidth - 10)
                        objArray[i].X = rnd.Next(10, Console.WindowWidth - 10);

                    else if (objArray[i].Y > Console.WindowHeight - 10)
                        objArray[i].Y = rnd.Next(10, Console.WindowHeight - 10);

                    else if (objArray[i].X < 10)
                        objArray[i].X = rnd.Next(10, Console.WindowWidth - 10);

                    else if (objArray[i].Y < 10)
                        objArray[i].Y = rnd.Next(10, Console.WindowHeight - 10);
                }

                Thread.Sleep(30);

            }

        }

    }
}
