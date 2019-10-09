using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
namespace Advanced_CSharp_exercises
{

    public delegate void MovingButton(int a);

    class MovableButton 
    {
        int distance = 0;


        public int Distance
        {
            get { return distance; }
            set { distance = value; }
        }

        Button button = null;
        public MovableButton(Button b)
        {
            // we know which button this is
            button = b;
        }

        public void MoveDown(int distanceDown)
        {
            // move button left a bit
            button.Top = button.Top + distanceDown;
        }
        public void MoveRight(int distanceRight)
        {
            // move button left a bit
            button.Left = button.Left + distanceRight;
        }
        public void Move(MovingButton _button)
        {
            _button(distance);
        }
        public void Home()
        {
            // move the button to top left;
            button.Top = 0;
            button.Left = 0;
        }

    }
}
