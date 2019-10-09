using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Advanced_CSharp_exercises
{
    public partial class frmMovableButtons : Form
    {
        public frmMovableButtons()
        {
            InitializeComponent();
        }

        private void btnRight_Click(object sender, EventArgs e)
        {
        
            // move the button down
            MovableButton b = new MovableButton(btn);
            b.MoveRight((int) nudRight.Value);

        }

        private void btnDown_Click(object sender, EventArgs e)
        {
            // move the button right
            MovableButton b = new MovableButton(btn);
            b.MoveDown((int) nudDown.Value);
        }

        
    }
}
