using System;

namespace Homework___3
{
    class Laptop : Product
    {

        public string screenResulation;
        public int screenSize;
        public int internalStorage;
        public int ram;
        public int battery;

        public Laptop(string screenResulation,
                       int screenSize,
                       int internalStorage,
                       int ram,
                       int battery
                     )

                       : base("Laptop", "Apple", "MacbookPro", "feature", 6000, 0)
        {

            this.screenResulation = screenResulation;
            this.screenSize = screenSize;
            this.internalStorage = internalStorage;
            this.ram = ram;
            this.battery = battery;

        }

        public override int Tax()
        {

            return Convert.ToInt32(Price * 1.15);

        }

    }
}
