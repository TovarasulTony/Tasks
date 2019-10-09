namespace Advanced_CSharp_exercises
{
    partial class frmMovableButtons
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
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
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btnDown = new System.Windows.Forms.Button();
            this.nudDown = new System.Windows.Forms.NumericUpDown();
            this.label2 = new System.Windows.Forms.Label();
            this.btnRight = new System.Windows.Forms.Button();
            this.nudRight = new System.Windows.Forms.NumericUpDown();
            this.label1 = new System.Windows.Forms.Label();
            this.btn = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudDown)).BeginInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudRight)).BeginInit();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.btnDown);
            this.groupBox1.Controls.Add(this.nudDown);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.btnRight);
            this.groupBox1.Controls.Add(this.nudRight);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Location = new System.Drawing.Point(12, 139);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(378, 105);
            this.groupBox1.TabIndex = 0;
            this.groupBox1.TabStop = false;
            // 
            // btnDown
            // 
            this.btnDown.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnDown.Location = new System.Drawing.Point(200, 59);
            this.btnDown.Name = "btnDown";
            this.btnDown.Size = new System.Drawing.Size(164, 34);
            this.btnDown.TabIndex = 5;
            this.btnDown.Text = "Move down this amount";
            this.btnDown.UseVisualStyleBackColor = true;
            this.btnDown.Click += new System.EventHandler(this.btnDown_Click);
            // 
            // nudDown
            // 
            this.nudDown.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.nudDown.Increment = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.nudDown.Location = new System.Drawing.Point(129, 66);
            this.nudDown.Minimum = new decimal(new int[] {
            100,
            0,
            0,
            -2147483648});
            this.nudDown.Name = "nudDown";
            this.nudDown.Size = new System.Drawing.Size(56, 23);
            this.nudDown.TabIndex = 4;
            this.nudDown.Value = new decimal(new int[] {
            10,
            0,
            0,
            0});
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(9, 66);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(116, 17);
            this.label2.TabIndex = 3;
            this.label2.Text = "Down movement:";
            // 
            // btnRight
            // 
            this.btnRight.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnRight.Location = new System.Drawing.Point(200, 19);
            this.btnRight.Name = "btnRight";
            this.btnRight.Size = new System.Drawing.Size(164, 34);
            this.btnRight.TabIndex = 2;
            this.btnRight.Text = "Move right this amount";
            this.btnRight.UseVisualStyleBackColor = true;
            this.btnRight.Click += new System.EventHandler(this.btnRight_Click);
            // 
            // nudRight
            // 
            this.nudRight.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.nudRight.Increment = new decimal(new int[] {
            10,
            0,
            0,
            0});
            this.nudRight.Location = new System.Drawing.Point(129, 26);
            this.nudRight.Minimum = new decimal(new int[] {
            100,
            0,
            0,
            -2147483648});
            this.nudRight.Name = "nudRight";
            this.nudRight.Size = new System.Drawing.Size(56, 23);
            this.nudRight.TabIndex = 1;
            this.nudRight.Value = new decimal(new int[] {
            10,
            0,
            0,
            0});
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label1.Location = new System.Drawing.Point(9, 26);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(114, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "Right movement:";
            // 
            // btn
            // 
            this.btn.Font = new System.Drawing.Font("Microsoft Sans Serif", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btn.Location = new System.Drawing.Point(93, 63);
            this.btn.Name = "btn";
            this.btn.Size = new System.Drawing.Size(75, 23);
            this.btn.TabIndex = 1;
            this.btn.Text = "Random button";
            this.btn.UseVisualStyleBackColor = true;
            // 
            // frmMovableButtons
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(402, 258);
            this.Controls.Add(this.btn);
            this.Controls.Add(this.groupBox1);
            this.Name = "frmMovableButtons";
            this.Text = "Movable buttons form";
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.nudDown)).EndInit();
            ((System.ComponentModel.ISupportInitialize)(this.nudRight)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Button btnDown;
        private System.Windows.Forms.NumericUpDown nudDown;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnRight;
        private System.Windows.Forms.NumericUpDown nudRight;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button btn;
    }
}