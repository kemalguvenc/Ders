namespace Public_Holidays
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
            this.Label1 = new System.Windows.Forms.Label();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.monthCalendar1 = new System.Windows.Forms.MonthCalendar();
            this.Add_Button = new System.Windows.Forms.Button();
            this.Remove_Button = new System.Windows.Forms.Button();
            this.Exit_Button = new System.Windows.Forms.Button();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // Label1
            // 
            this.Label1.AutoSize = true;
            this.Label1.Location = new System.Drawing.Point(12, 25);
            this.Label1.Name = "Label1";
            this.Label1.Size = new System.Drawing.Size(79, 13);
            this.Label1.TabIndex = 0;
            this.Label1.Text = "Public Holidays";
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "Christmas",
            "Eid ul-Adha",
            "Ramadan",
            "Easter",
            "Republic Day"});
            this.comboBox1.Location = new System.Drawing.Point(12, 48);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 21);
            this.comboBox1.TabIndex = 1;
            // 
            // monthCalendar1
            // 
            this.monthCalendar1.Location = new System.Drawing.Point(12, 98);
            this.monthCalendar1.Name = "monthCalendar1";
            this.monthCalendar1.TabIndex = 2;
            // 
            // Add_Button
            // 
            this.Add_Button.Location = new System.Drawing.Point(290, 99);
            this.Add_Button.Name = "Add_Button";
            this.Add_Button.Size = new System.Drawing.Size(75, 23);
            this.Add_Button.TabIndex = 3;
            this.Add_Button.Text = "Add";
            this.Add_Button.UseVisualStyleBackColor = true;
            this.Add_Button.Click += new System.EventHandler(this.Add_Button_Click);
            // 
            // Remove_Button
            // 
            this.Remove_Button.Location = new System.Drawing.Point(290, 168);
            this.Remove_Button.Name = "Remove_Button";
            this.Remove_Button.Size = new System.Drawing.Size(75, 23);
            this.Remove_Button.TabIndex = 4;
            this.Remove_Button.Text = "Remove";
            this.Remove_Button.UseVisualStyleBackColor = true;
            this.Remove_Button.Click += new System.EventHandler(this.Remove_Button_Click);
            // 
            // Exit_Button
            // 
            this.Exit_Button.Location = new System.Drawing.Point(290, 237);
            this.Exit_Button.Name = "Exit_Button";
            this.Exit_Button.Size = new System.Drawing.Size(75, 23);
            this.Exit_Button.TabIndex = 5;
            this.Exit_Button.Text = "Exit";
            this.Exit_Button.UseVisualStyleBackColor = true;
            this.Exit_Button.Click += new System.EventHandler(this.Exit_Button_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(415, 48);
            this.textBox1.Multiline = true;
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(269, 212);
            this.textBox1.TabIndex = 7;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(696, 291);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.Exit_Button);
            this.Controls.Add(this.Remove_Button);
            this.Controls.Add(this.Add_Button);
            this.Controls.Add(this.monthCalendar1);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.Label1);
            this.Name = "Form1";
            this.Text = "Public Holidays";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Label1;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.MonthCalendar monthCalendar1;
        private System.Windows.Forms.Button Add_Button;
        private System.Windows.Forms.Button Remove_Button;
        private System.Windows.Forms.Button Exit_Button;
        private System.Windows.Forms.TextBox textBox1;
    }
}

