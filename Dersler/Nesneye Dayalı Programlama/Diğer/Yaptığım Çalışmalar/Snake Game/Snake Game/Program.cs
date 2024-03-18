using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Snake_Game
{
    class Program
    {
        static void Main(string[] args)
        {

            Snake snake = new Snake();
            Scheme scheme = new Scheme();
            Food food = new Food();

            while (true)
            {
                scheme.Print();
                snake.Print();
                food.Print();

                ConsoleKeyInfo key = Console.ReadKey();

                if (key.Key == ConsoleKey.W || key.Key == ConsoleKey.UpArrow)
                    snake.Move_Up();

                else if (key.Key == ConsoleKey.S || key.Key == ConsoleKey.DownArrow)
                    snake.Move_Down();

                else if (key.Key == ConsoleKey.A || key.Key == ConsoleKey.LeftArrow)
                    snake.Move_Left();

                else if (key.Key == ConsoleKey.D || key.Key == ConsoleKey.RightArrow)
                    snake.Move_Right();


                if (snake.Break(food.X, food.Y) == true)
                    snake.Grow();

                Console.Clear();

            }

        }
    }
}
