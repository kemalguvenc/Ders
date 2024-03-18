using System;
using System.Windows.Forms;

namespace Ideal_Weight_Calculator
{
    public partial class Form1 : Form
    {

        enum Sex { man, woman};

        public Form1()
        {
            InitializeComponent();
        }

        private void Calculate_Button_Click(object sender, EventArgs e)
        {
            int height;
            int birthyear;
            Sex sex;
            float weight;
            float idealWeight;


            try
            {

                height = Convert.ToInt32(Height_TextBox.Text);
                birthyear = Convert.ToInt32(BirthYear_TextBox.Text);
                weight = Convert.ToInt32(Weight_TextBox.Text);

                if (Sex_ComboBox.SelectedText == "Man")
                {
                    sex = Sex.man;
                    idealWeight = (height - 100 + (DateTime.Today.Year - birthyear) / 10) * 0.9f;
                }

                else
                {
                    sex = Sex.woman;
                    idealWeight = (height - 100 + (DateTime.Today.Year - birthyear) / 10) * 0.8f;
                }

                IdealWeight_TextBox.Text = idealWeight.ToString();

                if (weight < idealWeight + 5 && weight > idealWeight - 5) Advice_Label.Text = "Bravo! You are fit.";
                else if(weight > idealWeight + 5) Advice_Label.Text = "You are fat. You should lose weight.";
                else if (weight < idealWeight - 5) Advice_Label.Text = "You are skinny. You should gain weight.";


            }

            catch
            {

                MessageBox.Show("Please, Enter your informations correctly");

            }

        }

        private void Exit_Button_Click(object sender, EventArgs e)
        {
            Close();
        }
    }
}
