using System;
using System.Windows.Forms;

namespace Dates_of_Final_Exam
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();

            Course_ComboBox.SelectedIndex = 0;

        }

        private void Course_DateTimePicker_ValueChanged(object sender, EventArgs e)
        {

            int index = Course_TextBox.Text.IndexOf(Course_ComboBox.Text);

            if (index==-1)
            Course_TextBox.Text += Course_ComboBox.Text + "\t" + Course_DateTimePicker.Value.ToShortDateString()+ Environment.NewLine;

        }
    }
}
