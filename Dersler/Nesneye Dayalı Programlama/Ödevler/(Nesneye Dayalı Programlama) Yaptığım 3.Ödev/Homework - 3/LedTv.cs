using System;

namespace Homework___3
{
    class LedTv : Product
    {

        public string screenResulation;
        public int screenSize;

        public LedTv(string screenResulation,
                     int screenSize
                    )

                     : base("Led Tv", "LG", "OLEDB7V", "feature", 4000, 0)
        {

            this.screenResulation = screenResulation;
            this.screenSize = screenSize;

        }

        public override int Tax()
        {

            return Convert.ToInt32(Price * 1.18);

        }

    }
}
