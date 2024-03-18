using System;

namespace Homework___3
{
    class Cart
    {

        private int total_price;

        public Cart()
        {

            total_price = 0;

        }

        public int TotalPrice
        {
            get { return total_price; }
        }

        public int AddProduct(Product prd)
        {
            
            total_price += prd.SelectedItem * prd.Tax();
            return prd.SelectedItem * prd.Tax();

        }

        public void TotalPriceReset()
        {
            total_price = 0;
        }
               
    }
}
