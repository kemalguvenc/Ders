using System;

namespace Homework___3
{
    class MobilePhone : Product
    {

        public int internalStorage;
        public int ram;
        public int battery;

        public MobilePhone(int internalStorage,
                           int ram,
                           int battery
                          )

                          : base("Mobile Phone", "Xiaomi", "Mi 6", "feature", 2500, 0)
        {

            this.internalStorage = internalStorage;
            this.ram = ram;
            this.battery = battery;

        }

        public override int Tax()
        {

            return Convert.ToInt32(Price * 1.2);

        }

    }
}
