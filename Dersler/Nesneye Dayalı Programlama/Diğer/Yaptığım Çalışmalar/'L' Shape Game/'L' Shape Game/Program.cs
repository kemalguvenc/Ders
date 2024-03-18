using System;

namespace _L__Shape_Game
{
    class Program
    {
        static void Main(string[] args)
        {
            LShape obj;

            while (true)
            {
                int width, height, enter;
                Console.Clear();
                Console.WriteLine("---------- L Shape Game ----------\n\n");

                Console.Write("1) Set dimension of L Shape\n");
                Console.Write("2) Use the default dimension\n\n");

                Console.Write("\nEnter: ");
                enter = Convert.ToInt32(Console.ReadLine());

                if (enter == 1)
                {

                    Console.Clear();

                    Console.Write("\t\tWidth: ");
                    width = Int32.Parse(Console.ReadLine());

                    Console.Write("\t\tHeight: ");
                    height = Int32.Parse(Console.ReadLine());

                    obj = new LShape(width,height);

                    Console.WriteLine("\nAre you sure?");

                    Console.WriteLine("--- Shape of 'L' ---");

                    obj.Print();

                    Console.Write("Enter (Y/N): ");

                    char ch = Convert.ToChar(Console.ReadLine());

                    if (ch == 'Y' || ch == 'y') break;

                }

                else if (enter == 2)
                {

                    obj = new LShape();

                    Console.WriteLine("\nAre you sure?");

                    Console.WriteLine("--- Shape of 'L' ---");

                    obj.Print();

                    Console.Write("Enter (Y/N): ");

                    char ch = Convert.ToChar(Console.ReadLine());

                    if (ch == 'Y' || ch == 'y') break;

                }

                else
                {

                    Console.WriteLine("You entered wrong number. Please try again.");
                    Console.ReadLine();

                }

            }

            Console.Clear();

            int x = 0, y = 1;

            while (true)
            {
                Console.Clear();
                Console.WriteLine("Width of Console= " + Console.WindowWidth + "Height of Console= " + Console.WindowHeight);

                obj.Print(x,y);

                var button = Console.ReadKey();

                if ((button.KeyChar == 'w' || button.KeyChar == 'W' || button.Key == ConsoleKey.UpArrow) && y > 2) y--;
                else if ((button.KeyChar == 's' || button.KeyChar == 'S' || button.Key == ConsoleKey.DownArrow) && y < Console.WindowHeight - obj.Height) y++;
                else if ((button.KeyChar == 'a' || button.KeyChar == 'A' || button.Key == ConsoleKey.LeftArrow) && x > 0) x--;
                else if ((button.KeyChar == 'd' || button.KeyChar == 'D' || button.Key == ConsoleKey.RightArrow) && x < Console.WindowWidth - obj.Width - 1) x++;
                else if ((button.KeyChar == 'q' || button.KeyChar == 'Q') && x > 0 && y > 2) { x--; y--; }
                else if ((button.KeyChar == 'e' || button.KeyChar == 'E') && x < Console.WindowWidth - obj.Width - 1 && y > 2) { x++; y--; }
                else if ((button.KeyChar == 'z' || button.KeyChar == 'Z') && x > 0 && y < Console.WindowHeight - obj.Height) { x--; y++; }
                else if ((button.KeyChar == 'c' || button.KeyChar == 'C') && x < Console.WindowWidth - obj.Width - 1 && y < Console.WindowHeight - obj.Height) { x++; y++; }
                else if (button.Key == ConsoleKey.Escape)
                {

                    Console.Clear();
                    Console.BackgroundColor = ConsoleColor.Red;
                    Console.ForegroundColor = ConsoleColor.Black;

                    Console.WriteLine("Are you sure close the game? (Y/N) Please, Don't panic. Your game wasn't closed exactly.");
                    char enter = Char.Parse(Console.ReadLine());
                    if (enter == 'y' || enter == 'Y') { Console.ResetColor(); break; }
                    else { Console.ResetColor(); continue; }
                }

            }

            Console.Clear();

            Console.BackgroundColor = ConsoleColor.Red;
            Console.ForegroundColor = ConsoleColor.Black;

            Console.WriteLine("Game was closed. We hope you play the game again.");

            Console.Read();

        }
    }
}
