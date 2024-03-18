using System;

namespace _1_Karalama
{
    class Program
    {
        static void Main(string[] args)
        {

            Console.WriteLine("--- String Functions ---\n\n");

            #region 1) Compare to 

            Console.WriteLine("1) Compare to:");

            Console.WriteLine("kemal".CompareTo("kemal"));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 2) toCharArray

            Console.WriteLine("2) toCharArray:");

            char[] name="kemal".ToCharArray();
            Console.WriteLine(name);

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 3) IndexOf

            Console.WriteLine("2) IndexOf:");

            Console.WriteLine("Kemal".IndexOf('a'));
            Console.WriteLine("Kemal".IndexOf("ma"));
            Console.WriteLine("Kemal".IndexOf('s'));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 4) ToUpper

            Console.WriteLine("4) ToUpper:");

            Console.WriteLine("Kemal".ToUpper());

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 5) ToLower

            Console.WriteLine("5) ToLower:");

            Console.WriteLine("Kemal".ToLower());

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 6) Concat

            Console.WriteLine("6) Concat:");

            Console.WriteLine(string.Concat("kemal", "ahmet"));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 7) Join

            Console.WriteLine("7) Join:");

            string[] names = { "Kemal", "Ahmet", "Fatih" };
            Console.WriteLine(string.Join(".", names));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 8) Remove

            Console.WriteLine("8) Remove:");

            Console.WriteLine("Kemal".Remove(3));
            Console.WriteLine("MuhammetKemal".Remove(2, 3));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 9) LastIndexOf

            Console.WriteLine("9) LastIndexOf:");

            Console.WriteLine("Kemal".LastIndexOf('a'));
            Console.WriteLine("Kemal".LastIndexOf("ma"));
            Console.WriteLine("Kemal".LastIndexOf('s'));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 10) Replace

            Console.WriteLine("10) Replace:");

            Console.WriteLine("kemal".Replace('k', 'Q'));
            Console.WriteLine("kemal".Replace("ke", "ma"));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 11) Trim

            Console.WriteLine("11) Trim:");

            Console.WriteLine("   asd");
            Console.WriteLine("   asd".Trim());

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 12) Equals

            Console.WriteLine("12) Equals:");

            Console.WriteLine("kemal".Equals("asd"));
            Console.WriteLine("kemal".Equals("kemal"));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 13) Substring

            Console.WriteLine("13) Substring:");

            Console.WriteLine("Kemal".Substring(3));
            Console.WriteLine("Kemal".Substring(1, 4));

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 14) Split

            Console.WriteLine("14) Split:");

            string[] array = "Muhammet,Kemal,Ahmet,Fatih,Necati,Ömer".Split(',');
            foreach (string i in array) Console.Write(i);

            Console.WriteLine();

            #endregion

            Console.WriteLine("-----------------------------------------------");

            #region 15) StartsWith

            Console.WriteLine("15) StartsWith:");

            Console.WriteLine("kemal".StartsWith("ke"));

            #endregion


            Console.Read();

        }
    }
}
