using System;

namespace Homework___3
{
    class Product
    {
        private string name;
        private string brand;
        private string model;
        private string feature;
        private int stockQuantity;
        private int price;
        private int selectedItem;

        private static Random rnd = new Random();

        public Product(string name,
                       string brand,
                       string model,
                       string feature,
                       int price,
                       int selectedItem
                      )
        {

            this.name = name;
            this.brand = brand;
            this.model = model;
            this.feature = feature;
            this.price = price;
            this.selectedItem = selectedItem;

            this.stockQuantity = rnd.Next(1, 100);

        }

        public int SelectedItem
        {
            get { return selectedItem; }
            set { selectedItem = value; }
        }

        public int Price
        {
            get { return price; }
        }

        public int StockQuantity
        {
            get { return stockQuantity; }
        }

        public string Name
        {
            get { return name; }
        }

        public virtual int Tax() { return 0; }

    }
}
