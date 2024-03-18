namespace Unit_Converter
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
            this.Main_TabControl = new System.Windows.Forms.TabControl();
            this.LengthUnit_TabPage = new System.Windows.Forms.TabPage();
            this.Length_ConvertedValue_Label = new System.Windows.Forms.Label();
            this.Length_Unit2_TextBox = new System.Windows.Forms.TextBox();
            this.Length_Value_TextBox = new System.Windows.Forms.TextBox();
            this.Length_Unit1_TextBox = new System.Windows.Forms.TextBox();
            this.Length_Unit2_ComboBox = new System.Windows.Forms.ComboBox();
            this.Length_Unit1_ComboBox = new System.Windows.Forms.ComboBox();
            this.PowerUnit_TabPage = new System.Windows.Forms.TabPage();
            this.Power_ConvertedValue_Label = new System.Windows.Forms.Label();
            this.Power_Unit2_TextBox = new System.Windows.Forms.TextBox();
            this.Power_Value_TextBox = new System.Windows.Forms.TextBox();
            this.Power_Unit1_TextBox = new System.Windows.Forms.TextBox();
            this.Power_Unit2_ComboBox = new System.Windows.Forms.ComboBox();
            this.Power_Unit1_ComboBox = new System.Windows.Forms.ComboBox();
            this.PressureUnit_TabPage = new System.Windows.Forms.TabPage();
            this.Pressure_ConvertedValue_Label = new System.Windows.Forms.Label();
            this.Pressure_Unit2_TextBox = new System.Windows.Forms.TextBox();
            this.Pressure_Value_TextBox = new System.Windows.Forms.TextBox();
            this.Pressure_Unit1_TextBox = new System.Windows.Forms.TextBox();
            this.Pressure_Unit2_ComboBox = new System.Windows.Forms.ComboBox();
            this.Pressure_Unit1_ComboBox = new System.Windows.Forms.ComboBox();
            this.Exit_Button = new System.Windows.Forms.Button();
            this.Length_Changer_Button = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.Main_TabControl.SuspendLayout();
            this.LengthUnit_TabPage.SuspendLayout();
            this.PowerUnit_TabPage.SuspendLayout();
            this.PressureUnit_TabPage.SuspendLayout();
            this.SuspendLayout();
            // 
            // Main_TabControl
            // 
            this.Main_TabControl.Controls.Add(this.LengthUnit_TabPage);
            this.Main_TabControl.Controls.Add(this.PowerUnit_TabPage);
            this.Main_TabControl.Controls.Add(this.PressureUnit_TabPage);
            this.Main_TabControl.Location = new System.Drawing.Point(12, 12);
            this.Main_TabControl.Name = "Main_TabControl";
            this.Main_TabControl.SelectedIndex = 0;
            this.Main_TabControl.Size = new System.Drawing.Size(393, 309);
            this.Main_TabControl.TabIndex = 0;
            // 
            // LengthUnit_TabPage
            // 
            this.LengthUnit_TabPage.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.LengthUnit_TabPage.Controls.Add(this.Length_Changer_Button);
            this.LengthUnit_TabPage.Controls.Add(this.Length_ConvertedValue_Label);
            this.LengthUnit_TabPage.Controls.Add(this.Length_Unit2_TextBox);
            this.LengthUnit_TabPage.Controls.Add(this.Length_Value_TextBox);
            this.LengthUnit_TabPage.Controls.Add(this.Length_Unit1_TextBox);
            this.LengthUnit_TabPage.Controls.Add(this.Length_Unit2_ComboBox);
            this.LengthUnit_TabPage.Controls.Add(this.Length_Unit1_ComboBox);
            this.LengthUnit_TabPage.Location = new System.Drawing.Point(4, 22);
            this.LengthUnit_TabPage.Name = "LengthUnit_TabPage";
            this.LengthUnit_TabPage.Padding = new System.Windows.Forms.Padding(3);
            this.LengthUnit_TabPage.Size = new System.Drawing.Size(385, 283);
            this.LengthUnit_TabPage.TabIndex = 0;
            this.LengthUnit_TabPage.Text = "Length Unit";
            this.LengthUnit_TabPage.UseVisualStyleBackColor = true;
            this.LengthUnit_TabPage.Enter += new System.EventHandler(this.LengthUnit_TabPage_Enter);
            // 
            // Length_ConvertedValue_Label
            // 
            this.Length_ConvertedValue_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Length_ConvertedValue_Label.Location = new System.Drawing.Point(204, 163);
            this.Length_ConvertedValue_Label.Name = "Length_ConvertedValue_Label";
            this.Length_ConvertedValue_Label.Size = new System.Drawing.Size(100, 20);
            this.Length_ConvertedValue_Label.TabIndex = 2;
            this.Length_ConvertedValue_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Length_Unit2_TextBox
            // 
            this.Length_Unit2_TextBox.Enabled = false;
            this.Length_Unit2_TextBox.Location = new System.Drawing.Point(77, 163);
            this.Length_Unit2_TextBox.Name = "Length_Unit2_TextBox";
            this.Length_Unit2_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Length_Unit2_TextBox.TabIndex = 1;
            // 
            // Length_Value_TextBox
            // 
            this.Length_Value_TextBox.Location = new System.Drawing.Point(204, 107);
            this.Length_Value_TextBox.Name = "Length_Value_TextBox";
            this.Length_Value_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Length_Value_TextBox.TabIndex = 1;
            this.Length_Value_TextBox.TextChanged += new System.EventHandler(this.Value_TextBox_TextChanged);
            // 
            // Length_Unit1_TextBox
            // 
            this.Length_Unit1_TextBox.Enabled = false;
            this.Length_Unit1_TextBox.Location = new System.Drawing.Point(77, 107);
            this.Length_Unit1_TextBox.Name = "Length_Unit1_TextBox";
            this.Length_Unit1_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Length_Unit1_TextBox.TabIndex = 1;
            // 
            // Length_Unit2_ComboBox
            // 
            this.Length_Unit2_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Length_Unit2_ComboBox.FormattingEnabled = true;
            this.Length_Unit2_ComboBox.Items.AddRange(new object[] {
            "Foot",
            "Inch",
            "Meter",
            "Mil",
            "Yard"});
            this.Length_Unit2_ComboBox.Location = new System.Drawing.Point(224, 37);
            this.Length_Unit2_ComboBox.Name = "Length_Unit2_ComboBox";
            this.Length_Unit2_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Length_Unit2_ComboBox.Sorted = true;
            this.Length_Unit2_ComboBox.TabIndex = 0;
            this.Length_Unit2_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit2_ComboBox_SelectedIndexChanged);
            // 
            // Length_Unit1_ComboBox
            // 
            this.Length_Unit1_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Length_Unit1_ComboBox.FormattingEnabled = true;
            this.Length_Unit1_ComboBox.Items.AddRange(new object[] {
            "Foot",
            "Inch",
            "Meter",
            "Mil",
            "Yard"});
            this.Length_Unit1_ComboBox.Location = new System.Drawing.Point(32, 37);
            this.Length_Unit1_ComboBox.Name = "Length_Unit1_ComboBox";
            this.Length_Unit1_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Length_Unit1_ComboBox.Sorted = true;
            this.Length_Unit1_ComboBox.TabIndex = 0;
            this.Length_Unit1_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit1_ComboBox_SelectedIndexChanged);
            // 
            // PowerUnit_TabPage
            // 
            this.PowerUnit_TabPage.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.PowerUnit_TabPage.Controls.Add(this.button1);
            this.PowerUnit_TabPage.Controls.Add(this.Power_ConvertedValue_Label);
            this.PowerUnit_TabPage.Controls.Add(this.Power_Unit2_TextBox);
            this.PowerUnit_TabPage.Controls.Add(this.Power_Value_TextBox);
            this.PowerUnit_TabPage.Controls.Add(this.Power_Unit1_TextBox);
            this.PowerUnit_TabPage.Controls.Add(this.Power_Unit2_ComboBox);
            this.PowerUnit_TabPage.Controls.Add(this.Power_Unit1_ComboBox);
            this.PowerUnit_TabPage.Location = new System.Drawing.Point(4, 22);
            this.PowerUnit_TabPage.Name = "PowerUnit_TabPage";
            this.PowerUnit_TabPage.Padding = new System.Windows.Forms.Padding(3);
            this.PowerUnit_TabPage.Size = new System.Drawing.Size(385, 283);
            this.PowerUnit_TabPage.TabIndex = 1;
            this.PowerUnit_TabPage.Text = "Power Unit";
            this.PowerUnit_TabPage.UseVisualStyleBackColor = true;
            this.PowerUnit_TabPage.Enter += new System.EventHandler(this.PowerUnit_TabPage_Enter);
            // 
            // Power_ConvertedValue_Label
            // 
            this.Power_ConvertedValue_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Power_ConvertedValue_Label.Location = new System.Drawing.Point(204, 163);
            this.Power_ConvertedValue_Label.Name = "Power_ConvertedValue_Label";
            this.Power_ConvertedValue_Label.Size = new System.Drawing.Size(100, 20);
            this.Power_ConvertedValue_Label.TabIndex = 8;
            this.Power_ConvertedValue_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Power_Unit2_TextBox
            // 
            this.Power_Unit2_TextBox.Enabled = false;
            this.Power_Unit2_TextBox.Location = new System.Drawing.Point(77, 163);
            this.Power_Unit2_TextBox.Name = "Power_Unit2_TextBox";
            this.Power_Unit2_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Power_Unit2_TextBox.TabIndex = 5;
            // 
            // Power_Value_TextBox
            // 
            this.Power_Value_TextBox.Location = new System.Drawing.Point(204, 107);
            this.Power_Value_TextBox.Name = "Power_Value_TextBox";
            this.Power_Value_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Power_Value_TextBox.TabIndex = 6;
            this.Power_Value_TextBox.TextChanged += new System.EventHandler(this.Value_TextBox_TextChanged);
            // 
            // Power_Unit1_TextBox
            // 
            this.Power_Unit1_TextBox.Enabled = false;
            this.Power_Unit1_TextBox.Location = new System.Drawing.Point(77, 107);
            this.Power_Unit1_TextBox.Name = "Power_Unit1_TextBox";
            this.Power_Unit1_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Power_Unit1_TextBox.TabIndex = 7;
            // 
            // Power_Unit2_ComboBox
            // 
            this.Power_Unit2_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Power_Unit2_ComboBox.FormattingEnabled = true;
            this.Power_Unit2_ComboBox.Items.AddRange(new object[] {
            "Kcal/s",
            "kgf. m/s",
            "KW",
            "PS"});
            this.Power_Unit2_ComboBox.Location = new System.Drawing.Point(224, 37);
            this.Power_Unit2_ComboBox.Name = "Power_Unit2_ComboBox";
            this.Power_Unit2_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Power_Unit2_ComboBox.Sorted = true;
            this.Power_Unit2_ComboBox.TabIndex = 3;
            this.Power_Unit2_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit2_ComboBox_SelectedIndexChanged);
            // 
            // Power_Unit1_ComboBox
            // 
            this.Power_Unit1_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Power_Unit1_ComboBox.FormattingEnabled = true;
            this.Power_Unit1_ComboBox.Items.AddRange(new object[] {
            "Kcal/s",
            "kgf. m/s",
            "KW",
            "PS"});
            this.Power_Unit1_ComboBox.Location = new System.Drawing.Point(32, 37);
            this.Power_Unit1_ComboBox.Name = "Power_Unit1_ComboBox";
            this.Power_Unit1_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Power_Unit1_ComboBox.Sorted = true;
            this.Power_Unit1_ComboBox.TabIndex = 4;
            this.Power_Unit1_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit1_ComboBox_SelectedIndexChanged);
            // 
            // PressureUnit_TabPage
            // 
            this.PressureUnit_TabPage.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.PressureUnit_TabPage.Controls.Add(this.button2);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_ConvertedValue_Label);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_Unit2_TextBox);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_Value_TextBox);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_Unit1_TextBox);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_Unit2_ComboBox);
            this.PressureUnit_TabPage.Controls.Add(this.Pressure_Unit1_ComboBox);
            this.PressureUnit_TabPage.Location = new System.Drawing.Point(4, 22);
            this.PressureUnit_TabPage.Name = "PressureUnit_TabPage";
            this.PressureUnit_TabPage.Padding = new System.Windows.Forms.Padding(3);
            this.PressureUnit_TabPage.Size = new System.Drawing.Size(385, 283);
            this.PressureUnit_TabPage.TabIndex = 2;
            this.PressureUnit_TabPage.Text = "Pressure Unit";
            this.PressureUnit_TabPage.UseVisualStyleBackColor = true;
            this.PressureUnit_TabPage.Enter += new System.EventHandler(this.PressureUnit_TabPage_Enter);
            // 
            // Pressure_ConvertedValue_Label
            // 
            this.Pressure_ConvertedValue_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.Pressure_ConvertedValue_Label.Location = new System.Drawing.Point(204, 163);
            this.Pressure_ConvertedValue_Label.Name = "Pressure_ConvertedValue_Label";
            this.Pressure_ConvertedValue_Label.Size = new System.Drawing.Size(100, 20);
            this.Pressure_ConvertedValue_Label.TabIndex = 8;
            this.Pressure_ConvertedValue_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Pressure_Unit2_TextBox
            // 
            this.Pressure_Unit2_TextBox.Enabled = false;
            this.Pressure_Unit2_TextBox.Location = new System.Drawing.Point(77, 163);
            this.Pressure_Unit2_TextBox.Name = "Pressure_Unit2_TextBox";
            this.Pressure_Unit2_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Pressure_Unit2_TextBox.TabIndex = 5;
            // 
            // Pressure_Value_TextBox
            // 
            this.Pressure_Value_TextBox.Location = new System.Drawing.Point(204, 107);
            this.Pressure_Value_TextBox.Name = "Pressure_Value_TextBox";
            this.Pressure_Value_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Pressure_Value_TextBox.TabIndex = 6;
            this.Pressure_Value_TextBox.TextChanged += new System.EventHandler(this.Value_TextBox_TextChanged);
            // 
            // Pressure_Unit1_TextBox
            // 
            this.Pressure_Unit1_TextBox.Enabled = false;
            this.Pressure_Unit1_TextBox.Location = new System.Drawing.Point(77, 107);
            this.Pressure_Unit1_TextBox.Name = "Pressure_Unit1_TextBox";
            this.Pressure_Unit1_TextBox.Size = new System.Drawing.Size(100, 20);
            this.Pressure_Unit1_TextBox.TabIndex = 7;
            // 
            // Pressure_Unit2_ComboBox
            // 
            this.Pressure_Unit2_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Pressure_Unit2_ComboBox.FormattingEnabled = true;
            this.Pressure_Unit2_ComboBox.Items.AddRange(new object[] {
            "atm",
            "bar",
            "psi"});
            this.Pressure_Unit2_ComboBox.Location = new System.Drawing.Point(224, 37);
            this.Pressure_Unit2_ComboBox.Name = "Pressure_Unit2_ComboBox";
            this.Pressure_Unit2_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Pressure_Unit2_ComboBox.Sorted = true;
            this.Pressure_Unit2_ComboBox.TabIndex = 3;
            this.Pressure_Unit2_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit2_ComboBox_SelectedIndexChanged);
            // 
            // Pressure_Unit1_ComboBox
            // 
            this.Pressure_Unit1_ComboBox.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.Pressure_Unit1_ComboBox.FormattingEnabled = true;
            this.Pressure_Unit1_ComboBox.Items.AddRange(new object[] {
            "atm",
            "bar",
            "psi"});
            this.Pressure_Unit1_ComboBox.Location = new System.Drawing.Point(32, 37);
            this.Pressure_Unit1_ComboBox.Name = "Pressure_Unit1_ComboBox";
            this.Pressure_Unit1_ComboBox.Size = new System.Drawing.Size(121, 21);
            this.Pressure_Unit1_ComboBox.Sorted = true;
            this.Pressure_Unit1_ComboBox.TabIndex = 4;
            this.Pressure_Unit1_ComboBox.SelectedIndexChanged += new System.EventHandler(this.Unit1_ComboBox_SelectedIndexChanged);
            // 
            // Exit_Button
            // 
            this.Exit_Button.Location = new System.Drawing.Point(161, 334);
            this.Exit_Button.Name = "Exit_Button";
            this.Exit_Button.Size = new System.Drawing.Size(75, 23);
            this.Exit_Button.TabIndex = 1;
            this.Exit_Button.Text = "Exit";
            this.Exit_Button.UseVisualStyleBackColor = true;
            this.Exit_Button.Click += new System.EventHandler(this.Exit_Button_Click);
            // 
            // Length_Changer_Button
            // 
            this.Length_Changer_Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Length_Changer_Button.Location = new System.Drawing.Point(168, 35);
            this.Length_Changer_Button.Name = "Length_Changer_Button";
            this.Length_Changer_Button.Size = new System.Drawing.Size(42, 23);
            this.Length_Changer_Button.TabIndex = 3;
            this.Length_Changer_Button.Text = "<< >>";
            this.Length_Changer_Button.UseVisualStyleBackColor = true;
            this.Length_Changer_Button.Click += new System.EventHandler(this.Changer_Button_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.button1.Location = new System.Drawing.Point(168, 35);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(42, 23);
            this.button1.TabIndex = 9;
            this.button1.Text = "<< >>";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.Changer_Button_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("Microsoft Sans Serif", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.button2.Location = new System.Drawing.Point(168, 35);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(42, 23);
            this.button2.TabIndex = 9;
            this.button2.Text = "<< >>";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.Changer_Button_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(417, 369);
            this.Controls.Add(this.Exit_Button);
            this.Controls.Add(this.Main_TabControl);
            this.Name = "Form1";
            this.Text = "Unit Converter";
            this.Main_TabControl.ResumeLayout(false);
            this.LengthUnit_TabPage.ResumeLayout(false);
            this.LengthUnit_TabPage.PerformLayout();
            this.PowerUnit_TabPage.ResumeLayout(false);
            this.PowerUnit_TabPage.PerformLayout();
            this.PressureUnit_TabPage.ResumeLayout(false);
            this.PressureUnit_TabPage.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl Main_TabControl;
        private System.Windows.Forms.TabPage LengthUnit_TabPage;
        private System.Windows.Forms.TabPage PowerUnit_TabPage;
        private System.Windows.Forms.TabPage PressureUnit_TabPage;
        private System.Windows.Forms.Label Length_ConvertedValue_Label;
        private System.Windows.Forms.TextBox Length_Unit2_TextBox;
        private System.Windows.Forms.TextBox Length_Value_TextBox;
        private System.Windows.Forms.TextBox Length_Unit1_TextBox;
        private System.Windows.Forms.ComboBox Length_Unit1_ComboBox;
        private System.Windows.Forms.Button Exit_Button;
        private System.Windows.Forms.ComboBox Length_Unit2_ComboBox;
        private System.Windows.Forms.Label Power_ConvertedValue_Label;
        private System.Windows.Forms.TextBox Power_Unit2_TextBox;
        private System.Windows.Forms.TextBox Power_Value_TextBox;
        private System.Windows.Forms.TextBox Power_Unit1_TextBox;
        private System.Windows.Forms.ComboBox Power_Unit2_ComboBox;
        private System.Windows.Forms.ComboBox Power_Unit1_ComboBox;
        private System.Windows.Forms.Label Pressure_ConvertedValue_Label;
        private System.Windows.Forms.TextBox Pressure_Unit2_TextBox;
        private System.Windows.Forms.TextBox Pressure_Value_TextBox;
        private System.Windows.Forms.TextBox Pressure_Unit1_TextBox;
        private System.Windows.Forms.ComboBox Pressure_Unit2_ComboBox;
        private System.Windows.Forms.ComboBox Pressure_Unit1_ComboBox;
        private System.Windows.Forms.Button Length_Changer_Button;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
    }
}

