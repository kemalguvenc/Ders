using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{

    class Employee
    {
        public string Name { get; }
        public string Surname { get; }
        public decimal Salary;

        public Employee(string name, string surname, decimal salary)
        {
            Name = name;
            Surname = surname;
            Salary = salary;
        }

        public override string ToString() => Name + ", " + Surname + ", " + Salary;

    }

    class Student <T>where T:class
    {
        public T name;
        public T surname;
        public int no;
    }

    class Program
    {
        static void Main(string[] args)
        {

            Func1();

            Console.Read();

        }

        public static void Func1()
        {

            int[] array = new int[] { 5, 9, 7, 8, 3, 1, 6, 4, 5, 9, 8, 2, 2, 77 };

            var filter1 =
                from value in array
                where value > 4
                select value;

            var filter2 =
                from value in array
                orderby value
                select value;


            var filter3 =
                from value in array
                orderby value descending
                select value;

            var filter4 =
                from value in array
                orderby value descending
                where value > 4
                select value;

            Console.WriteLine("--- Greater than 4 ---");

            foreach (var value in filter1)
                Console.Write(value + ", ");
            Console.WriteLine("\n");

            Console.WriteLine("--- ascending ---");

            foreach (var value in filter2)
                Console.Write(value + ", ");
            Console.WriteLine("\n");


            Console.WriteLine("--- Descending ---");

            foreach (var value in filter3)
                Console.Write(value + ", ");
            Console.WriteLine("\n");

            Console.WriteLine("--- Orderby & Descending");

            foreach (var value in filter4)
                Console.Write(value + ", ");
            Console.WriteLine("\n");

        }

        public static void Func2() {

            Employee[] employees = new Employee[]
            {
                new Employee("Kemal","Güvenç",1000M),
                new Employee("Ahmet","Güvenç",2000M),
                new Employee("Fatih","Güvenç",3000M),
                new Employee("Selim","Top",4000M),
                new Employee("Ahmet","Fatih",5000M)
            };

            Console.WriteLine("--- Total Employees ---");
            foreach (var employee in employees)
                Console.WriteLine(employee);

            var between4k6k =
                from value in employees
                where value.Salary > 1000M && value.Salary < 4000M
                select value;

            Console.WriteLine("\n--- Between 4k6k ---");
            foreach (var employee in between4k6k)
                Console.WriteLine(employee);

            var namesorted =
                from value in employees
                orderby value.Name, value.Surname
                select value;

            Console.WriteLine("\n--- NameSorted ---");
            if (namesorted.Any())
            {
                foreach (var value in namesorted)
                    Console.WriteLine(value);
            }

            var surname =
                from value in employees
                select value.Surname;

            Console.WriteLine("\n--- Unique Surnames ---");
            foreach (var value in surname.Distinct())
                Console.WriteLine(value);

            var names =
                from value in employees
                select new { value.Name, value.Surname };

            Console.WriteLine("\n--- Names ---");
            foreach (var value in names)
                Console.WriteLine(value);

        }

        public static void Func3()
        {

            List<string> list = new List<string>();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");

            list.Add("red");
            Console.WriteLine("Added red");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            list.Insert(0, "yellow");
            Console.WriteLine("Inserted yellow");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            list.Add("purple");
            list.Add("pink");
            Console.WriteLine("Added purple and pink");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            list.Insert(3, "yellow");
            Console.WriteLine("Inserted yellow");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            list.Remove("yellow");
            Console.WriteLine("Removed yellow");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            list.RemoveAt(2);
            Console.WriteLine("Removed item at index 2");

            foreach (var value in list)
                Console.Write(value + ", ");
            Console.WriteLine();

            Console.WriteLine("Count: " + list.Count + " Capacity: " + list.Capacity + "\n");



            Console.WriteLine("Does it contain pink?");

            Console.WriteLine(list.Contains("pink"));



            Console.WriteLine("Does it contain yellow");

            Console.WriteLine(list.Contains("yellow"));

        }

    }
}
