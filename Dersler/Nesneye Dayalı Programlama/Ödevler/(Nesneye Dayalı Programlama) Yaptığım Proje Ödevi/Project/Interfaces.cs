using System;
using System.Drawing;

namespace Project
{
    public interface IRefillable
    {

        int Capacity { get; set; }
        int FilledVolume { get; }
        int FillRatio { get; }

    }

    public interface IWasteCan : IRefillable
    {

        int ScoreOfEmpty { get; }

        bool Add(Waste waste);
        bool Empty();

    }

    public interface IWaste
    {

        int Volume { get; }
        Image Image { get; }

    }

}
