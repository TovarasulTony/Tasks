using System;
using System.Timers;

namespace SignalTime
{
    class Program
    {
        static void Main()
        {
            Timer timer = new Timer(200);
            timer.Elapsed += Timer_Elapsed;
            timer.Start();
            while (true)
            {
                // Infinite loop.
            }
        }

        private static void Timer_Elapsed(object sender, ElapsedEventArgs e)
        {
            // Use SignalTime.
            DateTime time = e.SignalTime;
            Console.WriteLine("TIME: " + time);
        }
    }
}
