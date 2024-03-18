using System;
using System.Windows.Forms;

namespace Unit_Converter
{
    public partial class Form1 : Form
    {

        public Form1()
        {
            InitializeComponent();

        }

        void Calculate_Length()
        {

            double x = 0;

            switch (Length_Unit1_ComboBox.Text)
            {

                case "Meter":
                    {
                        x = Convert.ToDouble(Length_Value_TextBox.Text);
                    }
                    break;

                case "Inch":
                    {
                        x = 1 / 39.3701 * Convert.ToDouble(Length_Value_TextBox.Text);
                    }
                    break;

                case "Foot":
                    {
                        x = 1 / 3.28804 * Convert.ToDouble(Length_Value_TextBox.Text);
                    }
                    break;

                case "Yard":
                    {
                        x = 1 / 1.09361 * Convert.ToDouble(Length_Value_TextBox.Text);
                    }
                    break;

                case "Mil":
                    {
                        x = 1 / 0.00062137 * Convert.ToDouble(Length_Value_TextBox.Text);
                    }
                    break;

            }

            switch (Length_Unit2_ComboBox.Text)
            {

                case "Inch":
                    {
                        x *= 39.3701;
                    }
                    break;

                case "Foot":
                    {
                        x *= 3.28804;
                    }
                    break;

                case "Yard":
                    {
                        x *= 1.09361;
                    }
                    break;

                case "Mil":
                    {
                        x *= 0.00062137;
                    }
                    break;

            }

            Length_ConvertedValue_Label.Text = x.ToString();

        }
        void Calculate_Power() {

            double x = 0;

            switch (Power_Unit1_ComboBox.Text)
            {

                case "kgf. m/s":
                    {
                        x = Convert.ToDouble(Power_Value_TextBox.Text);
                    }
                    break;

                case "KW":
                    {
                        x = 1 / 0.0098 * Convert.ToDouble(Power_Value_TextBox.Text);
                    }
                    break;

                case "Kcal/s":
                    {
                        x = 1 / 0.00234 * Convert.ToDouble(Power_Value_TextBox.Text);
                    }
                    break;

                case "PS":
                    {
                        x = 1 / 0.0133 * Convert.ToDouble(Power_Value_TextBox.Text);
                    }
                    break;

            }

            switch (Power_Unit2_ComboBox.Text)
            {

                case "KW":
                    {
                        x *= 0.0098;
                    }
                    break;

                case "Kcal/s":
                    {
                        x *= 0.00234;
                    }
                    break;

                case "PS":
                    {
                        x *= 0.0133;
                    }
                    break;

            }

            Power_ConvertedValue_Label.Text = x.ToString();

        }
        void Calculate_Pressure() {

            double x = 0;

            switch (Pressure_Unit1_ComboBox.Text)
            {

                case "atm":
                    {
                        x = Convert.ToDouble(Pressure_Value_TextBox.Text);
                    }
                    break;

                case "psi":
                    {
                        x = 1 / 14.65 * Convert.ToDouble(Pressure_Value_TextBox.Text);
                    }
                    break;

                case "bar":
                    {
                        x = 1 / 1.01 * Convert.ToDouble(Pressure_Value_TextBox.Text);
                    }
                    break;

            }

            switch (Pressure_Unit2_ComboBox.Text)
            {

                case "psi":
                    {
                        x *= 14.65;
                    }
                    break;

                case "bar":
                    {
                        x *= 1.01;
                    }
                    break;
                    
            }

            Pressure_ConvertedValue_Label.Text = x.ToString();

        }

        private void Exit_Button_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void Unit1_ComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (Main_TabControl.SelectedIndex == 0)
            {
                Length_Unit1_TextBox.Text = Length_Unit1_ComboBox.Text;

                if (Length_Value_TextBox.Text != "") Calculate_Length();
            }

            else if(Main_TabControl.SelectedIndex == 1)
            {
                Power_Unit1_TextBox.Text = Power_Unit1_ComboBox.Text;

                if (Power_Value_TextBox.Text != "") Calculate_Power();
            }

