using System;
using System.Windows.Forms;

namespace Homework___3
{
    public partial class Form1 : Form
    {

        private LedTv tv;
        private Refrigerator refg;
        private Laptop laptop;
        private MobilePhone phone;
        private Cart cart;

        public Form1()
        {

            InitializeComponent();

            tv = new LedTv("4K", 55);
            refg = new Refrigerator(100, "A");
            laptop = new Laptop("3K", 15, 500, 16, 100);
            phone = new MobilePhone(128, 12, 70);
            cart = new Cart();

            MobilePhone_Quantity_Numeric.Maximum = phone.StockQuantity;
            Refrigerator_Quantity_Numeric.Maximum = refg.StockQuantity;
            Laptop_Quantity_Numeric.Maximum = laptop.StockQuantity;
            TV_Quantity_Numeric.Maximum = tv.StockQuantity;

            MobilePhone_Stock.Text = phone.StockQuantity.ToString();
            Refrigerator_Stock.Text = refg.StockQuantity.ToString();
            Laptop_Stock.Text = laptop.StockQuantity.ToString();
            TV_Stock.Text = tv.StockQuantity.ToString();

            MobilePhone_Price.Text = phone.Price.ToString();
            Refrigerator_Price.Text = refg.Price.ToString();
            Laptop_Price.Text = laptop.Price.ToString();
            TV_Price.Text = tv.Price.ToString();

        }
        
        private void Add_Click(object sender, EventArgs e)
        {

            refg.SelectedItem = Convert.ToInt32(Refrigerator_Quantity_Numeric.Value);
            tv.SelectedItem = Convert.ToInt32(TV_Quantity_Numeric.Value);
            laptop.SelectedItem = Convert.ToInt32(Laptop_Quantity_Numeric.Value);
            phone.SelectedItem = Convert.ToInt32(MobilePhone_Quantity_Numeric.Value);

            Quantity_ListBox.Items.Clear();
            Product_ListBox.Items.Clear();
            VAT_ListBox.Items.Clear();

            cart.TotalPriceReset();

            Refrigerator_Stock.Text = (refg.StockQuantity - Refrigerator_Quantity_Numeric.Value).ToString();
            TV_Stock.Text = (tv.StockQuantity - TV_Quantity_Numeric.Value).ToString();
            Laptop_Stock.Text = (laptop.StockQuantity - Laptop_Quantity_Numeric.Value).ToString();
            MobilePhone_Stock.Text = (phone.StockQuantity - MobilePhone_Quantity_Numeric.Value).ToString();

            if (tv.SelectedItem > 0)                                                // If selected items of tv greater than zero, TV will be add to order.
            {
                Quantity_ListBox.Items.Add(tv.SelectedItem);
                Product_ListBox.Items.Add(tv.Name);
                VAT_ListBox.Items.Add(cart.AddProduct(tv));
            }
            if (refg.SelectedItem > 0)                                              // If selected items of refrigerator greater than zero, TV will be add to order.
            {
                Quantity_ListBox.Items.Add(refg.SelectedItem);
                Product_ListBox.Items.Add(refg.Name);
                VAT_ListBox.Items.Add(cart.AddProduct(refg));
            }
            if (laptop.SelectedItem > 0)                                             // If selected items of laptop greater than zero, TV will be add to order.
            {
                Quantity_ListBox.Items.Add(laptop.SelectedItem);
                Product_ListBox.Items.Add(laptop.Name);
                VAT_ListBox.Items.Add(cart.AddProduct(laptop));
            }
            if (phone.SelectedItem > 0)                                              // If selected items of phone greater than zero, TV will be add to order.
            {
                Quantity_ListBox.Items.Add(phone.SelectedItem);
                Product_ListBox.Items.Add(phone.Name);
                VAT_ListBox.Items.Add(cart.AddProduct(phone));
            }
            
            TotalPrice.Text = cart.TotalPrice.ToString();

        }

        private void Clear_Click(object sender, EventArgs e)
        {
            TV_Stock.Text = tv.StockQuantity.ToString();
            Refrigerator_Stock.Text = refg.StockQuantity.ToString();
            Laptop_Stock.Text = laptop.StockQuantity.ToString();
            MobilePhone_Stock.Text = phone.StockQuantity.ToString();

            cart.TotalPriceReset();

            TotalPrice.Text = cart.TotalPrice.ToString();

            Quantity_ListBox.Items.Clear();
            Product_ListBox.Items.Clear();
            VAT_ListBox.Items.Clear();
        }
    }
}