using System;

namespace Transpose_of_a_Matrix
{
    class Program
    {
        static void Main(string[] args)
        {

            int satir = 3, sutun = 4;

            int[,] matris = new int[satir, sutun];

            for (int i = 0; i < satir; i++)
            {

                for (int j = 0; j < sutun; j++)
                {

                    matris[i, j] = Convert.ToInt32(Console.ReadLine());

                }

            }

            Console.WriteLine("\n\n");

            for (int i = 0; i < satir; i++)
            {

                for (int j = 0; j < sutun; j++)
                {

                    Console.Write(matris[i, j] + " ");

                }

                Console.WriteLine();

            }

            Console.WriteLine("\n\n");

            for (int i = 0; i < sutun; i++)
            {

                for (int j = 0; j < satir; j++)
                {

                    Console.Write(matris[j, i] + " ");

                }

                Console.WriteLine();

            }

            Console.Read();

        }
    }
}
