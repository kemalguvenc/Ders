using System;

namespace Snake_Game
{
    class Snake
    {

        private struct Sections
        {

            public int x;
            public int y;
        
        }
        private enum Direction
        {
            Up = 0,
            Down = 1,
            Left = 2,
            Right = 3,
        }


        private int length;
        private int head;
        private Random rnd;
        private Sections[] section;
        private Direction direction;

        public Snake()
        {
            rnd = new Random();
            length = 1;
            section = new Sections[length];
            direction = Direction.Right;
            int f_x = rnd.Next(Console.WindowWidth - length);
            int f_y = rnd.Next(Console.WindowHeight - length);
            head = length;

            for(int i = 0; i < length; i++)
            {

                section[i].x = f_x + i;
                section[i].y = f_y;

            }

        }

        public void Print()
        {
            Console.BackgroundColor = ConsoleColor.Red;

            for (int i = 0; i < length; i++)
            {

                Console.SetCursorPosition(section[i].x, section[i].y);
                Console.Write(" ");

            }

            Console.ResetColor();

        }
        public void Move_Up()
        {

            int queue;
            if (head == length) queue = 1;
            else queue = 1 + head;
            section[queue - 1] = section[head - 1];
            head = queue;
            section[head-1].y--;

            direction = Direction.Up;

        }
        public void Move_Down()
        {

            int queue;
            if (head == length) queue = 1;
            else queue = 1 + head;
            section[queue - 1] = section[head - 1];
            head = queue;
            section[head - 1].y++;

            direction = Direction.Down;

        }
        public void Move_Left()
        {

            int queue;
            if (head == length) queue = 1;
            else queue = 1 + head;
            section[queue - 1] = section[head - 1];
            head = queue;
            section[head - 1].x--;

            direction = Direction.Left;

        }
        public void Move_Right()
        {

            int queue;
            if (head == length) queue = 1;
            else queue = 1 + head;
            section[queue - 1] = section[head - 1];
            head = queue;
            section[head - 1].x++;

            direction = Direction.Right;

        }

        public void Grow()
        {

            Sections[] newSection = new Sections[length + 1];

            for(int i = 0; i < length; i++)
            {
                if (head == length) head = 0;
                newSection[i] = section[head++];

            }

            if (direction == Direction.Up)
            {

                newSection[length].x = newSection[length - 1].x;
                newSection[length].y = newSection[length - 1].y - 1;

            }

            else if (direction == Direction.Down)
            {

                newSection[length].x = newSection[length - 1].x;
                newSection[length].y = newSection[length - 1].y + 1;

            }

            else if (direction == Direction.Left)
            {

                newSection[length].x = newSection[length - 1].x - 1;
                newSection[length].y = newSection[length - 1].y;

            }

            else if (direction == Direction.Right)
            {

                newSection[length].x = newSection[length - 1].x + 1;
                newSection[length].y = newSection[length - 1].y;

            }

            section = newSection;

            length++;
            head = length;
        }

        public bool Break(int x, int y)
        {

            if (section[head - 1].x == x && section[head - 1].y == y) return true;
            else return false;

        }

    }

}
