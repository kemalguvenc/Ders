using System;
using System.Windows.Forms;

namespace Circle_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {

            InitializeComponent();

        }

        private void Calculate_Click(object sender, EventArgs e)
        {

            if (Radius_TextBox.Text != "")
            {

                int r = Convert.ToInt32(Radius_TextBox.Text);

                Perimeter_TextBox.Text = string.Format("{0:F1}", 2 * Math.PI * r);
                Area_TextBox.Text = string.Format("{0:F1}", Math.PI * r * r);


            }

        }

        private void Exit_Click(object sender, EventArgs e)
        {

            DialogResult result = MessageBox.Show("Are you sure?", "Close the Program", MessageBoxButtons.YesNo);

            if (result == DialogResult.Yes) Close();

        }
    }
}
