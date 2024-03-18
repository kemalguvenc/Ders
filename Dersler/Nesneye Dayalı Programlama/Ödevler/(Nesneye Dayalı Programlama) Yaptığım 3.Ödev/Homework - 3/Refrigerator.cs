using System;

namespace Homework___3
{
    class Refrigerator : Product
    {

        public int internalVolume;
        public string energyClass;

        public Refrigerator(int internalVolume,
                            string energyClass
                           )

                            : base("Refrigerator", "Vestel", "NFKY640", "feature", 3500, 0)
        {

            this.internalVolume = internalVolume;
            this.energyClass = energyClass;

        }

        public override int Tax()
        {

            return Convert.ToInt32(Price * 1.05);

        }

    }
}
