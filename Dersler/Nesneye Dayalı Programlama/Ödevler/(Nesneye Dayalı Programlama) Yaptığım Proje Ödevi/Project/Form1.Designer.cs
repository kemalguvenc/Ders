namespace Project
{
    partial class Form1
    {
        /// <summary>
        ///Gerekli tasarımcı değişkeni.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///Kullanılan tüm kaynakları temizleyin.
        /// </summary>
        ///<param name="disposing">yönetilen kaynaklar dispose edilmeliyse doğru; aksi halde yanlış.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer üretilen kod

        /// <summary>
        /// Tasarımcı desteği için gerekli metot - bu metodun 
        ///içeriğini kod düzenleyici ile değiştirmeyin.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.pictureBox = new System.Windows.Forms.PictureBox();
            this.picturePanel = new System.Windows.Forms.Panel();
            this.menuPanel = new System.Windows.Forms.Panel();
            this.scoreLabel2 = new System.Windows.Forms.Label();
            this.scoreLabel1 = new System.Windows.Forms.Label();
            this.timeLabel2 = new System.Windows.Forms.Label();
            this.timeLabel1 = new System.Windows.Forms.Label();
            this.exitButton = new System.Windows.Forms.Button();
            this.newGameButton = new System.Windows.Forms.Button();
            this.wasteCanLabel = new System.Windows.Forms.Label();
            this.organicPanel = new System.Windows.Forms.Panel();
            this.organicProgressBar = new System.Windows.Forms.ProgressBar();
            this.organicListBox = new System.Windows.Forms.ListBox();
            this.organicEmptyButton = new System.Windows.Forms.Button();
            this.organicButton = new System.Windows.Forms.Button();
            this.paperPanel = new System.Windows.Forms.Panel();
            this.paperProgressBar = new System.Windows.Forms.ProgressBar();
            this.paperListBox = new System.Windows.Forms.ListBox();
            this.paperEmptyButton = new System.Windows.Forms.Button();
            this.paperButton = new System.Windows.Forms.Button();
            this.glassPanel = new System.Windows.Forms.Panel();
            this.glassProgressBar = new System.Windows.Forms.ProgressBar();
            this.glassListBox = new System.Windows.Forms.ListBox();
            this.glassEmptyButton = new System.Windows.Forms.Button();
            this.glassButton = new System.Windows.Forms.Button();
            this.metalPanel = new System.Windows.Forms.Panel();
            this.metalProgressBar = new System.Windows.Forms.ProgressBar();
            this.metalListBox = new System.Windows.Forms.ListBox();
            this.metalEmptyButton = new System.Windows.Forms.Button();
            this.metalButton = new System.Windows.Forms.Button();
            this.timer = new System.Windows.Forms.Timer(this.components);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).BeginInit();
            this.picturePanel.SuspendLayout();
            this.menuPanel.SuspendLayout();
            this.organicPanel.SuspendLayout();
            this.paperPanel.SuspendLayout();
            this.glassPanel.SuspendLayout();
            this.metalPanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // pictureBox
            // 
            this.pictureBox.BackColor = System.Drawing.SystemColors.ControlLight;
            this.pictureBox.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.pictureBox.Location = new System.Drawing.Point(15, 12);
            this.pictureBox.Margin = new System.Windows.Forms.Padding(0);
            this.pictureBox.Name = "pictureBox";
            this.pictureBox.Size = new System.Drawing.Size(180, 180);
            this.pictureBox.SizeMode = System.Windows.Forms.PictureBoxSizeMode.Zoom;
            this.pictureBox.TabIndex = 0;
            this.pictureBox.TabStop = false;
            // 
            // picturePanel
            // 
            this.picturePanel.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.picturePanel.BackColor = System.Drawing.SystemColors.Control;
            this.picturePanel.Controls.Add(this.pictureBox);
            this.picturePanel.Location = new System.Drawing.Point(12, 12);
            this.picturePanel.Name = "picturePanel";
            this.picturePanel.Size = new System.Drawing.Size(210, 204);
            this.picturePanel.TabIndex = 1;
            // 
            // menuPanel
            // 
            this.menuPanel.BackColor = System.Drawing.SystemColors.Control;
            this.menuPanel.Controls.Add(this.scoreLabel2);
            this.menuPanel.Controls.Add(this.scoreLabel1);
            this.menuPanel.Controls.Add(this.timeLabel2);
            this.menuPanel.Controls.Add(this.timeLabel1);
            this.menuPanel.Controls.Add(this.exitButton);
            this.menuPanel.Controls.Add(this.newGameButton);
            this.menuPanel.Location = new System.Drawing.Point(12, 228);
            this.menuPanel.Name = "menuPanel";
            this.menuPanel.Size = new System.Drawing.Size(210, 350);
            this.menuPanel.TabIndex = 2;
            // 
            // scoreLabel2
            // 
            this.scoreLabel2.BackColor = System.Drawing.Color.White;
            this.scoreLabel2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.scoreLabel2.Font = new System.Drawing.Font("Microsoft Sans Serif", 26.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.scoreLabel2.ForeColor = System.Drawing.Color.MediumTurquoise;
            this.scoreLabel2.Location = new System.Drawing.Point(12, 227);
            this.scoreLabel2.Name = "scoreLabel2";
            this.scoreLabel2.Size = new System.Drawing.Size(180, 50);
            this.scoreLabel2.TabIndex = 4;
            this.scoreLabel2.Text = "0";
            this.scoreLabel2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // scoreLabel1
            // 
            this.scoreLabel1.BackColor = System.Drawing.Color.DarkCyan;
            this.scoreLabel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.scoreLabel1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.scoreLabel1.ForeColor = System.Drawing.Color.White;
            this.scoreLabel1.Location = new System.Drawing.Point(12, 194);
            this.scoreLabel1.Name = "scoreLabel1";
            this.scoreLabel1.Size = new System.Drawing.Size(180, 30);
            this.scoreLabel1.TabIndex = 4;
            this.scoreLabel1.Text = "SCORE";
            this.scoreLabel1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // timeLabel2
            // 
            this.timeLabel2.BackColor = System.Drawing.Color.White;
            this.timeLabel2.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.timeLabel2.Font = new System.Drawing.Font("Microsoft Sans Serif", 26.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.timeLabel2.ForeColor = System.Drawing.Color.MediumTurquoise;
            this.timeLabel2.Location = new System.Drawing.Point(12, 126);
            this.timeLabel2.Name = "timeLabel2";
            this.timeLabel2.Size = new System.Drawing.Size(180, 50);
            this.timeLabel2.TabIndex = 4;
            this.timeLabel2.Text = "60";
            this.timeLabel2.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // timeLabel1
            // 
            this.timeLabel1.BackColor = System.Drawing.Color.DarkCyan;
            this.timeLabel1.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.timeLabel1.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.timeLabel1.ForeColor = System.Drawing.Color.White;
            this.timeLabel1.Location = new System.Drawing.Point(12, 93);
            this.timeLabel1.Name = "timeLabel1";
            this.timeLabel1.Size = new System.Drawing.Size(180, 30);
            this.timeLabel1.TabIndex = 4;
            this.timeLabel1.Text = "TIME";
            this.timeLabel1.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // exitButton
            // 
            this.exitButton.BackColor = System.Drawing.Color.DarkSlateGray;
            this.exitButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.exitButton.ForeColor = System.Drawing.Color.White;
            this.exitButton.Location = new System.Drawing.Point(15, 295);
            this.exitButton.Name = "exitButton";
            this.exitButton.Size = new System.Drawing.Size(180, 40);
            this.exitButton.TabIndex = 3;
            this.exitButton.Text = "EXIT";
            this.exitButton.UseVisualStyleBackColor = false;
            this.exitButton.Click += new System.EventHandler(this.exitButton_Click);
            // 
            // newGameButton
            // 
            this.newGameButton.BackColor = System.Drawing.Color.DarkSlateGray;
            this.newGameButton.Font = new System.Drawing.Font("Microsoft Sans Serif", 18F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.newGameButton.ForeColor = System.Drawing.Color.White;
            this.newGameButton.Location = new System.Drawing.Point(15, 15);
            this.newGameButton.Name = "newGameButton";
            this.newGameButton.Size = new System.Drawing.Size(180, 60);
            this.newGameButton.TabIndex = 3;
            this.newGameButton.Text = "NEW GAME";
            this.newGameButton.UseVisualStyleBackColor = false;
            this.newGameButton.Click += new System.EventHandler(this.newGameButton_Click);
            // 
            // wasteCanLabel
            // 
            this.wasteCanLabel.BackColor = System.Drawing.Color.LightYellow;
            this.wasteCanLabel.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.wasteCanLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.wasteCanLabel.ForeColor = System.Drawing.Color.Black;
            this.wasteCanLabel.Location = new System.Drawing.Point(234, 12);
            this.wasteCanLabel.Name = "wasteCanLabel";
            this.wasteCanLabel.Size = new System.Drawing.Size(300, 30);
            this.wasteCanLabel.TabIndex = 4;
            this.wasteCanLabel.Text = "WASTE CANS";
            this.wasteCanLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // organicPanel
            // 
            this.organicPanel.Controls.Add(this.organicProgressBar);
            this.organicPanel.Controls.Add(this.organicListBox);
            this.organicPanel.Controls.Add(this.organicEmptyButton);
            this.organicPanel.Controls.Add(this.organicButton);
            this.organicPanel.Location = new System.Drawing.Point(234, 54);
            this.organicPanel.Name = "organicPanel";
            this.organicPanel.Size = new System.Drawing.Size(147, 259);
            this.organicPanel.TabIndex = 5;
            // 
            // organicProgressBar
            // 
            this.organicProgressBar.Location = new System.Drawing.Point(12, 190);
            this.organicProgressBar.Name = "organicProgressBar";
            this.organicProgressBar.Size = new System.Drawing.Size(123, 19);
            this.organicProgressBar.TabIndex = 2;
            // 
            // organicListBox
            // 
            this.organicListBox.FormattingEnabled = true;
            this.organicListBox.Location = new System.Drawing.Point(12, 50);
            this.organicListBox.Name = "organicListBox";
            this.organicListBox.Size = new System.Drawing.Size(123, 134);
            this.organicListBox.TabIndex = 1;
            // 
            // organicEmptyButton
            // 
            this.organicEmptyButton.Enabled = false;
            this.organicEmptyButton.Location = new System.Drawing.Point(12, 215);
            this.organicEmptyButton.Name = "organicEmptyButton";
            this.organicEmptyButton.Size = new System.Drawing.Size(123, 32);
            this.organicEmptyButton.TabIndex = 0;
            this.organicEmptyButton.Text = "EMPTY";
            this.organicEmptyButton.UseVisualStyleBackColor = true;
            this.organicEmptyButton.Click += new System.EventHandler(this.organicEmptyButton_Click);
            // 
            // organicButton
            // 
            this.organicButton.Enabled = false;
            this.organicButton.Location = new System.Drawing.Point(12, 12);
            this.organicButton.Name = "organicButton";
            this.organicButton.Size = new System.Drawing.Size(123, 32);
            this.organicButton.TabIndex = 0;
            this.organicButton.Text = "ORGANİC";
            this.organicButton.UseVisualStyleBackColor = true;
            this.organicButton.Click += new System.EventHandler(this.organicButton_Click);
            // 
            // paperPanel
            // 
            this.paperPanel.Controls.Add(this.paperProgressBar);
            this.paperPanel.Controls.Add(this.paperListBox);
            this.paperPanel.Controls.Add(this.paperEmptyButton);
            this.paperPanel.Controls.Add(this.paperButton);
            this.paperPanel.Location = new System.Drawing.Point(387, 54);
            this.paperPanel.Name = "paperPanel";
            this.paperPanel.Size = new System.Drawing.Size(147, 259);
            this.paperPanel.TabIndex = 5;
            // 
            // paperProgressBar
            // 
            this.paperProgressBar.Location = new System.Drawing.Point(12, 190);
            this.paperProgressBar.Name = "paperProgressBar";
            this.paperProgressBar.Size = new System.Drawing.Size(123, 19);
            this.paperProgressBar.TabIndex = 2;
            // 
            // paperListBox
            // 
            this.paperListBox.FormattingEnabled = true;
            this.paperListBox.Location = new System.Drawing.Point(12, 50);
            this.paperListBox.Name = "paperListBox";
            this.paperListBox.Size = new System.Drawing.Size(123, 134);
            this.paperListBox.TabIndex = 1;
            // 
            // paperEmptyButton
            // 
            this.paperEmptyButton.Enabled = false;
            this.paperEmptyButton.Location = new System.Drawing.Point(12, 215);
            this.paperEmptyButton.Name = "paperEmptyButton";
            this.paperEmptyButton.Size = new System.Drawing.Size(123, 32);
            this.paperEmptyButton.TabIndex = 0;
            this.paperEmptyButton.Text = "EMPTY";
            this.paperEmptyButton.UseVisualStyleBackColor = true;
            this.paperEmptyButton.Click += new System.EventHandler(this.paperEmptyButton_Click);
            // 
            // paperButton
            // 
            this.paperButton.Enabled = false;
            this.paperButton.Location = new System.Drawing.Point(12, 12);
            this.paperButton.Name = "paperButton";
            this.paperButton.Size = new System.Drawing.Size(123, 32);
            this.paperButton.TabIndex = 0;
            this.paperButton.Text = "PAPER";
            this.paperButton.UseVisualStyleBackColor = true;
            this.paperButton.Click += new System.EventHandler(this.paperButton_Click);
            // 
            // glassPanel
            // 
            this.glassPanel.Controls.Add(this.glassProgressBar);
            this.glassPanel.Controls.Add(this.glassListBox);
            this.glassPanel.Controls.Add(this.glassEmptyButton);
            this.glassPanel.Controls.Add(this.glassButton);
            this.glassPanel.Location = new System.Drawing.Point(234, 319);
            this.glassPanel.Name = "glassPanel";
            this.glassPanel.Size = new System.Drawing.Size(147, 259);
            this.glassPanel.TabIndex = 5;
            // 
            // glassProgressBar
            // 
            this.glassProgressBar.Location = new System.Drawing.Point(12, 190);
            this.glassProgressBar.Name = "glassProgressBar";
            this.glassProgressBar.Size = new System.Drawing.Size(123, 19);
            this.glassProgressBar.TabIndex = 2;
            // 
            // glassListBox
            // 
            this.glassListBox.FormattingEnabled = true;
            this.glassListBox.Location = new System.Drawing.Point(12, 50);
            this.glassListBox.Name = "glassListBox";
            this.glassListBox.Size = new System.Drawing.Size(123, 134);
            this.glassListBox.TabIndex = 1;
            // 
            // glassEmptyButton
            // 
            this.glassEmptyButton.Enabled = false;
            this.glassEmptyButton.Location = new System.Drawing.Point(12, 215);
            this.glassEmptyButton.Name = "glassEmptyButton";
            this.glassEmptyButton.Size = new System.Drawing.Size(123, 32);
            this.glassEmptyButton.TabIndex = 0;
            this.glassEmptyButton.Text = "EMPTY";
            this.glassEmptyButton.UseVisualStyleBackColor = true;
            this.glassEmptyButton.Click += new System.EventHandler(this.glassEmptyButton_Click);
            // 
            // glassButton
            // 
            this.glassButton.Enabled = false;
            this.glassButton.Location = new System.Drawing.Point(12, 12);
            this.glassButton.Name = "glassButton";
            this.glassButton.Size = new System.Drawing.Size(123, 32);
            this.glassButton.TabIndex = 0;
            this.glassButton.Text = "GLASS";
            this.glassButton.UseVisualStyleBackColor = true;
            this.glassButton.Click += new System.EventHandler(this.glassButton_Click);
            // 
            // metalPanel
            // 
            this.metalPanel.Controls.Add(this.metalProgressBar);
            this.metalPanel.Controls.Add(this.metalListBox);
            this.metalPanel.Controls.Add(this.metalEmptyButton);
            this.metalPanel.Controls.Add(this.metalButton);
            this.metalPanel.Location = new System.Drawing.Point(387, 319);
            this.metalPanel.Name = "metalPanel";
            this.metalPanel.Size = new System.Drawing.Size(147, 259);
            this.metalPanel.TabIndex = 5;
            // 
            // metalProgressBar
            // 
            this.metalProgressBar.Location = new System.Drawing.Point(12, 190);
            this.metalProgressBar.Name = "metalProgressBar";
            this.metalProgressBar.Size = new System.Drawing.Size(123, 19);
            this.metalProgressBar.TabIndex = 2;
            // 
            // metalListBox
            // 
            this.metalListBox.FormattingEnabled = true;
            this.metalListBox.Location = new System.Drawing.Point(12, 50);
            this.metalListBox.Name = "metalListBox";
            this.metalListBox.Size = new System.Drawing.Size(123, 134);
            this.metalListBox.TabIndex = 1;
            // 
            // metalEmptyButton
            // 
            this.metalEmptyButton.Enabled = false;
            this.metalEmptyButton.Location = new System.Drawing.Point(12, 215);
            this.metalEmptyButton.Name = "metalEmptyButton";
            this.metalEmptyButton.Size = new System.Drawing.Size(123, 32);
            this.metalEmptyButton.TabIndex = 0;
            this.metalEmptyButton.Text = "EMPTY";
            this.metalEmptyButton.UseVisualStyleBackColor = true;
            this.metalEmptyButton.Click += new System.EventHandler(this.metalEmptyButton_Click);
            // 
            // metalButton
            // 
            this.metalButton.Enabled = false;
            this.metalButton.Location = new System.Drawing.Point(12, 12);
            this.metalButton.Name = "metalButton";
            this.metalButton.Size = new System.Drawing.Size(123, 32);
            this.metalButton.TabIndex = 0;
            this.metalButton.Text = "METAL";
            this.metalButton.UseVisualStyleBackColor = true;
            this.metalButton.Click += new System.EventHandler(this.metalButton_Click);
            // 
            // timer
            // 
            this.timer.Interval = 1000;
            this.timer.Tick += new System.EventHandler(this.timer_Tick);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.DarkSlateGray;
            this.ClientSize = new System.Drawing.Size(546, 590);
            this.Controls.Add(this.metalPanel);
            this.Controls.Add(this.glassPanel);
            this.Controls.Add(this.paperPanel);
            this.Controls.Add(this.organicPanel);
            this.Controls.Add(this.menuPanel);
            this.Controls.Add(this.picturePanel);
            this.Controls.Add(this.wasteCanLabel);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Waste Collection";
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.Form1_FormClosing);
            ((System.ComponentModel.ISupportInitialize)(this.pictureBox)).EndInit();
            this.picturePanel.ResumeLayout(false);
            this.menuPanel.ResumeLayout(false);
            this.organicPanel.ResumeLayout(false);
            this.paperPanel.ResumeLayout(false);
            this.glassPanel.ResumeLayout(false);
            this.metalPanel.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.PictureBox pictureBox;
        private System.Windows.Forms.Panel picturePanel;
        private System.Windows.Forms.Panel menuPanel;
        private System.Windows.Forms.Label timeLabel2;
        private System.Windows.Forms.Label timeLabel1;
        private System.Windows.Forms.Button exitButton;
        private System.Windows.Forms.Button newGameButton;
        private System.Windows.Forms.Label scoreLabel2;
        private System.Windows.Forms.Label scoreLabel1;
        private System.Windows.Forms.Label wasteCanLabel;
        private System.Windows.Forms.Panel organicPanel;
        private System.Windows.Forms.ListBox organicListBox;
        private System.Windows.Forms.Button organicEmptyButton;
        private System.Windows.Forms.Button organicButton;
        private System.Windows.Forms.ProgressBar organicProgressBar;
        private System.Windows.Forms.Panel paperPanel;
        private System.Windows.Forms.ProgressBar paperProgressBar;
        private System.Windows.Forms.ListBox paperListBox;
        private System.Windows.Forms.Button paperEmptyButton;
        private System.Windows.Forms.Button paperButton;
        private System.Windows.Forms.Panel glassPanel;
        private System.Windows.Forms.ProgressBar glassProgressBar;
        private System.Windows.Forms.ListBox glassListBox;
        private System.Windows.Forms.Button glassEmptyButton;
        private System.Windows.Forms.Button glassButton;
        private System.Windows.Forms.Panel metalPanel;
        private System.Windows.Forms.ProgressBar metalProgressBar;
        private System.Windows.Forms.ListBox metalListBox;
        private System.Windows.Forms.Button metalEmptyButton;
        private System.Windows.Forms.Button metalButton;
        private System.Windows.Forms.Timer timer;
    }
}