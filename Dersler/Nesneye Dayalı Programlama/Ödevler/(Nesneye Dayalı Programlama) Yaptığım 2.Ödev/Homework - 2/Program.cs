/****************************************************************************
**	    				SAKARYA UNIVERSITY
**  	     FACULTY OF COMPUTER AND INFORMATION SCIENCE
**		          COMPUTER ENGINEERING DEPARTMENT
**		         OBJECT ORIENTED PROGRAMMİNG COURSE
**				     2019-2020 SPRİNG SEMESTER
**	
**				NUMBER OF HOMEWORK.........: 2
**				NAME OF STUDENT............: M.Kemal Güvenç
**				NUMBER OF STUDENT..........: B181210076
**              COURSE GROUP...............: D
****************************************************************************/


using System;
using System.Windows.Forms;

namespace Homework___2
{
    static class Program
    {
        /// <summary>
        /// Uygulamanın ana girdi noktası.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new MyForm());
        }
    }
}
