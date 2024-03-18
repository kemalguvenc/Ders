using System;
using System.Windows.Forms;

namespace Color_ScrollBar
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void V_R_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            V_R_Value_Label.Text = V_R_ScrollBar.Value.ToString();
            Sample_Label.BackColor = System.Drawing.Color.FromArgb(V_R_ScrollBar.Value, V_G_ScrollBar.Value, V_B_ScrollBar.Value);
        }

        private void V_G_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            V_G_Value_Label.Text = V_G_ScrollBar.Value.ToString();
            Sample_Label.BackColor = System.Drawing.Color.FromArgb(V_R_ScrollBar.Value, V_G_ScrollBar.Value, V_B_ScrollBar.Value);
        }

        private void V_B_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            V_B_Value_Label.Text = V_B_ScrollBar.Value.ToString();
            Sample_Label.BackColor = System.Drawing.Color.FromArgb(V_R_ScrollBar.Value, V_G_ScrollBar.Value, V_B_ScrollBar.Value);
        }

        private void H_R_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            H_R_Value_Label.Text = H_R_ScrollBar.Value.ToString();
            Sample_Label.ForeColor = System.Drawing.Color.FromArgb(H_R_ScrollBar.Value, H_G_ScrollBar.Value, H_B_ScrollBar.Value);
        }

        private void H_G_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            H_G_Value_Label.Text = H_G_ScrollBar.Value.ToString();
            Sample_Label.ForeColor = System.Drawing.Color.FromArgb(H_R_ScrollBar.Value, H_G_ScrollBar.Value, H_B_ScrollBar.Value);
        }

        private void H_B_ScrollBar_Scroll(object sender, ScrollEventArgs e)
        {
            H_B_Value_Label.Text = H_B_ScrollBar.Value.ToString();
            Sample_Label.ForeColor = System.Drawing.Color.FromArgb(H_R_ScrollBar.Value, H_G_ScrollBar.Value, H_B_ScrollBar.Value);
        }
    }
}
