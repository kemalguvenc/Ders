using System;

namespace Animation_of_Shapes
{
    class Shape
    {
        private int x;
        private int y;

        public int X
        {

            get { return x; }
            set
            {

                if (value > 0)
                    x = value;

                else value = 0;

            }

        }

        public int Y
        {

            get { return y; }
            set
            {

                if (value > 0)
                    y = value;

                else y = 0;
            }

        }

        public virtual void draw()
        {

            Console.SetCursorPosition(x, y);

        }

    }
}
