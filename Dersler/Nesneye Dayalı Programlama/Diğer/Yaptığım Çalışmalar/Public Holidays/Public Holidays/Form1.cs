using System;
using System.Windows.Forms;

namespace Public_Holidays
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Add_Button_Click(object sender, EventArgs e)
        {
            if (textBox1.Text.LastIndexOf(comboBox1.Text) == -1)
                textBox1.Text += comboBox1.Text + "   " + monthCalendar1.SelectionStart.ToShortDateString() + "-----" + monthCalendar1.SelectionEnd.ToShortDateString() + Environment.NewLine;
        }

        private void Remove_Button_Click(object sender, EventArgs e)
        {

            int start_index = textBox1.Text.IndexOf(comboBox1.Text);

            if (start_index != -1)
            {

                int end_index = textBox1.Text.IndexOf(Environment.NewLine, start_index);

                textBox1.Text = textBox1.Text.Remove(start_index, end_index - start_index + 1);

            }


        }

        private void Exit_Button_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
