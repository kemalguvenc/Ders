using System;

namespace Animation_of_Shapes
{
    class Square : Shape
    {

        private int edge;
        public Square(int x, int y, int edge)
        {

            X = x;
            Y = y;

            if (edge > 0)
                this.edge = edge;

            else edge = 0;

        }

        public override void draw()
        {
            base.draw();

            for (int i = 0; i < edge; i++)
            {

                if (i == 0 || i == edge - 1)
                {
                    Console.SetCursorPosition(X, Y + i);
                    Console.Write("*".PadRight(edge, '*'));
                }

                else
                {
                    Console.SetCursorPosition(X, Y + i);
                    Console.Write("*");
                    Console.SetCursorPosition(X + edge - 1, Y + i);
                    Console.Write("*");

                }

            }
        }
    }
}
