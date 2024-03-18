namespace Dates_of_Final_Exam
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
            this.Course_ComboBox = new System.Windows.Forms.ComboBox();
            this.Course_DateTimePicker = new System.Windows.Forms.DateTimePicker();
            this.Course_TextBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // Course_ComboBox
            // 
            this.Course_ComboBox.FormattingEnabled = true;
            this.Course_ComboBox.Items.AddRange(new object[] {
            "Object Oriented Programming",
            "Mathematics II",
            "Physics II",
            "Web Tecnologies",
            "Probability and Statistics"});
            this.Course_ComboBox.Location = new System.Drawing.Point(26, 38);
            this.Course_ComboBox.Name = "Course_ComboBox";
            this.Course_ComboBox.Size = new System.Drawing.Size(267, 21);
            this.Course_ComboBox.TabIndex = 0;
            // 
            // Course_DateTimePicker
            // 
            this.Course_DateTimePicker.Location = new System.Drawing.Point(26, 88);
            this.Course_DateTimePicker.Name = "Course_DateTimePicker";
            this.Course_DateTimePicker.Size = new System.Drawing.Size(267, 20);
            this.Course_DateTimePicker.TabIndex = 1;
            this.Course_DateTimePicker.ValueChanged += new System.EventHandler(this.Course_DateTimePicker_ValueChanged);
            // 
            // Course_TextBox
            // 
            this.Course_TextBox.Location = new System.Drawing.Point(26, 148);
            this.Course_TextBox.Multiline = true;
            this.Course_TextBox.Name = "Course_TextBox";
            this.Course_TextBox.ReadOnly = true;
            this.Course_TextBox.Size = new System.Drawing.Size(267, 147);
            this.Course_TextBox.TabIndex = 2;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(317, 321);
            this.Controls.Add(this.Course_TextBox);
            this.Controls.Add(this.Course_DateTimePicker);
            this.Controls.Add(this.Course_ComboBox);
            this.Name = "Form1";
            this.Text = "Dates of Final Exam";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ComboBox Course_ComboBox;
        private System.Windows.Forms.DateTimePicker Course_DateTimePicker;
        private System.Windows.Forms.TextBox Course_TextBox;
    }
}

