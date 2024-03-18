using System;

namespace Animation_of_Shapes
{
    class Triangle : Shape
    {
        private int height;

        public Triangle(int x, int y, int height)
        {

            X = x;
            Y = y;

            if (height > 0)
                this.height = height;

            else height = 0;

        }

        public override void draw()
        {
            base.draw();

            for (int i = 0; i < height; i++)
            {

                Console.SetCursorPosition(X - i, Y + i);
                Console.Write("*".PadRight(2 * i + 1, '*'));

            }
        }
    }
}
