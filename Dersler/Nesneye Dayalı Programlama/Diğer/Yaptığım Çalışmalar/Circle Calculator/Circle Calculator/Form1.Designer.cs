namespace Circle_Calculator
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
            this.Radius_Label = new System.Windows.Forms.Label();
            this.Radius_TextBox = new System.Windows.Forms.TextBox();
            this.Perimeter_Label = new System.Windows.Forms.Label();
            this.Perimeter_TextBox = new System.Windows.Forms.TextBox();
            this.Area_Label = new System.Windows.Forms.Label();
            this.Area_TextBox = new System.Windows.Forms.TextBox();
            this.Calculate = new System.Windows.Forms.Button();
            this.Exit = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Radius_Label
            // 
            this.Radius_Label.BackColor = System.Drawing.Color.Blue;
            this.Radius_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Radius_Label.ForeColor = System.Drawing.Color.White;
            this.Radius_Label.Location = new System.Drawing.Point(29, 29);
            this.Radius_Label.Name = "Radius_Label";
            this.Radius_Label.Size = new System.Drawing.Size(110, 35);
            this.Radius_Label.TabIndex = 0;
            this.Radius_Label.Text = "Radius";
            this.Radius_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Radius_TextBox
            // 
            this.Radius_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Radius_TextBox.Location = new System.Drawing.Point(181, 31);
            this.Radius_TextBox.Name = "Radius_TextBox";
            this.Radius_TextBox.Size = new System.Drawing.Size(100, 29);
            this.Radius_TextBox.TabIndex = 0;
            this.Radius_TextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // Perimeter_Label
            // 
            this.Perimeter_Label.BackColor = System.Drawing.Color.Red;
            this.Perimeter_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Perimeter_Label.ForeColor = System.Drawing.Color.White;
            this.Perimeter_Label.Location = new System.Drawing.Point(29, 101);
            this.Perimeter_Label.Name = "Perimeter_Label";
            this.Perimeter_Label.Size = new System.Drawing.Size(110, 35);
            this.Perimeter_Label.TabIndex = 1;
            this.Perimeter_Label.Text = "Perimeter of the Circle";
            this.Perimeter_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Perimeter_TextBox
            // 
            this.Perimeter_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Perimeter_TextBox.Location = new System.Drawing.Point(181, 103);
            this.Perimeter_TextBox.Name = "Perimeter_TextBox";
            this.Perimeter_TextBox.ReadOnly = true;
            this.Perimeter_TextBox.Size = new System.Drawing.Size(100, 29);
            this.Perimeter_TextBox.TabIndex = 1;
            this.Perimeter_TextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // Area_Label
            // 
            this.Area_Label.BackColor = System.Drawing.Color.Red;
            this.Area_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Area_Label.ForeColor = System.Drawing.Color.White;
            this.Area_Label.Location = new System.Drawing.Point(29, 174);
            this.Area_Label.Name = "Area_Label";
            this.Area_Label.Size = new System.Drawing.Size(110, 35);
            this.Area_Label.TabIndex = 2;
            this.Area_Label.Text = "Area of the Circle";
            this.Area_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Area_TextBox
            // 
            this.Area_TextBox.Font = new System.Drawing.Font("Microsoft Sans Serif", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Area_TextBox.Location = new System.Drawing.Point(181, 176);
            this.Area_TextBox.Name = "Area_TextBox";
            this.Area_TextBox.ReadOnly = true;
            this.Area_TextBox.Size = new System.Drawing.Size(100, 29);
            this.Area_TextBox.TabIndex = 2;
            this.Area_TextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // Calculate
            // 
            this.Calculate.BackColor = System.Drawing.Color.Green;
            this.Calculate.ForeColor = System.Drawing.Color.White;
            this.Calculate.Location = new System.Drawing.Point(32, 251);
            this.Calculate.Name = "Calculate";
            this.Calculate.Size = new System.Drawing.Size(97, 32);
            this.Calculate.TabIndex = 3;
            this.Calculate.Text = "Calculate";
            this.Calculate.UseCompatibleTextRendering = true;
            this.Calculate.UseVisualStyleBackColor = false;
            this.Calculate.Click += new System.EventHandler(this.Calculate_Click);
            // 
            // Exit
            // 
            this.Exit.BackColor = System.Drawing.Color.Green;
            this.Exit.ForeColor = System.Drawing.Color.White;
            this.Exit.Location = new System.Drawing.Point(181, 251);
            this.Exit.Name = "Exit";
            this.Exit.Size = new System.Drawing.Size(97, 32);
            this.Exit.TabIndex = 4;
            this.Exit.Text = "Exit";
            this.Exit.UseCompatibleTextRendering = true;
            this.Exit.UseVisualStyleBackColor = false;
            this.Exit.Click += new System.EventHandler(this.Exit_Click);
            // 
            // Form1
            // 
            this.AcceptButton = this.Calculate;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Yellow;
            this.CancelButton = this.Exit;
            this.ClientSize = new System.Drawing.Size(304, 329);
            this.Controls.Add(this.Exit);
            this.Controls.Add(this.Calculate);
            this.Controls.Add(this.Area_TextBox);
            this.Controls.Add(this.Area_Label);
            this.Controls.Add(this.Perimeter_TextBox);
            this.Controls.Add(this.Perimeter_Label);
            this.Controls.Add(this.Radius_TextBox);
            this.Controls.Add(this.Radius_Label);
            this.Name = "Form1";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Circle Calculator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label Radius_Label;
        private System.Windows.Forms.TextBox Radius_TextBox;
        private System.Windows.Forms.Label Perimeter_Label;
        private System.Windows.Forms.TextBox Perimeter_TextBox;
        private System.Windows.Forms.Label Area_Label;
        private System.Windows.Forms.TextBox Area_TextBox;
        private System.Windows.Forms.Button Calculate;
        private System.Windows.Forms.Button Exit;
    }
}

