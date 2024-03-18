namespace Book_Order_List
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
            this.BookList_CheckedListBox = new System.Windows.Forms.CheckedListBox();
            this.OrderList_Button = new System.Windows.Forms.Button();
            this.OrderList_ListBox = new System.Windows.Forms.ListBox();
            this.BookList_Label = new System.Windows.Forms.Label();
            this.OrderList_Label = new System.Windows.Forms.Label();
            this.Exit_Button = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // BookList_CheckedListBox
            // 
            this.BookList_CheckedListBox.FormattingEnabled = true;
            this.BookList_CheckedListBox.Items.AddRange(new object[] {
            "AutoCAD 14",
            "AutoCAD 2000",
            "AutoCAD 2002",
            "Visual Basic .NET",
            "Pro/ENGİNEER 2001",
            "Catia V5 R9",
            "Visual Basic 6.0",
            "Turbo Pascal 7.0"});
            this.BookList_CheckedListBox.Location = new System.Drawing.Point(38, 90);
            this.BookList_CheckedListBox.Name = "BookList_CheckedListBox";
            this.BookList_CheckedListBox.Size = new System.Drawing.Size(164, 139);
            this.BookList_CheckedListBox.TabIndex = 0;
            // 
            // OrderList_Button
            // 
            this.OrderList_Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.OrderList_Button.Location = new System.Drawing.Point(109, 285);
            this.OrderList_Button.Name = "OrderList_Button";
            this.OrderList_Button.Size = new System.Drawing.Size(107, 23);
            this.OrderList_Button.TabIndex = 1;
            this.OrderList_Button.Text = "Order List";
            this.OrderList_Button.UseCompatibleTextRendering = true;
            this.OrderList_Button.UseVisualStyleBackColor = true;
            this.OrderList_Button.Click += new System.EventHandler(this.OrderList_Button_Click);
            // 
            // OrderList_ListBox
            // 
            this.OrderList_ListBox.FormattingEnabled = true;
            this.OrderList_ListBox.Location = new System.Drawing.Point(259, 90);
            this.OrderList_ListBox.Name = "OrderList_ListBox";
            this.OrderList_ListBox.Size = new System.Drawing.Size(164, 134);
            this.OrderList_ListBox.TabIndex = 2;
            // 
            // BookList_Label
            // 
            this.BookList_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.BookList_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.BookList_Label.Location = new System.Drawing.Point(38, 37);
            this.BookList_Label.Name = "BookList_Label";
            this.BookList_Label.Size = new System.Drawing.Size(164, 31);
            this.BookList_Label.TabIndex = 3;
            this.BookList_Label.Text = "Book List";
            this.BookList_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // OrderList_Label
            // 
            this.OrderList_Label.BorderStyle = System.Windows.Forms.BorderStyle.FixedSingle;
            this.OrderList_Label.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.OrderList_Label.Location = new System.Drawing.Point(259, 37);
            this.OrderList_Label.Name = "OrderList_Label";
            this.OrderList_Label.Size = new System.Drawing.Size(164, 31);
            this.OrderList_Label.TabIndex = 4;
            this.OrderList_Label.Text = "Order List";
            this.OrderList_Label.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // Exit_Button
            // 
            this.Exit_Button.Font = new System.Drawing.Font("Microsoft Sans Serif", 9.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(162)));
            this.Exit_Button.Location = new System.Drawing.Point(247, 285);
            this.Exit_Button.Name = "Exit_Button";
            this.Exit_Button.Size = new System.Drawing.Size(107, 23);
            this.Exit_Button.TabIndex = 1;
            this.Exit_Button.Text = "Exit";
            this.Exit_Button.UseCompatibleTextRendering = true;
            this.Exit_Button.UseVisualStyleBackColor = true;
            this.Exit_Button.Click += new System.EventHandler(this.Exit_Button_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(479, 348);
            this.Controls.Add(this.OrderList_Label);
            this.Controls.Add(this.BookList_Label);
            this.Controls.Add(this.OrderList_ListBox);
            this.Controls.Add(this.Exit_Button);
            this.Controls.Add(this.OrderList_Button);
            this.Controls.Add(this.BookList_CheckedListBox);
            this.Name = "Form1";
            this.Text = "Book Order List";
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.CheckedListBox BookList_CheckedListBox;
        private System.Windows.Forms.Button OrderList_Button;
        private System.Windows.Forms.ListBox OrderList_ListBox;
        private System.Windows.Forms.Label BookList_Label;
        private System.Windows.Forms.Label OrderList_Label;
        private System.Windows.Forms.Button Exit_Button;
    }
}

