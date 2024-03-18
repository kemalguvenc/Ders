using System;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        enum Operation { Addition, Subraction, Multiplication, Division, Exponentietion };
        Operation opr;

        public Form1()
        {
            InitializeComponent();
            
        }


        
        private void Addition_RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            opr = Operation.Addition;
        }

        private void Subraction_RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            opr = Operation.Subraction;
        }

        private void Multiplication_RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            opr = Operation.Multiplication;
        }

        private void Division_RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            opr = Operation.Division;
        }

        private void Exponentietion_RadioButton_CheckedChanged(object sender, EventArgs e)
        {
            opr = Operation.Exponentietion;
        }

        private void Calculate_Button_Click(object sender, EventArgs e)
        {

            double f_number = 0;
            double s_number = 0;

            try
            {

                f_number = Convert.ToInt32(FirstNumber_TextBox.Text);
                s_number = Convert.ToInt32(SecondNumber_TextBox.Text);

            }

            catch
            {

                MessageBox.Show("Please, Enter numbers correctly");

            }


            double result;
                       
            switch (opr)
            {

                case Operation.Addition:

                    result = f_number + s_number;
                    Result_TextBox.Text = result.ToString();

                    break;

                case Operation.Subraction:

                    result = f_number - s_number;
                    Result_TextBox.Text = result.ToString();

                    break;

                case Operation.Multiplication:

                    result = f_number * s_number;
                    Result_TextBox.Text = result.ToString();

                    break;

                case Operation.Division:

                    result = f_number / s_number;
                    Result_TextBox.Text = result.ToString();

                    break;

                case Operation.Exponentietion:

                    result = Math.Pow(f_number, s_number);
                    Result_TextBox.Text = result.ToString();

                    break;

            }

        }

        private void Exit_Button_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
