namespace Lab6Dmitrieva
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            button1 = new Button();
            listProducts = new ListView();
            nameField = new TextBox();
            nameLabel = new Label();
            priceLabel = new Label();
            priceField = new TextBox();
            amountLabel = new Label();
            amountField = new TextBox();
            statusLabel = new Label();
            statusField = new TextBox();
            calocicLabel = new Label();
            caloricField = new TextBox();
            vegetLabel = new Label();
            vegetField = new TextBox();
            editButton = new Button();
            addButton = new Button();
            deleteButton = new Button();
            menuStrip1 = new MenuStrip();
            fileToolStripMenuItem = new ToolStripMenuItem();
            menuStrip1.SuspendLayout();
            SuspendLayout();
            // 
            // button1
            // 
            button1.Location = new Point(599, 252);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 0;
            button1.Text = "button1";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // listProducts
            // 
            listProducts.Location = new Point(34, 36);
            listProducts.Name = "listProducts";
            listProducts.Size = new Size(473, 193);
            listProducts.TabIndex = 1;
            listProducts.UseCompatibleStateImageBehavior = false;
            listProducts.UseWaitCursor = true;
            listProducts.View = View.List;
            listProducts.SelectedIndexChanged += listProducts_SelectedIndexChanged;
            // 
            // nameField
            // 
            nameField.Location = new Point(161, 252);
            nameField.Name = "nameField";
            nameField.Size = new Size(346, 27);
            nameField.TabIndex = 2;
            // 
            // nameLabel
            // 
            nameLabel.AutoSize = true;
            nameLabel.Location = new Point(34, 255);
            nameLabel.Name = "nameLabel";
            nameLabel.Size = new Size(77, 20);
            nameLabel.TabIndex = 3;
            nameLabel.Text = "Название";
            // 
            // priceLabel
            // 
            priceLabel.AutoSize = true;
            priceLabel.Location = new Point(34, 288);
            priceLabel.Name = "priceLabel";
            priceLabel.Size = new Size(83, 20);
            priceLabel.TabIndex = 5;
            priceLabel.Text = "Стоимость";
            // 
            // priceField
            // 
            priceField.Location = new Point(161, 285);
            priceField.Name = "priceField";
            priceField.Size = new Size(346, 27);
            priceField.TabIndex = 4;
            // 
            // amountLabel
            // 
            amountLabel.AutoSize = true;
            amountLabel.Location = new Point(34, 321);
            amountLabel.Name = "amountLabel";
            amountLabel.Size = new Size(90, 20);
            amountLabel.TabIndex = 7;
            amountLabel.Text = "Количество";
            // 
            // amountField
            // 
            amountField.Location = new Point(161, 318);
            amountField.Name = "amountField";
            amountField.Size = new Size(346, 27);
            amountField.TabIndex = 6;
            // 
            // statusLabel
            // 
            statusLabel.AutoSize = true;
            statusLabel.Location = new Point(34, 354);
            statusLabel.Name = "statusLabel";
            statusLabel.Size = new Size(74, 20);
            statusLabel.TabIndex = 9;
            statusLabel.Text = "Доступен";
            // 
            // statusField
            // 
            statusField.Location = new Point(161, 351);
            statusField.Name = "statusField";
            statusField.Size = new Size(346, 27);
            statusField.TabIndex = 8;
            // 
            // calocicLabel
            // 
            calocicLabel.AutoSize = true;
            calocicLabel.Location = new Point(34, 387);
            calocicLabel.Name = "calocicLabel";
            calocicLabel.Size = new Size(109, 20);
            calocicLabel.TabIndex = 11;
            calocicLabel.Text = "Калорийность";
            // 
            // caloricField
            // 
            caloricField.Location = new Point(161, 384);
            caloricField.Name = "caloricField";
            caloricField.Size = new Size(346, 27);
            caloricField.TabIndex = 10;
            // 
            // vegetLabel
            // 
            vegetLabel.AutoSize = true;
            vegetLabel.Location = new Point(34, 420);
            vegetLabel.Name = "vegetLabel";
            vegetLabel.Size = new Size(121, 20);
            vegetLabel.TabIndex = 13;
            vegetLabel.Text = "Вегетарианский";
            // 
            // vegetField
            // 
            vegetField.Location = new Point(161, 417);
            vegetField.Name = "vegetField";
            vegetField.Size = new Size(346, 27);
            vegetField.TabIndex = 12;
            // 
            // editButton
            // 
            editButton.Location = new Point(599, 100);
            editButton.Name = "editButton";
            editButton.Size = new Size(147, 40);
            editButton.TabIndex = 14;
            editButton.Text = "Редактировать";
            editButton.UseVisualStyleBackColor = true;
            // 
            // addButton
            // 
            addButton.Location = new Point(599, 45);
            addButton.Name = "addButton";
            addButton.Size = new Size(147, 35);
            addButton.TabIndex = 15;
            addButton.Text = "Добавить";
            addButton.UseVisualStyleBackColor = true;
            // 
            // deleteButton
            // 
            deleteButton.Location = new Point(599, 162);
            deleteButton.Name = "deleteButton";
            deleteButton.Size = new Size(147, 41);
            deleteButton.TabIndex = 16;
            deleteButton.Text = "Удалить";
            deleteButton.UseVisualStyleBackColor = true;
            // 
            // menuStrip1
            // 
            menuStrip1.ImageScalingSize = new Size(20, 20);
            menuStrip1.Items.AddRange(new ToolStripItem[] { fileToolStripMenuItem });
            menuStrip1.Location = new Point(0, 0);
            menuStrip1.Name = "menuStrip1";
            menuStrip1.Size = new Size(800, 28);
            menuStrip1.TabIndex = 18;
            menuStrip1.Text = "menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            fileToolStripMenuItem.Name = "fileToolStripMenuItem";
            fileToolStripMenuItem.Size = new Size(46, 24);
            fileToolStripMenuItem.Text = "File";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 463);
            Controls.Add(menuStrip1);
            Controls.Add(deleteButton);
            Controls.Add(addButton);
            Controls.Add(editButton);
            Controls.Add(vegetLabel);
            Controls.Add(vegetField);
            Controls.Add(calocicLabel);
            Controls.Add(caloricField);
            Controls.Add(statusLabel);
            Controls.Add(statusField);
            Controls.Add(amountLabel);
            Controls.Add(amountField);
            Controls.Add(priceLabel);
            Controls.Add(priceField);
            Controls.Add(nameLabel);
            Controls.Add(nameField);
            Controls.Add(listProducts);
            Controls.Add(button1);
            MainMenuStrip = menuStrip1;
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            menuStrip1.ResumeLayout(false);
            menuStrip1.PerformLayout();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Button button1;
        private ListView listProducts;
        private TextBox nameField;
        private Label nameLabel;
        private Label priceLabel;
        private TextBox priceField;
        private Label amountLabel;
        private TextBox amountField;
        private Label statusLabel;
        private TextBox statusField;
        private Label calocicLabel;
        private TextBox caloricField;
        private Label vegetLabel;
        private TextBox vegetField;
        private Button editButton;
        private Button addButton;
        private Button deleteButton;
        private MenuStrip menuStrip1;
        private ToolStripMenuItem fileToolStripMenuItem;
    }
}
