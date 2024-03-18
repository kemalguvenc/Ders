namespace Ideal_Weight_Calculator
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
            this.Height_Label = new System.Windows.Forms.Label();
            this.BirthYear_Label = new System.Windows.Forms.Label();
            this.Sex_Label = new System.Windows.Forms.Label();
            this.Weight_Label = new System.Windows.Forms.Label();
            this.İdealWeight_Label = new System.Windows.Forms.Label();
            this.Advice_Label = new System.Windows.Forms.Label();
            this.Height_TextBox = new System.Windows.Forms.TextBox();
            this.BirthYear_TextBox = new System.Windows.Forms.TextBox();
            this.Weight_TextBox = new System.Windows.Forms.TextBox();
            this.IdealWeight_TextBox = new System.Windows.Forms.TextBox();
            this.Calculate_Button = new System.Windows.Forms.Button();
            this.Exit_Button = new System.Windows.Forms.Button();
            this.Sex_ComboBox = new System.Windows.Forms.ComboBox();
            this.SuspendLayout();
            // 
            // Height_Label
            // 
            this.Height_Label.AutoSize = true;
            this.Height_Label.Location = new System.Drawing.Point(45, 31);
            this.Height_Label.Name = "Height_Label";
            this.Height_Label.Size = new System.Drawing.Size(38, 13);
            this.Height_Label.TabIndex = 0;
            this.Height_Label.Text = "Height";
            // 
            // BirthYear_Label
            // 
            this.BirthYear_Label.AutoSize = true;
            this.BirthYear_Label.Location = new System.Drawing.Point(45, 74);
            this.BirthYear_Label.Name = "BirthYear_Label";
            this.BirthYear_Label.Size = new System.Drawing.Size(53, 13);
            this.BirthYear_Label.TabIndex = 0;
            this.BirthYear_Label.Text = "Birth Year";
            // 
            // Sex_Label
            // 
            this.Sex_Label.AutoSize = true;
            this.Sex_Label.Location = new System.Drawing.Point(45, 117);
            this.Sex_Label.Name = "Sex_Label";
            this.Sex_Label.Size = new System.Drawing.Size(25, 13);
            this.Sex_Label.TabIndex = 0;
            this.Sex_Label.Text = "Sex";
            // 
            // Weight_Label
            // 
            this.Weight_Label.AutoSize = true;
            this.Weight_Label.Location = new System.Drawing.Point(45, 160);
            this.Weight_Label.Name = "Weight_Label";
            this.Weight_Label.Size = new System.Drawing.Size(41, 13);
            this.Weight_Label.TabIndex = 0;
            this.Weight_Label.Text = "Weight";
            // 
            // İdealWeight_Label
            // 
            this.İdealWeight_Label.AutoSize = true;
            this.İdealWeight_Label.Location = new System.Drawing.Point(45, 203);
            this.İdealWeight_Label.Name = "İdealWeight_Label";
            this.İdealWeight_Label.Size = new System.Drawing.Size(64, 13);
            this.İdealWeight_Label.TabIndex = 0;
            this.İdealWeight_Label.Text = "İdealWeight";
            // 
            // Advice_Label
            // 
            this.Advice_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Advice_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Advice_Label.Location = new System.Drawing.Point(48, 251);
            this.Advice_Label.Name = "Advice_Label";
            this.Advice_Label.Size = new System.Drawing.Size(199, 42);
            this.Advice_Label.TabIndex = 0;
            // 
            // Height_TextBox
            // 
            this.Height_TextBox.Location = new System.Drawing.Point(147, 27);
            this.Height_TextBox.Name = "Height_TextBox";
            this.Height_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Height_TextBox.TabIndex = 1;
            // 
            // BirthYear_TextBox
            // 
            this.BirthYear_TextBox.Location = new System.Drawing.Point(147, 70);
            this.BirthYear_TextBox.Name = "BirthYear_TextBox";
            this.BirthYear_TextBox.Size = new System.Drawing.Size(100, 20);
            this.BirthYear_TextBox.TabIndex = 2;
            // 
            // Weight_TextBox
            // 
            this.Weight_TextBox.Location = new System.Drawing.Point(147, 156);
            this.Weight_TextBox.Name = "Weight_TextBox";
            this.Weight_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Weight_TextBox.TabIndex = 4;
            // 
            // IdealWeight_TextBox
            // 
            this.IdealWeight_TextBox.Location = new System.Drawing.Point(147, 199);
            this.IdealWeight_TextBox.Name = "IdealWeight_TextBox";
            this.IdealWeight_TextBox.ReadOnly = true;
            this.IdealWeight_TextBox.Size = new System.Drawing.Size(100, 20);
            this.IdealWeight_TextBox.TabIndex = 5;
            // 
            // Calculate_Button
            // 
            this.Calculate_Button.Location = new System.Drawing.Point(48, 328);
            this.Calculate_Button.Name = "Calculate_Button";
            this.Calculate_Button.Size = new System.Drawing.Size(75, 23);
            this.Calculate_Button.TabIndex = 6;
            this.Calculate_Button.Text = "Calculate";
            this.Calculate_Button.UseVisualStyleBackColor = true;
            this.Calculate_Button.Click += new System.EventHandler(this.Calculate_Button_Click);
            // 
            // Exit_Button
            // 
            this.Exit_Button.Location = new System.Drawing.Point(172, 328);
            this.Exit_Button.Name = "Exit_Button";
            this.Exit_Button.Size = new System.Drawing.Size(75, 23);
            this.Exit_Button.TabIndex = 7;
            this.Exit_Button.Text = "Exit";
            this.Exit_Button.UseVisualStyleBackColor = true;
            this.Exit_Button.Click += new System.EventHandler(this.Exit_Button_Click);
            // 
            // Sex_ComboBox
            // 
            this.Sex_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Sex_ComboBox.FormattingEnabled = true;
            this.Sex_ComboBox.ItemHeight = 13;
            this.Sex_ComboBox.Items.AddRange(new object[] {
            "Man",
            "Woman"});
            this.Sex_ComboBox.Location = new System.Drawing.Point(147, 114);
            this.Sex_ComboBox.MaxDropDownItems = 2;
            this.Sex_ComboBox.Name = "Sex_ComboBox";
            this.Sex_ComboBox.Size = new System.Drawing.Size(100, 21);
            this.Sex_ComboBox.TabIndex = 3;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(293, 375);
            this.Controls.Add(this.Sex_ComboBox);
            this.Controls.Add(this.Exit_Button);
            this.Controls.Add(this.Calculate_Button);
            this.Controls.Add(this.IdealWeight_TextBox);
            this.Controls.Add(this.Weight_TextBox);
            this.Controls.Add(this.BirthYear_TextBox);
            this.Controls.Add(this.Height_TextBox);
            this.Controls.Add(this.Advice_Label);
            this.Controls.Add(this.İdealWeight_Label);
            this.Controls.Add(this.Weight_Label);
            this.Controls.Add(this.Sex_Label);
            this.Controls.Add(this.BirthYear_Label);
            this.Controls.Add(this.Height_Label);
            this.Name = "Form1";
            this.Text = "Ideal Weight Calculator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }
        

        #endregion

        private System.Windows.Forms.Label Height_Label;
        private System.Windows.Forms.Label BirthYear_Label;
        private System.Windows.Forms.Label Sex_Label;
        private System.Windows.Forms.Label Weight_Label;
        private System.Windows.Forms.Label İdealWeight_Label;
        private System.Windows.Forms.Label Advice_Label;
        private System.Windows.Forms.TextBox Height_TextBox;
        private System.Windows.Forms.TextBox BirthYear_TextBox;
        private System.Windows.Forms.TextBox Weight_TextBox;
        private System.Windows.Forms.TextBox IdealWeight_TextBox;
        private System.Windows.Forms.Button Calculate_Button;
        private System.Windows.Forms.Button Exit_Button;
        private System.Windows.Forms.ComboBox Sex_ComboBox;
        
    }
}

