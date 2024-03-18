namespace Color_ScrollBar
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
            this.Sample_Label = new System.Windows.Forms.Label();
            this.saveFileDialog1 = new System.Windows.Forms.SaveFileDialog();
            this.V_R_ScrollBar = new System.Windows.Forms.VScrollBar();
            this.H_R_ScrollBar = new System.Windows.Forms.HScrollBar();
            this.V_R_Value_Label = new System.Windows.Forms.Label();
            this.V_G_ScrollBar = new System.Windows.Forms.VScrollBar();
            this.V_G_Value_Label = new System.Windows.Forms.Label();
            this.V_B_ScrollBar = new System.Windows.Forms.VScrollBar();
            this.V_B_Value_Label = new System.Windows.Forms.Label();
            this.V_R_Label = new System.Windows.Forms.Label();
            this.V_G_Label = new System.Windows.Forms.Label();
            this.V_B_Label = new System.Windows.Forms.Label();
            this.H_R_Label = new System.Windows.Forms.Label();
            this.H_G_Label = new System.Windows.Forms.Label();
            this.H_B_Label = new System.Windows.Forms.Label();
            this.H_G_ScrollBar = new System.Windows.Forms.HScrollBar();
            this.H_B_ScrollBar = new System.Windows.Forms.HScrollBar();
            this.H_R_Value_Label = new System.Windows.Forms.Label();
            this.H_G_Value_Label = new System.Windows.Forms.Label();
            this.H_B_Value_Label = new System.Windows.Forms.Label();
            this.button1 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // Sample_Label
            // 
            this.Sample_Label.BackColor = System.Drawing.Color.Red;
            this.Sample_Label.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.Sample_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 30F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Sample_Label.Location = new System.Drawing.Point(12, 33);
            this.Sample_Label.Name = "Sample_Label";
            this.Sample_Label.Size = new System.Drawing.Size(324, 211);
            this.Sample_Label.TabIndex = 0;
            this.Sample_Label.Text = "SAMPLE";
            this.Sample_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // V_R_ScrollBar
            // 
            this.V_R_ScrollBar.Location = new System.Drawing.Point(382, 46);
            this.V_R_ScrollBar.Maximum = 264;
            this.V_R_ScrollBar.Name = "V_R_ScrollBar";
            this.V_R_ScrollBar.Size = new System.Drawing.Size(25, 185);
            this.V_R_ScrollBar.TabIndex = 1;
            this.V_R_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.V_R_ScrollBar_Scroll);
            // 
            // H_R_ScrollBar
            // 
            this.H_R_ScrollBar.Location = new System.Drawing.Point(37, 265);
            this.H_R_ScrollBar.Maximum = 264;
            this.H_R_ScrollBar.Name = "H_R_ScrollBar";
            this.H_R_ScrollBar.Size = new System.Drawing.Size(185, 25);
            this.H_R_ScrollBar.TabIndex = 2;
            this.H_R_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.H_R_ScrollBar_Scroll);
            // 
            // V_R_Value_Label
            // 
            this.V_R_Value_Label.Location = new System.Drawing.Point(382, 231);
            this.V_R_Value_Label.Name = "V_R_Value_Label";
            this.V_R_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.V_R_Value_Label.TabIndex = 3;
            this.V_R_Value_Label.Text = "0";
            this.V_R_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.V_R_Value_Label.UseCompatibleTextRendering = true;
            // 
            // V_G_ScrollBar
            // 
            this.V_G_ScrollBar.Location = new System.Drawing.Point(438, 46);
            this.V_G_ScrollBar.Maximum = 264;
            this.V_G_ScrollBar.Name = "V_G_ScrollBar";
            this.V_G_ScrollBar.Size = new System.Drawing.Size(25, 185);
            this.V_G_ScrollBar.TabIndex = 1;
            this.V_G_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.V_G_ScrollBar_Scroll);
            // 
            // V_G_Value_Label
            // 
            this.V_G_Value_Label.Location = new System.Drawing.Point(438, 231);
            this.V_G_Value_Label.Name = "V_G_Value_Label";
            this.V_G_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.V_G_Value_Label.TabIndex = 3;
            this.V_G_Value_Label.Text = "0";
            this.V_G_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.V_G_Value_Label.UseCompatibleTextRendering = true;
            // 
            // V_B_ScrollBar
            // 
            this.V_B_ScrollBar.Location = new System.Drawing.Point(494, 46);
            this.V_B_ScrollBar.Maximum = 264;
            this.V_B_ScrollBar.Name = "V_B_ScrollBar";
            this.V_B_ScrollBar.Size = new System.Drawing.Size(25, 185);
            this.V_B_ScrollBar.TabIndex = 1;
            this.V_B_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.V_B_ScrollBar_Scroll);
            // 
            // V_B_Value_Label
            // 
            this.V_B_Value_Label.Location = new System.Drawing.Point(494, 231);
            this.V_B_Value_Label.Name = "V_B_Value_Label";
            this.V_B_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.V_B_Value_Label.TabIndex = 3;
            this.V_B_Value_Label.Text = "0";
            this.V_B_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.V_B_Value_Label.UseCompatibleTextRendering = true;
            // 
            // V_R_Label
            // 
            this.V_R_Label.BackColor = System.Drawing.Color.Red;
            this.V_R_Label.ForeColor = System.Drawing.Color.White;
            this.V_R_Label.Location = new System.Drawing.Point(382, 23);
            this.V_R_Label.Name = "V_R_Label";
            this.V_R_Label.Size = new System.Drawing.Size(25, 23);
            this.V_R_Label.TabIndex = 3;
            this.V_R_Label.Text = "R";
            this.V_R_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // V_G_Label
            // 
            this.V_G_Label.BackColor = System.Drawing.Color.Green;
            this.V_G_Label.ForeColor = System.Drawing.Color.White;
            this.V_G_Label.Location = new System.Drawing.Point(438, 23);
            this.V_G_Label.Name = "V_G_Label";
            this.V_G_Label.Size = new System.Drawing.Size(25, 23);
            this.V_G_Label.TabIndex = 3;
            this.V_G_Label.Text = "G";
            this.V_G_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // V_B_Label
            // 
            this.V_B_Label.BackColor = System.Drawing.Color.Blue;
            this.V_B_Label.ForeColor = System.Drawing.Color.White;
            this.V_B_Label.Location = new System.Drawing.Point(494, 23);
            this.V_B_Label.Name = "V_B_Label";
            this.V_B_Label.Size = new System.Drawing.Size(25, 23);
            this.V_B_Label.TabIndex = 3;
            this.V_B_Label.Text = "B";
            this.V_B_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // H_R_Label
            // 
            this.H_R_Label.BackColor = System.Drawing.Color.Red;
            this.H_R_Label.ForeColor = System.Drawing.Color.White;
            this.H_R_Label.Location = new System.Drawing.Point(9, 265);
            this.H_R_Label.Name = "H_R_Label";
            this.H_R_Label.Size = new System.Drawing.Size(25, 23);
            this.H_R_Label.TabIndex = 3;
            this.H_R_Label.Text = "R";
            this.H_R_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // H_G_Label
            // 
            this.H_G_Label.BackColor = System.Drawing.Color.Green;
            this.H_G_Label.ForeColor = System.Drawing.Color.White;
            this.H_G_Label.Location = new System.Drawing.Point(9, 304);
            this.H_G_Label.Name = "H_G_Label";
            this.H_G_Label.Size = new System.Drawing.Size(25, 23);
            this.H_G_Label.TabIndex = 3;
            this.H_G_Label.Text = "G";
            this.H_G_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // H_B_Label
            // 
            this.H_B_Label.BackColor = System.Drawing.Color.Blue;
            this.H_B_Label.ForeColor = System.Drawing.Color.White;
            this.H_B_Label.Location = new System.Drawing.Point(9, 343);
            this.H_B_Label.Name = "H_B_Label";
            this.H_B_Label.Size = new System.Drawing.Size(25, 23);
            this.H_B_Label.TabIndex = 3;
            this.H_B_Label.Text = "B";
            this.H_B_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // H_G_ScrollBar
            // 
            this.H_G_ScrollBar.Location = new System.Drawing.Point(37, 302);
            this.H_G_ScrollBar.Maximum = 264;
            this.H_G_ScrollBar.Name = "H_G_ScrollBar";
            this.H_G_ScrollBar.Size = new System.Drawing.Size(185, 25);
            this.H_G_ScrollBar.TabIndex = 2;
            this.H_G_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.H_G_ScrollBar_Scroll);
            // 
            // H_B_ScrollBar
            // 
            this.H_B_ScrollBar.Location = new System.Drawing.Point(37, 341);
            this.H_B_ScrollBar.Maximum = 264;
            this.H_B_ScrollBar.Name = "H_B_ScrollBar";
            this.H_B_ScrollBar.Size = new System.Drawing.Size(185, 25);
            this.H_B_ScrollBar.TabIndex = 2;
            this.H_B_ScrollBar.Scroll += new System.Windows.Forms.ScrollEventHandler(this.H_B_ScrollBar_Scroll);
            // 
            // H_R_Value_Label
            // 
            this.H_R_Value_Label.Location = new System.Drawing.Point(225, 270);
            this.H_R_Value_Label.Name = "H_R_Value_Label";
            this.H_R_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.H_R_Value_Label.TabIndex = 3;
            this.H_R_Value_Label.Text = "0";
            this.H_R_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.H_R_Value_Label.UseCompatibleTextRendering = true;
            // 
            // H_G_Value_Label
            // 
            this.H_G_Value_Label.Location = new System.Drawing.Point(225, 309);
            this.H_G_Value_Label.Name = "H_G_Value_Label";
            this.H_G_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.H_G_Value_Label.TabIndex = 3;
            this.H_G_Value_Label.Text = "0";
            this.H_G_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.H_G_Value_Label.UseCompatibleTextRendering = true;
            // 
            // H_B_Value_Label
            // 
            this.H_B_Value_Label.Location = new System.Drawing.Point(225, 348);
            this.H_B_Value_Label.Name = "H_B_Value_Label";
            this.H_B_Value_Label.Size = new System.Drawing.Size(25, 13);
            this.H_B_Value_Label.TabIndex = 3;
            this.H_B_Value_Label.Text = "0";
            this.H_B_Value_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            this.H_B_Value_Label.UseCompatibleTextRendering = true;
            // 
            // button1
            // 
            this.button1.Location = new System.Drawing.Point(417, 324);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(102, 37);
            this.button1.TabIndex = 4;
            this.button1.Text = "Exit";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(544, 393);
            this.Controls.Add(this.button1);
            this.Controls.Add(this.V_B_Value_Label);
            this.Controls.Add(this.V_G_Value_Label);
            this.Controls.Add(this.H_B_Label);
            this.Controls.Add(this.V_B_Label);
            this.Controls.Add(this.H_G_Label);
            this.Controls.Add(this.V_G_Label);
            this.Controls.Add(this.H_R_Label);
            this.Controls.Add(this.V_R_Label);
            this.Controls.Add(this.H_B_Value_Label);
            this.Controls.Add(this.H_G_Value_Label);
            this.Controls.Add(this.H_R_Value_Label);
            this.Controls.Add(this.V_R_Value_Label);
            this.Controls.Add(this.H_B_ScrollBar);
            this.Controls.Add(this.H_G_ScrollBar);
            this.Controls.Add(this.H_R_ScrollBar);
            this.Controls.Add(this.V_B_ScrollBar);
            this.Controls.Add(this.V_G_ScrollBar);
            this.Controls.Add(this.V_R_ScrollBar);
            this.Controls.Add(this.Sample_Label);
            this.Name = "Form1";
            this.Text = "Color ScrollBar";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Label Sample_Label;
        private System.Windows.Forms.SaveFileDialog saveFileDialog1;
        private System.Windows.Forms.VScrollBar V_R_ScrollBar;
        private System.Windows.Forms.HScrollBar H_R_ScrollBar;
        private System.Windows.Forms.Label V_R_Value_Label;
        private System.Windows.Forms.VScrollBar V_G_ScrollBar;
        private System.Windows.Forms.Label V_G_Value_Label;
        private System.Windows.Forms.VScrollBar V_B_ScrollBar;
        private System.Windows.Forms.Label V_B_Value_Label;
        private System.Windows.Forms.Label V_R_Label;
        private System.Windows.Forms.Label V_G_Label;
        private System.Windows.Forms.Label V_B_Label;
        private System.Windows.Forms.Label H_R_Label;
        private System.Windows.Forms.Label H_G_Label;
        private System.Windows.Forms.Label H_B_Label;
        private System.Windows.Forms.HScrollBar H_G_ScrollBar;
        private System.Windows.Forms.HScrollBar H_B_ScrollBar;
        private System.Windows.Forms.Label H_R_Value_Label;
        private System.Windows.Forms.Label H_G_Value_Label;
        private System.Windows.Forms.Label H_B_Value_Label;
        private System.Windows.Forms.Button button1;
    }
}

