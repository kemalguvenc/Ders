/****************************************************************************

**					SAKARYA UNIVERSITY

**	     FACULTY OF COMPUTER AND INFORMATION SCIENCE

**		      COMPUTER ENGINEERING DEPARTMENT

**		    OBJECT ORIENTED PROGRAMMİNG COURSE

**				2019-2020 SPRİNG SEMESTER

**	

**				NAME OF STUDENT............: M.KEMAL GÜVENÇ

**				NUMBER OF STUDENT.......: B181210076

**              COURSE GROUP...: D

****************************************************************************/


using System;
using System.IO;
using System.Threading;

namespace Homework___1
{
    class Student
    {

        public string name;
        public string surname;
        public string schoolNumber;
        public int homework1;
        public int homework2;
        public int midTerm;
        public int final;
        public float totalGrade;
        public string Grade;

        public Student(string name, string surname, int[] schoolNumber, int homework1, int homework2, int midTerm, int final, float[] percents)
        {

            this.name = name;
            this.surname = surname;
            this.schoolNumber = schoolNumber[0].ToString() + schoolNumber[1].ToString() + schoolNumber[2].ToString() + schoolNumber[3].ToString();
            this.homework1 = homework1;
            this.homework2 = homework2;
            this.midTerm = midTerm;
            this.final = final;

            totalGrade = homework1 * percents[0] + homework2 * percents[1] + midTerm * percents[2] + final * percents[3];

            if (totalGrade >= 90)
                Grade = "AA";
            else if (totalGrade >= 85)
                Grade = "BA";
            else if (totalGrade >= 80)
                Grade = "BB";
            else if (totalGrade >= 70)
                Grade = "CB";
            else if (totalGrade >= 60)
                Grade = "CC";
            else if (totalGrade >= 50)
                Grade = "DC";
            else if (totalGrade >= 40)
                Grade = "DD";
            else
                Grade = "FF";

        }

    }

    class Class
    {

        private static Random rnd;
        private int totalStudent;
        private Student[] student;
        private string[] studentNames = new string[31] { "Muhammet", "Kemal", "Ahmet", "Fatih", "Necati", "Rabia", "Fatma", "Sevim", "Selim", "Sıddıka", "Deniz", "Serkan", "Yusuf", "Salih", "Ali", "Yavuz", "Osman", "Murat", "Recep", "Ensar", "Bekir", "Mehmet", "Yıldız", "Ceyda", "İsmail", "Emre", "Ethem", "Furkan", "Ömer", "Enes", "Tarık" };
        private string[] studentSurnames = new string[29] { "Güvenç", "Saylık", "Yıldırım", "Gül", "Demir", "Fırtına", "Doğan", "Nesin", "Türk", "Salimoğlu", "Bayramoğlu", "Yılmaz", "Demirtaş", "Erdoğan", "Eski", "Yakar", "Ayata", "Tunçbilek", "Güner", "Ayar", "Öz", "Arı", "Çelik", "Harman", "Aşkın", "Torlak", "Aytar", "Cevizci", "Bingöl" };
        private float[] percents = { 0.1f, 0.1f, 0.3f, 0.5f };

        public Class()
        {

            rnd = new Random();
            totalStudent = 100;
            student = new Student[totalStudent];

            int[] number = { 0, 0, 0, 0 };
            int sizeNumber = 4;

            for (int i = 0; i < totalStudent; i++)                          // Creating students
            {
                #region for creating School Number

                if (number[sizeNumber - 1] != 10)
                    number[sizeNumber - 1]++;

                if (number[sizeNumber - 1] == 10)
                {
                    number[sizeNumber - 2]++;
                    number[sizeNumber - 1] = 0;
                }

                if (number[sizeNumber - 2] == 10)
                {
                    number[sizeNumber - 3]++;
                    number[sizeNumber - 2] = 0;
                }

                #endregion

                student[i] = new Student(studentNames[rnd.Next(31)], studentSurnames[rnd.Next(29)], number, rnd.Next(100), rnd.Next(100), rnd.Next(100), rnd.Next(100), percents);
            }

            SaveStudents();

        }

