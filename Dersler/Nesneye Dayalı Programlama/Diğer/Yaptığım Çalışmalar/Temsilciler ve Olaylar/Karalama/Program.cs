using System;

namespace Karalama
{

    class CarEventArgs : EventArgs
    {
        public int newSpeed;
        public int oldSpeed;
        public int SpeedChange => newSpeed - oldSpeed;
    }

    class Car
    {

        private int _speed;
        private int _speedLimit;
        public delegate void CarEventHandler(object sender, CarEventArgs e);

        public event CarEventHandler changedSpeed;
        public event CarEventHandler overSpeedLimit;
        public event CarEventHandler underSpeedLimit;

        public Car(int speed,int speedLimit)
        {
            this.SpeedLimit = speedLimit;
            this.Speed = speed;

            changedSpeed += Car_ChangedSpeed;
            overSpeedLimit += Car_OverSpeedLimit;
            underSpeedLimit += Car_UnderSpeedLimit;
        }

        public int Speed
        {
            get => _speed;
            private set {

                var oldSpeed = _speed;

                _speed = value > 0 ? value : 0;

                var e = new CarEventArgs
                {
                    oldSpeed = oldSpeed,
                    newSpeed = _speed
                };

                if (oldSpeed <= SpeedLimit && _speed > SpeedLimit) overSpeedLimit?.Invoke(this, e);
                if (oldSpeed >= SpeedLimit && _speed < SpeedLimit) underSpeedLimit?.Invoke(this, e);

                changedSpeed?.Invoke(this, e);


            }
        }

        public int SpeedLimit
        {
            get => _speedLimit;
            set { _speedLimit = value > 0 ? value : 0; }
        }

        public void Accelerate()
        {
            Speed += 10;
        }

        public void Decelerate()
        {
            Speed -= 10;
        }

        private void Car_ChangedSpeed(object sender, CarEventArgs e)
        {
            Console.Clear();
            Console.WriteLine(e.newSpeed);
        }

        private void Car_OverSpeedLimit(object sender, CarEventArgs e)
        {
            Console.BackgroundColor = ConsoleColor.Red;
        }

        private void Car_UnderSpeedLimit(object sender, CarEventArgs e)
        {
            Console.BackgroundColor = ConsoleColor.Blue;
        }

    }

    class Karalama
    {

        public delegate void Math(double a, double b);

        public static void plus(double x, double y)
        {

            Console.WriteLine(x + y);

        }
        public static void minus(double x, double y)
        {

            Console.WriteLine(x - y);

        }
        public static void multiply(double x, double y)
        {

            Console.WriteLine(x * y);

        }
        public static void divide(double x, double y)
        {

            Console.WriteLine(x / y);

        }

        static void Main()
        {

            function2();

            Console.ReadKey(true);

        }

        public static void function1()
        {

            Math math = null;

            math += plus;
            math += minus;
            math += multiply;
            math += divide;

            math?.Invoke(2, 5);

        }
        public static void function2()
        {

            Car car = new Car(0, 60);

            Console.BackgroundColor = ConsoleColor.Blue;

            while (true)
            {
                var key = Console.ReadKey(true);

                if (key.Key == ConsoleKey.UpArrow) car.Accelerate();
                else if (key.Key == ConsoleKey.DownArrow) car.Decelerate();
            }

        }

    }

}