            else if(Main_TabControl.SelectedIndex == 2)
            {
                Pressure_Unit1_TextBox.Text = Pressure_Unit1_ComboBox.Text;

                if (Pressure_Value_TextBox.Text != "") Calculate_Pressure();
            }
        }

        private void Unit2_ComboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (Main_TabControl.SelectedIndex == 0)
            {
                Length_Unit2_TextBox.Text = Length_Unit2_ComboBox.Text;

                if (Length_Value_TextBox.Text != "") Calculate_Length();
            }

            else if(Main_TabControl.SelectedIndex == 1)
            {
                Power_Unit2_TextBox.Text = Power_Unit2_ComboBox.Text;

                if (Power_Value_TextBox.Text != "") Calculate_Power();
            }

            else if(Main_TabControl.SelectedIndex == 2)
            {
                Pressure_Unit2_TextBox.Text = Pressure_Unit2_ComboBox.Text;

                if (Pressure_Value_TextBox.Text != "") Calculate_Pressure();
            }
        }

        private void Value_TextBox_TextChanged(object sender, EventArgs e)
        {
            if (Main_TabControl.SelectedIndex == 0)
            {
                if (Length_Value_TextBox.Text != "") Calculate_Length();
                else Length_ConvertedValue_Label.Text = "";
            }

            else if (Main_TabControl.SelectedIndex == 1)
            {
                if (Power_Value_TextBox.Text != "") Calculate_Power();
                else Power_ConvertedValue_Label.Text = "";
            }

            else if (Main_TabControl.SelectedIndex == 2)
            {
                if (Pressure_Value_TextBox.Text != "") Calculate_Pressure();
                else Pressure_ConvertedValue_Label.Text = "";
            }
        }

        private void LengthUnit_TabPage_Enter(object sender, EventArgs e)
        {
            if (Length_Unit1_ComboBox.SelectedIndex == -1 && Length_Unit2_ComboBox.SelectedIndex == -1)
            {
                Length_Unit1_ComboBox.SelectedIndex = 0;
                Length_Unit2_ComboBox.SelectedIndex = 0;
            }
        }

        private void PowerUnit_TabPage_Enter(object sender, EventArgs e)
        {
            if (Power_Unit1_ComboBox.SelectedIndex == -1 && Power_Unit2_ComboBox.SelectedIndex == -1)
            {
                Power_Unit1_ComboBox.SelectedIndex = 0;
                Power_Unit2_ComboBox.SelectedIndex = 0;
            }
        }

        private void PressureUnit_TabPage_Enter(object sender, EventArgs e)
        {
            if (Pressure_Unit1_ComboBox.SelectedIndex == -1 && Pressure_Unit2_ComboBox.SelectedIndex == -1)
            {
                Pressure_Unit1_ComboBox.SelectedIndex = 0;
                Pressure_Unit2_ComboBox.SelectedIndex = 0;
            }
        }

        private void Changer_Button_Click(object sender, EventArgs e)
        {
            if (Main_TabControl.SelectedIndex == 0)
            {
                Length_Value_TextBox.Text = Length_ConvertedValue_Label.Text;
                string temp = Length_Unit1_ComboBox.Text;
                Length_Unit1_ComboBox.Text = Length_Unit2_ComboBox.Text;
                Length_Unit2_ComboBox.Text = temp;
            }

            else if (Main_TabControl.SelectedIndex == 1)
            {
                Power_Value_TextBox.Text = Power_ConvertedValue_Label.Text;
                string temp = Power_Unit1_ComboBox.Text;
                Power_Unit1_ComboBox.Text = Power_Unit2_ComboBox.Text;
                Power_Unit2_ComboBox.Text = temp;
            }

            else if (Main_TabControl.SelectedIndex == 2)
            {
                Pressure_Value_TextBox.Text = Pressure_ConvertedValue_Label.Text;
                string temp = Pressure_Unit1_ComboBox.Text;
                Pressure_Unit1_ComboBox.Text = Pressure_Unit2_ComboBox.Text;
                Pressure_Unit2_ComboBox.Text = temp;
            }
        }
    }
}
