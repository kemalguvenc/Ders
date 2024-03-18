namespace Grade_Calculator
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
            this.Quiz_Label = new System.Windows.Forms.Label();
            this.Vize_Label = new System.Windows.Forms.Label();
            this.Final_Label = new System.Windows.Forms.Label();
            this.Quiz_TextBox = new System.Windows.Forms.TextBox();
            this.Vize_TextBox = new System.Windows.Forms.TextBox();
            this.Final_TextBox = new System.Windows.Forms.TextBox();
            this.Grade_Label = new System.Windows.Forms.Label();
            this.Grade = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // Quiz_Label
            // 
            this.Quiz_Label.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Quiz_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Quiz_Label.Location = new System.Drawing.Point(35, 46);
            this.Quiz_Label.Name = "Quiz_Label";
            this.Quiz_Label.Size = new System.Drawing.Size(107, 34);
            this.Quiz_Label.TabIndex = 0;
            this.Quiz_Label.Text = "QUIZ";
            this.Quiz_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Quiz_Label.UseCompatibleTextRendering = true;
            // 
            // Vize_Label
            // 
            this.Vize_Label.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Vize_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Vize_Label.Location = new System.Drawing.Point(35, 111);
            this.Vize_Label.Name = "Vize_Label";
            this.Vize_Label.Size = new System.Drawing.Size(107, 34);
            this.Vize_Label.TabIndex = 0;
            this.Vize_Label.Text = "VİZE";
            this.Vize_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Vize_Label.UseCompatibleTextRendering = true;
            // 
            // Final_Label
            // 
            this.Final_Label.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Final_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Final_Label.Location = new System.Drawing.Point(35, 178);
            this.Final_Label.Name = "Final_Label";
            this.Final_Label.Size = new System.Drawing.Size(107, 34);
            this.Final_Label.TabIndex = 0;
            this.Final_Label.Text = "FİNAL";
            this.Final_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Final_Label.UseCompatibleTextRendering = true;
            // 
            // Quiz_TextBox
            // 
            this.Quiz_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Quiz_TextBox.Location = new System.Drawing.Point(184, 49);
            this.Quiz_TextBox.Name = "Quiz_TextBox";
            this.Quiz_TextBox.Size = new System.Drawing.Size(107, 29);
            this.Quiz_TextBox.TabIndex = 1;
            // 
            // Vize_TextBox
            // 
            this.Vize_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Vize_TextBox.Location = new System.Drawing.Point(184, 114);
            this.Vize_TextBox.Name = "Vize_TextBox";
            this.Vize_TextBox.Size = new System.Drawing.Size(107, 29);
            this.Vize_TextBox.TabIndex = 2;
            // 
            // Final_TextBox
            // 
            this.Final_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Final_TextBox.Location = new System.Drawing.Point(184, 181);
            this.Final_TextBox.Name = "Final_TextBox";
            this.Final_TextBox.Size = new System.Drawing.Size(107, 29);
            this.Final_TextBox.TabIndex = 3;
            // 
            // Grade_Label
            // 
            this.Grade_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Grade_Label.Location = new System.Drawing.Point(35, 271);
            this.Grade_Label.Name = "Grade_Label";
            this.Grade_Label.Size = new System.Drawing.Size(107, 34);
            this.Grade_Label.TabIndex = 0;
            this.Grade_Label.Text = "Grade";
            this.Grade_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Grade_Label.UseCompatibleTextRendering = true;
            // 
            // Grade
            // 
            this.Grade.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Grade.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Grade.Location = new System.Drawing.Point(184, 271);
            this.Grade.Name = "Grade";
            this.Grade.Size = new System.Drawing.Size(107, 34);
            this.Grade.TabIndex = 0;
            this.Grade.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.Grade.UseCompatibleTextRendering = true;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(255)))), ((int)(((byte)(128)))), ((int)(((byte)(255)))));
            this.ClientSize = new System.Drawing.Size(318, 363);
            this.Controls.Add(this.Final_TextBox);
            this.Controls.Add(this.Vize_TextBox);
            this.Controls.Add(this.Quiz_TextBox);
            this.Controls.Add(this.Grade);
            this.Controls.Add(this.Grade_Label);
            this.Controls.Add(this.Final_Label);
            this.Controls.Add(this.Vize_Label);
            this.Controls.Add(this.Quiz_Label);
            this.KeyPreview = true;
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Grade Calculator";
            this.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.Form1_KeyPress);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label Quiz_Label;
        private System.Windows.Forms.Label Vize_Label;
        private System.Windows.Forms.Label Final_Label;
        private System.Windows.Forms.TextBox Quiz_TextBox;
        private System.Windows.Forms.TextBox Vize_TextBox;
        private System.Windows.Forms.TextBox Final_TextBox;
        private System.Windows.Forms.Label Grade_Label;
        private System.Windows.Forms.Label Grade;
    }
}

