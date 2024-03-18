using System;
using System.Windows.Forms;
using System.Drawing;

namespace Project
{
    public partial class Form1 : Form
    {

        private Waste _waste;

        private WasteCan _organicCan;
        private WasteCan _paperCan;
        private WasteCan _glassCan;
        private WasteCan _metalCan;

        private Random _rnd;

        public Form1()
        {

            InitializeComponent();

            _rnd = new Random();

            _organicCan = new WasteCan(0, 700, "Organic");
            _paperCan = new WasteCan(1000, 1200, "Paper");
            _glassCan = new WasteCan(600, 2200, "Glass");
            _metalCan = new WasteCan(800, 2300, "Metal");

            organicProgressBar.Maximum = _organicCan.Capacity;
            paperProgressBar.Maximum = _paperCan.Capacity;
            glassProgressBar.Maximum = _glassCan.Capacity;
            metalProgressBar.Maximum = _metalCan.Capacity;

        }

        // Functions

        Waste RandomCreate()
        {

            switch (_rnd.Next(0, 8))
            {

                case 0:
                    return new Waste(600, Image.FromFile("GlassBottle.jpg"), "Glass Bottle", "Glass");

                case 1:
                    return new Waste(250, Image.FromFile("Glass.jpg"), "Glass", "Glass");

                case 2:
                    return new Waste(250, Image.FromFile("NewsPaper.jpg"), "NewsPaper", "Paper");

                case 3:
                    return new Waste(200, Image.FromFile("Magazine.jpg"), "Magazine", "Paper");

                case 4:
                    return new Waste(150, Image.FromFile("Tomato.jpg"), "Tomato", "Organic");

                case 5:
                    return new Waste(120, Image.FromFile("Cucumber.jpg"), "Cucumber", "Organic");

                case 6:
                    return new Waste(350, Image.FromFile("ColaCan.jpg"), "ColaCan", "Metal");

                case 7:
                    return new Waste(550, Image.FromFile("TomatoPasteCan.jpg"), "TomatoPasteCan", "Metal");

                default:
                    return null;

            }

        }

        //Events

        private void newGameButton_Click(object sender, EventArgs e)
        {

            _organicCan.Clear();
            _paperCan.Clear();
            _glassCan.Clear();
            _metalCan.Clear();

            organicListBox.Items.Clear();
            paperListBox.Items.Clear();
            glassListBox.Items.Clear();
            metalListBox.Items.Clear();

            organicProgressBar.Value = 0;
            paperProgressBar.Value = 0;
            glassProgressBar.Value = 0;
            metalProgressBar.Value = 0;

            timeLabel2.Text = "60";
            scoreLabel2.Text = "0";

            newGameButton.ForeColor = Color.Black;
            timeLabel2.ForeColor = Color.White;
            timeLabel2.BackColor = Color.MediumTurquoise;
            scoreLabel2.ForeColor = Color.White;
            scoreLabel2.BackColor = Color.MediumTurquoise;

            organicButton.Enabled = true;
            paperButton.Enabled = true;
            glassButton.Enabled = true;
            metalButton.Enabled = true;

            organicListBox.Enabled = true;
            paperListBox.Enabled = true;
            glassListBox.Enabled = true;
            metalListBox.Enabled = true;

            organicEmptyButton.Enabled = true;
            paperEmptyButton.Enabled = true;
            glassEmptyButton.Enabled = true;
            metalEmptyButton.Enabled = true;

            _waste = RandomCreate();
            pictureBox.Image = _waste.Image;

            timer.Enabled = true;

        }

        private void timer_Tick(object sender, EventArgs e)
        {
            if (Convert.ToInt16(timeLabel2.Text) != 0)                                      // If time is not up, game is continuing
            {

                timeLabel2.Text = (Convert.ToInt16(timeLabel2.Text) - 1).ToString();

            }

            else                                                                            // if time is up, game is over
            {
                
                timer.Enabled = false;

                newGameButton.ForeColor = Color.White;
                timeLabel2.ForeColor = Color.MediumTurquoise;
                timeLabel2.BackColor = Color.White;
                scoreLabel2.ForeColor = Color.MediumTurquoise;
                scoreLabel2.BackColor = Color.White;

                organicButton.Enabled = false;
                paperButton.Enabled = false;
                glassButton.Enabled = false;
                metalButton.Enabled = false;

                organicListBox.Enabled = false;
                paperListBox.Enabled = false;
                glassListBox.Enabled = false;
                metalListBox.Enabled = false;

                organicEmptyButton.Enabled = false;
                paperEmptyButton.Enabled = false;
                glassEmptyButton.Enabled = false;
                metalEmptyButton.Enabled = false;

                _waste = null;

            }
        }

