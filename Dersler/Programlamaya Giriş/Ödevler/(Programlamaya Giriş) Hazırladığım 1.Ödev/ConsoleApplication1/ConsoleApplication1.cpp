/****************************************************************************
**
**				Name of Student..................: Muhammet Kemal Güvenç
**				Number of Student................: B181210076
**				Group of Class...................: D
****************************************************************************/

#include "pch.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	int row, column,count_row=0,count_column=0;

	for (;count_row==0;) {																								   // It puts into the first question the loop.

		cout << "Rules:\n";
		cout << "     1) the Number of Rows must be between 5 and 15\n\n";
		cout << "Enter the Number of Rows, please: ";
		cin >> row;

		if (row >= 5 && row <= 15) {																				      // The number of rows which entered is checked.

			for (;count_column==0;) {                                                                                     // It puts into the second question the loop.

				cout << "\n\Rules:\n";
				cout << "     1) the Number of the coloumns must be between 5 and 40\n";
				cout << "     2) the Number of the coloumns must be 2 times the Number of Rows\n\n";
				cout << "Enter the number of coloumns, please : ";
				cin >> column;

				if (column >= 5 && column <= 40 && column == 2 * row) {				// The number of column which entered is checked and If everything is true, it comes out of the "Question loops".
					system("cls"); 
					count_column = 1; 
					count_row = 1; 
				} 
				else if (column < 5 || column > 40) {																	  // The number of column which entered is checked.
					system("cls"); 
					cout << "!!! the Number of the coloumns must be between 5 and 40 !!!\n"; 
					Sleep(1000);
					system("cls");
				}
				else if (column != 2 * row) {																			  // The number of column which entered is checked.
					system("cls"); 
					cout << "!!! the Number of the coloumns must be 2 times the Number of Rows !!!\n\n"; 
					Sleep(1000);
					system("cls");
					break; 
				}

			}
		}

		else { 
			system("cls"); 
			cout << "!!! the Number of Rows must be between 5 and 15 !!! \n\n"; 
			Sleep(1000); 
			system("cls");
		}

	}

	Sleep(500);

	for (int maincount = 0; maincount < row; maincount++) {																// It puts into "creating top shape the loop".

		if (maincount == 0 || maincount == (row - 1)) {																	// Arrange the stars at the beginning and end.
			for (int count1 = 0; count1 < column; count1++) cout << "*";
			Sleep(200);
			cout << endl;
			continue;
		}

		cout << "*";
		for (int count2 = 0; count2 < ((column / 2) - (maincount)-2); count2++) cout << " ";							// Leaves space.
		cout << "*";

		for (int count3 = 0; count3 < maincount; count3++) cout << "  ";												// Leaves space.

		cout << "*";
		for (int count4 = 0; count4 < ((column / 2) - (maincount)-2); count4++) cout << " ";							// Leaves space.
		cout << "*";

		cout << "\n";
		Sleep(200);

	}

	cout << endl;
	Sleep(200);

	for (int maincount = 0; maincount < row; maincount++) {																// It puts into "creating bottom shape the loop".

		if (maincount == 0 || maincount == (row - 1)) {																	// Arrange the stars at the beginning and end.
			for (int count1 = 0; count1 < column; count1++) cout << "*";
			Sleep(200);
			cout << endl;
			continue;
		}

		cout << "*";
		for (int count2 = 1; count2 < maincount; count2++) cout << " ";													// Leaves space.
		cout << "*";

		for (int count3 = 0; count3 < (column - 2) - (2 * maincount); count3++) cout << " ";							// Leaves space.

		cout << "*";
		for (int count2 = 1; count2 < maincount; count2++) cout << " ";													// Leaves space.
		cout << "*";

		cout << "\n";
		Sleep(200);

	}

	cout << endl; Sleep(200);
	cout << endl; Sleep(200);

	system("PAUSE");
	return 0;
}