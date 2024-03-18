using System;
using System.Drawing;

namespace Project
{
    public class Waste : IWaste
    {

        private int _volume;
        private Image _image;
        private string _name;
        private string _type;

        public Waste(int volume,Image image,string name,string type)
        {

            _volume = (volume > 0 ? volume : 0);
            _image = image;
            _name = name;
            _type = type;

        }

        public int Volume
        {
            get { return _volume; }
        }

        public Image Image
        {
            get { return _image; }
        }

        public string Name
        {
            get { return _name; }
        }

        public string Type
        {
            get { return _type; }
        }
    }
}
