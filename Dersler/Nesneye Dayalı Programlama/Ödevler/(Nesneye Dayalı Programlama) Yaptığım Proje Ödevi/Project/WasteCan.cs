using System;

namespace Project
{
    public class WasteCan:IWasteCan
    {
        private int _scoreOfEmpty;
        private int _capacity;
        private int _filledVolume;
        private int _fillRatio;
        private string _type;

        public WasteCan(int scoreOfEmpty, int capacity,string type)
        {

            _scoreOfEmpty = (scoreOfEmpty > 0 ? scoreOfEmpty : 0);
            _capacity = (capacity > 0 ? capacity : 0);
            _type = type;
            _filledVolume = 0;
            _fillRatio = 0;

        }

        public int ScoreOfEmpty
        {
            get { return _scoreOfEmpty; }
        }

        public int Capacity
        {
            get { return _capacity; }
            set { _capacity = value; }
        }

        public int FilledVolume
        {
            get { return _filledVolume; }
        }

        public int FillRatio
        {
            get { return _fillRatio; }
        }

        public bool Add(Waste waste)
        {

            if (waste.Type == _type && waste.Volume < (Capacity - FilledVolume))                                    // Waste is added to waste can if there are enough volume in waste can
            {

                _filledVolume += waste.Volume;
                _fillRatio = _filledVolume * 100 / _capacity;

                return true;

            }

            else return false;

        }

        public bool Empty()
        {

            if (_fillRatio > 75)                                          // 'Waste can' is emptyed if fill ratio is greater than 75%
            {

                _filledVolume = 0;
                _fillRatio = 0;

                return true;

            }

            else return false;

        }

        public void Clear()
        {

            _filledVolume = 0;
            _fillRatio = 0;

        }
    }
}
