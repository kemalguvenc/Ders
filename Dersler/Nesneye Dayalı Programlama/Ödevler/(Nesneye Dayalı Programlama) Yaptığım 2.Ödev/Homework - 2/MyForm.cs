using System;
using System.Windows.Forms;

namespace Homework___2
{
    class MyForm : Form
    {

        private Label Label_X1;
        private Label Label_Y1;
        private Label Label_X2;
        private Label Label_Y2;
        private Label Label_Totals;

        private TextBox Text_X1;
        private TextBox Text_Y1;
        private TextBox Text_X2;
        private TextBox Text_Y2;

        private ListBox List_X;
        private ListBox List_Y;

        private Button Friend;
        private Button End;

        private bool check;

        public MyForm()
        {

            Width = 320;
            Height = 240;
            StartPosition = FormStartPosition.CenterScreen;
            Text = "Friend Numbers";

            check = false;

            Label_X1 = new Label();
            Label_Y1 = new Label();
            Label_X2 = new Label();
            Label_Y2 = new Label();
            Label_Totals = new Label();

            Text_X1 = new TextBox();
            Text_Y1 = new TextBox();
            Text_X2 = new TextBox();
            Text_Y2 = new TextBox();

            List_X = new ListBox();
            List_Y = new ListBox();

            Friend = new Button();
            End = new Button();

            Label_X1.SetBounds(30, 20, 20, 20);
            Label_X1.Text = "X:";
            Label_Y1.SetBounds(30, 60, 20, 20);
            Label_Y1.Text = "Y:";
            Label_X2.Text = "X";
            Label_X2.SetBounds(390, 15, 20, 10);
            Label_Y2.Text = "Y";
            Label_Y2.SetBounds(540, 15, 20, 10);
            Label_Totals.Text = "Totals";
            Label_Totals.SetBounds(300, 250, 50, 20);

            Text_X1.SetBounds(50, 20, 100, 50);
            Text_Y1.SetBounds(50, 60, 100, 50);
            Text_X2.SetBounds(350, 250, 100, 50);
            Text_X2.ReadOnly = true;
            Text_Y2.SetBounds(500, 250, 100, 50);
            Text_Y2.ReadOnly = true;

            List_X.SetBounds(350, 30, 100, 200);
            List_Y.SetBounds(500, 30, 100, 200);

            Friend.SetBounds(30, 150, 100, 30);
            Friend.Text = "Are they friends";
            End.SetBounds(150, 150, 100, 30);
            End.Text = "End";

            Controls.Add(Label_X1);
            Controls.Add(Label_Y1);

            Controls.Add(Text_X1);
            Controls.Add(Text_Y1);

            Controls.Add(Friend);
            Controls.Add(End);

            Friend.Click += Friend_Click;
            End.Click += End_Click;
            Text_X1.TextChanged += Text_TextChanged;
            Text_X1.KeyPress += Text_KeyPress;
            Text_Y1.TextChanged += Text_TextChanged;
            Text_Y1.KeyPress += Text_KeyPress;

        }

        private void Text_KeyPress(object sender, KeyPressEventArgs e)
        {

            e.Handled = !char.IsDigit(e.KeyChar) && !(Convert.ToInt32(e.KeyChar) == 8) && !(Convert.ToInt32(e.KeyChar) == 13) && !(Convert.ToInt32(e.KeyChar) == 1 && !(Convert.ToInt32(e.KeyChar) == 27));

            if (Convert.ToInt32(e.KeyChar) == 13)                               // cheking "Enter Key"
            {

                if (sender == Text_X1) Text_Y1.Focus();
                else Friend.PerformClick();

            }

            if (Convert.ToInt32(e.KeyChar) == 27)                               // cheking "ESC Key"
            {

                End.PerformClick();

            }

        }

        private void Text_TextChanged(object sender, EventArgs e)
        {
            check = false;
        }

        private void End_Click(object sender, EventArgs e)
        {

            if (MessageBox.Show("Are you sure to close the program?", "Closing the program", MessageBoxButtons.YesNo) == DialogResult.Yes) Close();

        }

        private void Friend_Click(object sender, EventArgs e)
        {

            if (check == true)                                                                             // if check equals true, user is still using old numbers. So that the program doesn't work unnecessarily.
                MessageBox.Show("You're still using old numbers. Please, enter new numbers!", "Warning");

            else                                                                                          // if check equals false, user enter new numbers.
            {

                int x_TotalMultipliers = 0;
                int y_TotalMultipliers = 0;
                int x = 0;
                int y = 0;
                bool problem = false;

                try
                {

                    x = int.Parse(Text_X1.Text);
                    y = int.Parse(Text_Y1.Text);

                }
                catch (OverflowException)
                {

                    MessageBox.Show("Entered numbers are too large! Please, enter numbers which are less than old numbers.", "Warning");

                    problem = true;
                    Text_X1.Text = "";
                    Text_Y1.Text = "";

                    Text_X1.Focus();

                    OldForm();

                }
                catch (FormatException)
                {

                    MessageBox.Show("At least one number is missing. Please, enter the other number as well.", "Warning");

                    problem = true;
                    Text_X1.Text = "";
                    Text_Y1.Text = "";

                    Text_X1.Focus();

                    OldForm();

                }
                catch
                {

                    MessageBox.Show("Please, enter numbers correctly", "Warning");

                    problem = true;
                    Text_X1.Text = "";
                    Text_Y1.Text = "";

                    Text_X1.Focus();

                    OldForm();

                }

                if (problem == false)                                                               // if problem equals false, there is no problem.
                {

                    List_X.Items.Clear();
                    List_Y.Items.Clear();

                    for (int i = 1; i <= x / 2; i++)                                                // to find the factors of the first number
                    {

                        if (x % i == 0)
                        {

                            x_TotalMultipliers += i;
                            List_X.Items.Add(i);

                        }

                    }

                    for (int i = 1; i <= y / 2; i++)                                                // to find the factors of the second number
                    {

                        if (y % i == 0)
                        {

                            y_TotalMultipliers += i;
                            List_Y.Items.Add(i);

                        }

                    }

                    if (x_TotalMultipliers == y && x == y_TotalMultipliers)                        // Checking if the numbers are friend. 
                    {

                        Text_X2.Text = x_TotalMultipliers.ToString();
                        Text_Y2.Text = y_TotalMultipliers.ToString();

                        check = true;

                        Text_X1.Focus();

                        NewForm();

                        MessageBox.Show("They are Friend Numbers!");

                    }

                    else
                    {

                        Text_X2.Text = x_TotalMultipliers.ToString();
                        Text_Y2.Text = y_TotalMultipliers.ToString();

                        check = true;

                        Text_X1.Focus();

                        NewForm();

                        MessageBox.Show("They are not Friend Numbers!");

                    }

                }

            }

        }

        private void NewForm()
        {

            Width = 640;
            Height = 330;

            Controls.Add(Label_X2);
            Controls.Add(Label_Y2);
            Controls.Add(Label_Totals);
            Controls.Add(Text_X2);
            Controls.Add(Text_Y2);
            Controls.Add(List_X);
            Controls.Add(List_Y);

        }

        private void OldForm()
        {

            Width = 320;
            Height = 240;

            Controls.Remove(Label_X2);
            Controls.Remove(Label_Y2);
            Controls.Remove(Label_Totals);
            Controls.Remove(Text_X2);
            Controls.Remove(Text_Y2);
            Controls.Remove(List_X);
            Controls.Remove(List_Y);

        }


    }
}
