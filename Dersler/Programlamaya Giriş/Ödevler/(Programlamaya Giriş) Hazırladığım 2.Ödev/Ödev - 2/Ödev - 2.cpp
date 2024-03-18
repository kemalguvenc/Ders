/****************************************************************************
**
**				ÖĞRENCİ ADI...........................: M.Kemal Güvenç
**				ÖĞRENCİ NUMARASI......................: B181210076
**				DERS GRUBU............................: D
****************************************************************************/

#include <iostream>
#include <time.h>
#include <iomanip>
#include <Windows.h>

using namespace std;

int matrix[25][25];
int size_matrix;

void fill_matrix();
void print_matrix();
int change_matrix();
int odd();
int inverse();
void total();

int main() {

	while (1) {

		cout << "Enter size of the Matrix: ";
		cin >> size_matrix;

		if (size_matrix >= 5 && size_matrix <= 25) break;								// checking size of matrix
		else cout << "Size of matrix should be greater than 5 and less than 25\n";

	}

	system("cls");

	fill_matrix();

	while (1) {

		int x;

		print_matrix();

		cout << endl;

		cout << "1- Change column&row\n";
		cout << "2- Put Odd Numbers forward (Row)\n";
		cout << "3- Inverse (column)\n";
		cout << "4- Print totals\n";
		cout << "5- Exit\n";

		cout << "Enter: ";
		cin >> x;

		switch (x) {

		case 1: change_matrix(); break;
		case 2: odd(); break;
		case 3: inverse(); break;
		case 4: total(); break;
		case 5: return 0;
		default: cout << "!!! Wrong number was entered !!!\n"; system("PAUSE");

		}

		system("cls");

	}



	system("PAUSE");
	return 0;
}

void fill_matrix() {

	srand(time(NULL));

	for (int i = 0; i < size_matrix; i++) {											// i= row

		for (int j = 0; j < size_matrix; j++) {										// j= column

			matrix[i][j] = rand() % 9 +1;

		}

	}

}

void print_matrix() {

	cout << "      ";

	for (int i = 0; i < size_matrix; i++) {								// the numbers are arrange and printed regularly

		cout << setw(4) << i + 1;

	}

	cout << endl << "     ";

	cout << setw(4 * size_matrix + 1) << setfill('_') << "_";

	cout << setfill(' ') << endl << endl;

	for (int i = 0; i < size_matrix; i++) {

		cout << setw(3) << i + 1 << " | ";

		for (int j = 0; j < size_matrix; j++) {

			cout << setw(4) << matrix[i][j];

		}

		cout << endl << endl;

	}

}

int change_matrix() {

	int row, column;

	cout << "Row: ";
	cin >> row;
	cout << "column: ";
	cin >> column;

	if (row > size_matrix || column > size_matrix) {							// checking size of matrix which was entered

		cout << "!!! Row and column can not be greater than size of matrix !!!\n";
		system("PAUSE");
		return 0;

	}

	int copy_row[25];
	int copy_column[25];

	for (int i = 0; i < size_matrix; i++) {									// copying row and column

		copy_row[i] = matrix[row - 1][i];
		copy_column[i] = matrix[i][column - 1];

	}

	for (int i = 0; i < size_matrix; i++) {

		matrix[row - 1][i] = copy_column[i];								// assigning column to row

	}

	for (int i = 0; i < size_matrix; i++) {									// assigning row to column

		matrix[i][column - 1] = copy_row[i];

	}

	matrix[row - 1][column - 1] = copy_row[row - 1] + copy_column[column - 1];

	cout << "--- New Matrix ---\n\n"; print_matrix();
	system("PAUSE");
	return 0;

}

int odd() {

	int row;

	cout << "row: ";
	cin >> row;

	if (row > size_matrix) {												// checking the row which was entered

		cout << "!!! Row can not be greater than size of matrix !!!\n";
		system("PAUSE");
		return 0;

	}

	int odd[25], even[25];
	int odd_count = 0, even_count = 0;

	for (int i = 0; i < size_matrix; i++) {										// checking odd numbers and even numbers

		if (matrix[row - 1][i] % 2 != 0) { odd[odd_count] = matrix[row - 1][i]; odd_count++; }
		else { even[even_count] = matrix[row - 1][i]; even_count++; }

	}

	for (int i = 0; i < odd_count; i++) {										// assigning odd numbers to row
		matrix[row - 1][i] = odd[i];
	}

	for (int i = odd_count; i < size_matrix; i++) {								// // assigning even numbers to row
		matrix[row - 1][i] = even[i - odd_count];
	}


	cout << "--- New Matrix ---\n\n"; print_matrix();
	system("PAUSE");
	return 0;

}

int inverse() {

	int column;

	cout << "column: ";
	cin >> column;

	if (column > size_matrix) {													// checjing the column which was entered
		cout << "Column can not greater than size of matrix\n"; 
		system("PAUSE");
		return 0; 
	} 

	for (int i = 0; i < size_matrix / 2; i++) {									// reverse the column

		int temp;																// temporary

		temp = matrix[i][column - 1];
		matrix[i][column - 1] = matrix[size_matrix - 1 - i][column - 1];
		matrix[size_matrix - 1 - i][column - 1] = temp;

	}

	cout << "--- New Matrix ---\n\n"; print_matrix();
	system("PAUSE");
	return 0;

}

void total() {

	int total_value = 0;

	for (int i = 0; i < size_matrix; i++) {									// calculating sum of number which is in the matrix

		for (int j = 0; j < size_matrix; j++) total_value += matrix[i][j];

	}

	for (int i = 0; i < size_matrix; i++) {									// i= row

		for (int j = 0; j < size_matrix; j++) {								// j= column

			total_value -= matrix[i][j];
			matrix[i][j] = total_value;

		}

	}

	cout << "--- New Matrix ---\n\n"; print_matrix();
	system("PAUSE");

}