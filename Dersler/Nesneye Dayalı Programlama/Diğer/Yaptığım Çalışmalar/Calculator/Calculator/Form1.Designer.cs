namespace Calculator
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
            this.FirstNumber_Label = new System.Windows.Forms.Label();
            this.FirstNumber_TextBox = new System.Windows.Forms.TextBox();
            this.SecondNumber_Label = new System.Windows.Forms.Label();
            this.SecondNumber_TextBox = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.Exponentietion_RadioButton = new System.Windows.Forms.RadioButton();
            this.Division_RadioButton = new System.Windows.Forms.RadioButton();
            this.Multiplication_RadioButton = new System.Windows.Forms.RadioButton();
            this.Subraction_RadioButton = new System.Windows.Forms.RadioButton();
            this.Addition_RadioButton = new System.Windows.Forms.RadioButton();
            this.Result_Label = new System.Windows.Forms.Label();
            this.Result_TextBox = new System.Windows.Forms.TextBox();
            this.Calculate_Button = new System.Windows.Forms.Button();
            this.Exit_Button = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // FirstNumber_Label
            // 
            this.FirstNumber_Label.BackColor = System.Drawing.Color.Red;
            this.FirstNumber_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.FirstNumber_Label.ForeColor = System.Drawing.Color.White;
            this.FirstNumber_Label.Location = new System.Drawing.Point(75, 42);
            this.FirstNumber_Label.Name = "FirstNumber_Label";
            this.FirstNumber_Label.Size = new System.Drawing.Size(145, 41);
            this.FirstNumber_Label.TabIndex = 0;
            this.FirstNumber_Label.Text = "1. Number";
            this.FirstNumber_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // FirstNumber_TextBox
            // 
            this.FirstNumber_TextBox.Location = new System.Drawing.Point(75, 98);
            this.FirstNumber_TextBox.Name = "FirstNumber_TextBox";
            this.FirstNumber_TextBox.Size = new System.Drawing.Size(145, 20);
            this.FirstNumber_TextBox.TabIndex = 1;
            // 
            // SecondNumber_Label
            // 
            this.SecondNumber_Label.BackColor = System.Drawing.Color.Red;
            this.SecondNumber_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.SecondNumber_Label.ForeColor = System.Drawing.Color.White;
            this.SecondNumber_Label.Location = new System.Drawing.Point(75, 180);
            this.SecondNumber_Label.Name = "SecondNumber_Label";
            this.SecondNumber_Label.Size = new System.Drawing.Size(145, 41);
            this.SecondNumber_Label.TabIndex = 0;
            this.SecondNumber_Label.Text = "2. Number";
            this.SecondNumber_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // SecondNumber_TextBox
            // 
            this.SecondNumber_TextBox.Location = new System.Drawing.Point(75, 237);
            this.SecondNumber_TextBox.Name = "SecondNumber_TextBox";
            this.SecondNumber_TextBox.Size = new System.Drawing.Size(145, 20);
            this.SecondNumber_TextBox.TabIndex = 1;
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.Exponentietion_RadioButton);
            this.groupBox1.Controls.Add(this.Division_RadioButton);
            this.groupBox1.Controls.Add(this.Multiplication_RadioButton);
            this.groupBox1.Controls.Add(this.Subraction_RadioButton);
            this.groupBox1.Controls.Add(this.Addition_RadioButton);
            this.groupBox1.Location = new System.Drawing.Point(259, 52);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(166, 169);
            this.groupBox1.TabIndex = 2;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Operation Type";
            // 
            // Exponentietion_RadioButton
            // 
            this.Exponentietion_RadioButton.AutoSize = true;
            this.Exponentietion_RadioButton.Location = new System.Drawing.Point(16, 138);
            this.Exponentietion_RadioButton.Name = "Exponentietion_RadioButton";
            this.Exponentietion_RadioButton.Size = new System.Drawing.Size(95, 17);
            this.Exponentietion_RadioButton.TabIndex = 0;
            this.Exponentietion_RadioButton.TabStop = true;
            this.Exponentietion_RadioButton.Text = "Exponentiation";
            this.Exponentietion_RadioButton.UseVisualStyleBackColor = true;
            this.Exponentietion_RadioButton.CheckedChanged += new System.EventHandler(this.Exponentietion_RadioButton_CheckedChanged);
            // 
            // Division_RadioButton
            // 
            this.Division_RadioButton.AutoSize = true;
            this.Division_RadioButton.Location = new System.Drawing.Point(16, 115);
            this.Division_RadioButton.Name = "Division_RadioButton";
            this.Division_RadioButton.Size = new System.Drawing.Size(62, 17);
            this.Division_RadioButton.TabIndex = 0;
            this.Division_RadioButton.TabStop = true;
            this.Division_RadioButton.Text = "Division";
            this.Division_RadioButton.UseVisualStyleBackColor = true;
            this.Division_RadioButton.CheckedChanged += new System.EventHandler(this.Division_RadioButton_CheckedChanged);
            // 
            // Multiplication_RadioButton
            // 
            this.Multiplication_RadioButton.AutoSize = true;
            this.Multiplication_RadioButton.Location = new System.Drawing.Point(16, 92);
            this.Multiplication_RadioButton.Name = "Multiplication_RadioButton";
            this.Multiplication_RadioButton.Size = new System.Drawing.Size(86, 17);
            this.Multiplication_RadioButton.TabIndex = 0;
            this.Multiplication_RadioButton.TabStop = true;
            this.Multiplication_RadioButton.Text = "Multiplication";
            this.Multiplication_RadioButton.UseVisualStyleBackColor = true;
            this.Multiplication_RadioButton.CheckedChanged += new System.EventHandler(this.Multiplication_RadioButton_CheckedChanged);
            // 
            // Subraction_RadioButton
            // 
            this.Subraction_RadioButton.AutoSize = true;
            this.Subraction_RadioButton.Location = new System.Drawing.Point(16, 69);
            this.Subraction_RadioButton.Name = "Subraction_RadioButton";
            this.Subraction_RadioButton.Size = new System.Drawing.Size(79, 17);
            this.Subraction_RadioButton.TabIndex = 0;
            this.Subraction_RadioButton.TabStop = true;
            this.Subraction_RadioButton.Text = "Subtraction";
            this.Subraction_RadioButton.UseVisualStyleBackColor = true;
            this.Subraction_RadioButton.CheckedChanged += new System.EventHandler(this.Subraction_RadioButton_CheckedChanged);
            // 
            // Addition_RadioButton
            // 
            this.Addition_RadioButton.AutoSize = true;
            this.Addition_RadioButton.Location = new System.Drawing.Point(16, 46);
            this.Addition_RadioButton.Name = "Addition_RadioButton";
            this.Addition_RadioButton.Size = new System.Drawing.Size(63, 17);
            this.Addition_RadioButton.TabIndex = 0;
            this.Addition_RadioButton.TabStop = true;
            this.Addition_RadioButton.Text = "Addition";
            this.Addition_RadioButton.UseVisualStyleBackColor = true;
            this.Addition_RadioButton.CheckedChanged += new System.EventHandler(this.Addition_RadioButton_CheckedChanged);
            // 
            // Result_Label
            // 
            this.Result_Label.BackColor = System.Drawing.Color.Blue;
            this.Result_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Result_Label.ForeColor = System.Drawing.Color.White;
            this.Result_Label.Location = new System.Drawing.Point(470, 111);
            this.Result_Label.Name = "Result_Label";
            this.Result_Label.Size = new System.Drawing.Size(131, 33);
            this.Result_Label.TabIndex = 3;
            this.Result_Label.Text = "RESULT";
            this.Result_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Result_TextBox
            // 
            this.Result_TextBox.Location = new System.Drawing.Point(470, 167);
            this.Result_TextBox.Name = "Result_TextBox";
            this.Result_TextBox.ReadOnly = true;
            this.Result_TextBox.Size = new System.Drawing.Size(131, 20);
            this.Result_TextBox.TabIndex = 1;
            // 
            // Calculate_Button
            // 
            this.Calculate_Button.BackColor = System.Drawing.Color.Lime;
            this.Calculate_Button.Location = new System.Drawing.Point(153, 302);
            this.Calculate_Button.Name = "Calculate_Button";
            this.Calculate_Button.Size = new System.Drawing.Size(85, 26);
            this.Calculate_Button.TabIndex = 4;
            this.Calculate_Button.Text = "Calculate";
            this.Calculate_Button.UseVisualStyleBackColor = false;
            this.Calculate_Button.Click += new System.EventHandler(this.Calculate_Button_Click);
            // 
            // Exit_Button
            // 
            this.Exit_Button.BackColor = System.Drawing.Color.Lime;
            this.Exit_Button.Location = new System.Drawing.Point(297, 302);
            this.Exit_Button.Name = "Exit_Button";
            this.Exit_Button.Size = new System.Drawing.Size(85, 26);
            this.Exit_Button.TabIndex = 4;
            this.Exit_Button.Text = "Exit";
            this.Exit_Button.UseVisualStyleBackColor = false;
            this.Exit_Button.Click += new System.EventHandler(this.Exit_Button_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(192)))), ((int)(((byte)(192)))));
            this.ClientSize = new System.Drawing.Size(669, 354);
            this.Controls.Add(this.Exit_Button);
            this.Controls.Add(this.Calculate_Button);
            this.Controls.Add(this.Result_Label);
            this.Controls.Add(this.groupBox1);
            this.Controls.Add(this.Result_TextBox);
            this.Controls.Add(this.SecondNumber_TextBox);
            this.Controls.Add(this.SecondNumber_Label);
            this.Controls.Add(this.FirstNumber_TextBox);
            this.Controls.Add(this.FirstNumber_Label);
            this.Name = "Form1";
            this.Text = "Calculator";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label FirstNumber_Label;
        private System.Windows.Forms.TextBox FirstNumber_TextBox;
        private System.Windows.Forms.Label SecondNumber_Label;
        private System.Windows.Forms.TextBox SecondNumber_TextBox;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton Exponentietion_RadioButton;
        private System.Windows.Forms.RadioButton Division_RadioButton;
        private System.Windows.Forms.RadioButton Multiplication_RadioButton;
        private System.Windows.Forms.RadioButton Subraction_RadioButton;
        private System.Windows.Forms.RadioButton Addition_RadioButton;
        private System.Windows.Forms.Label Result_Label;
        private System.Windows.Forms.TextBox Result_TextBox;
        private System.Windows.Forms.Button Calculate_Button;
        private System.Windows.Forms.Button Exit_Button;
    }
}

