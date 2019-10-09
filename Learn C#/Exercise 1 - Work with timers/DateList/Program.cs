using System;
using System.Collections.Generic;
using System.Timers;

namespace DateList
{
    class Program
    {
        static Timer _timer;
        static List<DateTime> _l;

        public static List<DateTime> DateList
        {
            get
            {
                if (_l == null) // Lazily initialize the timer.
                {
                    Start(); // Start the timer.
                }
                return _l; // Return the list of dates.
            }
        }

        static void Start()
        {
            _l = new List<DateTime>(); // Allocate the list.
            _timer = new Timer(3000); // Set up the timer for 3 seconds.
            _timer.Elapsed += new ElapsedEventHandler(_timer_Elapsed);
            _timer.Enabled = true;
        }

        static void _timer_Elapsed(object sender, ElapsedEventArgs e)
        {
            _l.Add(DateTime.Now); // Add date on each timer event.
        }
    }
}
}
