using System;
using System.Windows.Forms;

namespace Grade_Calculator
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_KeyPress(object sender, KeyPressEventArgs e)
        {

            if (e.KeyChar == 13 && Quiz_TextBox.Text != "" && Vize_TextBox.Text != "" && Final_TextBox.Text != "")
            {
                
                int quiz = Convert.ToInt32(Quiz_TextBox.Text);
                int vize = Convert.ToInt32(Vize_TextBox.Text);
                int final = Convert.ToInt32(Final_TextBox.Text);

                Grade.Text = string.Format("{0:F1}", quiz * 0.1 + vize * 0.3 + final * 0.6);
                
            }

            else if (e.KeyChar == 27)
            {

                DialogResult result = MessageBox.Show("Are you sure?", "Closeing the Program", MessageBoxButtons.YesNo);

                if (result == DialogResult.Yes) Close();

            }
        }
    }
}