        public void SaveResults()
        {

            float AA = 0;
            float BA = 0;
            float BB = 0;
            float CB = 0;
            float CC = 0;
            float DC = 0;
            float DD = 0;
            float FF = 0;

            for (int i = 0; i < totalStudent; i++)                  // Calculating statistics
            {

                if (student[i].Grade == "AA")
                    AA++;
                else if (student[i].Grade == "BA")
                    BA++;
                else if (student[i].Grade == "BB")
                    BB++;
                else if (student[i].Grade == "CB")
                    CB++;
                else if (student[i].Grade == "CC")
                    CC++;
                else if (student[i].Grade == "DC")
                    DC++;
                else if (student[i].Grade == "DD")
                    DD++;
                else if (student[i].Grade == "FF")
                    FF++;

            }

            // Screen of Console

            Console.WriteLine("AA{0,10}", AA / totalStudent * 100);
            Console.WriteLine("BA{0,10}", BA / totalStudent * 100);
            Console.WriteLine("BB{0,10}", BB / totalStudent * 100);
            Console.WriteLine("CB{0,10}", CB / totalStudent * 100);
            Console.WriteLine("CC{0,10}", CC / totalStudent * 100);
            Console.WriteLine("DC{0,10}", DC / totalStudent * 100);
            Console.WriteLine("DD{0,10}", DD / totalStudent * 100);
            Console.WriteLine("FF{0,10}\n", FF / totalStudent * 100);

            Console.WriteLine("Number of student passed          " + (AA + BA + BB + CB + CC + DC + DD));
            Console.WriteLine("Number of failed students         " + FF);


            // File

            FileStream fs = new FileStream("Results.txt", FileMode.Create, FileAccess.Write);
            StreamWriter sw = new StreamWriter(fs);

            sw.WriteLine("AA{0,10}", AA / totalStudent * 100);
            sw.WriteLine("BA{0,10}", BA / totalStudent * 100);
            sw.WriteLine("BB{0,10}", BB / totalStudent * 100);
            sw.WriteLine("CB{0,10}", CB / totalStudent * 100);
            sw.WriteLine("CC{0,10}", CC / totalStudent * 100);
            sw.WriteLine("DC{0,10}", DC / totalStudent * 100);
            sw.WriteLine("DD{0,10}", DD / totalStudent * 100);
            sw.WriteLine("FF{0,10}\n", FF / totalStudent * 100);

            sw.WriteLine("Number of student passed          " + (AA + BA + BB + CB + CC + DC + DD));
            sw.WriteLine("Number of failed students         " + FF);

            sw.Flush();

            sw.Close();
            fs.Close();

        }

        public void SaveStudents()
        {

            FileStream fs = new FileStream("Students.txt", FileMode.Create, FileAccess.Write);
            StreamWriter sw = new StreamWriter(fs);

            sw.WriteLine("{0,-15}" + "{1,-10}" + "{2,10}" + "{3,10}" + "\n", percents[0] * 100, percents[1] * 100, percents[2] * 100, percents[3] * 100);

            for (int i = 0; i < totalStudent; i++)                      // Informations of the Students are writing to "Students.txt"
            {

                sw.WriteLine("{0,-15}" + "{1,-10}" + "{2,10}" + "{3,10}" + "{4,10}" + "{5,10}" + "{6,10}", student[i].name, student[i].surname, student[i].schoolNumber, student[i].homework1, student[i].homework2, student[i].midTerm, student[i].final);

            }

            sw.Flush();

            sw.Close();
            fs.Close();

        }

    }

    class Program
    {
        static void Main(string[] args)
        {

            Class @class = new Class();

            while (true)
            {

                Console.Write("Would you like to calculate grade statistics (Yes: Y||E  No: N||H) = ");

                ConsoleKeyInfo key = Console.ReadKey();

                Console.Clear();

                if (key.Key == ConsoleKey.E || key.Key == ConsoleKey.Y)
                {

                    @class.SaveResults();
                    Console.ReadKey();
                    Console.Clear();
                    break;

                }

                else if (key.Key == ConsoleKey.H || key.Key == ConsoleKey.N)
                {
                    break;
                }

                else {

                    Console.WriteLine("You entered wrong letter, please try again.");
                    Thread.Sleep(1000);
                    Console.Clear();

                }

            }

            Console.WriteLine("The program is closing...");
            Thread.Sleep(1000);

        }

    }
}
