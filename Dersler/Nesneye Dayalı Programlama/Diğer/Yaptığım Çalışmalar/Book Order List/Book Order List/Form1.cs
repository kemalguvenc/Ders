using System;
using System.Windows.Forms;

namespace Book_Order_List
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void OrderList_Button_Click(object sender, EventArgs e)
        {

            OrderList_ListBox.Items.Clear();

            for (int i = 0; i < BookList_CheckedListBox.CheckedIndices.Count; i++)
            {

                OrderList_ListBox.Items.Add(BookList_CheckedListBox.CheckedItems[i]);

            }

        }

        private void Exit_Button_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