        private void exitButton_Click(object sender, EventArgs e)
        {
            Close();
        }

        private void Form1_FormClosing(object sender, FormClosingEventArgs e)
        {
            if (MessageBox.Show("Are you sure to close the game", "Closig the game", MessageBoxButtons.YesNo, MessageBoxIcon.Warning) == DialogResult.No)             // Show the message to ask for closing the game
            {

                e.Cancel = true;

            }
        }

        private void organicButton_Click(object sender, EventArgs e)
        {
            if (_organicCan.Add(_waste))                                                                                  // Waste is added to waste can if there are enough volume in waste can
            {

                organicListBox.Items.Add(_waste.Name + "(" + _waste.Volume + ")");
                organicProgressBar.Value += _waste.Volume;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _waste.Volume).ToString();

                _waste = RandomCreate();
                pictureBox.Image = _waste.Image;

            }
        }

        private void paperButton_Click(object sender, EventArgs e)
        {
            if (_paperCan.Add(_waste))                                                                                  // Waste is added to waste can if there are enough volume in waste can
            {

                paperListBox.Items.Add(_waste.Name + "(" + _waste.Volume + ")");
                paperProgressBar.Value += _waste.Volume;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _waste.Volume).ToString();

                _waste = RandomCreate();
                pictureBox.Image = _waste.Image;

            }
        }

        private void glassButton_Click(object sender, EventArgs e)
        {
            if (_glassCan.Add(_waste))                                                                                  // Waste is added to waste can if there are enough volume in waste can
            {

                glassListBox.Items.Add(_waste.Name + "(" + _waste.Volume + ")");
                glassProgressBar.Value += _waste.Volume;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _waste.Volume).ToString();

                _waste = RandomCreate();
                pictureBox.Image = _waste.Image;

            }
        }

        private void metalButton_Click(object sender, EventArgs e)
        {
            if (_metalCan.Add(_waste))                                                                                  // Waste is added to waste can if there are enough volume in waste can
            {

                metalListBox.Items.Add(_waste.Name + "(" + _waste.Volume + ")");
                metalProgressBar.Value += _waste.Volume;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _waste.Volume).ToString();

                _waste = RandomCreate();
                pictureBox.Image = _waste.Image;

            }
        }

        private void organicEmptyButton_Click(object sender, EventArgs e)
        {

            if (_organicCan.Empty())                                                                                  // 'Waste can' is emptyed if fill ratio is greater than 75%
            {

                organicListBox.Items.Clear();
                organicProgressBar.Value = 0;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _organicCan.ScoreOfEmpty).ToString();
                timeLabel2.Text = (Convert.ToInt16(timeLabel2.Text) + 3).ToString();

            }

        }

        private void paperEmptyButton_Click(object sender, EventArgs e)
        {

            if (_paperCan.Empty())                                                                                  // 'Waste can' is emptyed if fill ratio is greater than 75%
            {

                paperListBox.Items.Clear();
                paperProgressBar.Value = 0;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _paperCan.ScoreOfEmpty).ToString();
                timeLabel2.Text = (Convert.ToInt16(timeLabel2.Text) + 3).ToString();

            }

        }

        private void glassEmptyButton_Click(object sender, EventArgs e)
        {

            if (_glassCan.Empty())                                                                                  // 'Waste can' is emptyed if fill ratio is greater than 75%
            {

                glassListBox.Items.Clear();
                glassProgressBar.Value = 0;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _glassCan.ScoreOfEmpty).ToString();
                timeLabel2.Text = (Convert.ToInt16(timeLabel2.Text) + 3).ToString();

            }

        }

        private void metalEmptyButton_Click(object sender, EventArgs e)
        {

            if (_metalCan.Empty())                                                                                  // 'Waste can' is emptyed if fill ratio is greater than 75%
            {

                metalListBox.Items.Clear();
                metalProgressBar.Value = 0;

                scoreLabel2.Text = (Convert.ToInt16(scoreLabel2.Text) + _metalCan.ScoreOfEmpty).ToString();
                timeLabel2.Text = (Convert.ToInt16(timeLabel2.Text) + 3).ToString();

            }

        }

    }
}