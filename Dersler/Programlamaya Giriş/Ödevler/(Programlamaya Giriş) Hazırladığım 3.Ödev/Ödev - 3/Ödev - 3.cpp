/****************************************************************************
**
**				NAME OF STUDENT...............: M.Kemal Güvenç
**				NUMBER OF STUDENT.............: B181210076
**				COURSE GROUP..................: D
****************************************************************************/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <windows.h>

using namespace std;

struct Scene {

	int width=0, height=0;
	char character = '0';

};

struct Lshape {

	int x = 0, y = 0, size = 0;
	char character = '0';

};

Scene CreateScene();
Lshape Create_LShape();

void DrawScene(Scene);
void Draw_LShape(Lshape);
void Crusor(int, int);
Lshape LShape_GoDown(Lshape);

int main() {

	Scene s1;
	Lshape Ls1;

	srand(time(NULL));

	s1 = CreateScene();
	Ls1 = Create_LShape();

	while (1) {															// Loop of main

		if (Ls1.y + 2 * Ls1.size + 1 == s1.height) {					// reset the L shape

			Ls1 = Create_LShape();

		}

		system("cls");
		DrawScene(s1);
		Draw_LShape(Ls1);
		Ls1=LShape_GoDown(Ls1);
		Sleep(100);

	}

	system("pause");
	return 0;
}

// Functions

Scene CreateScene() {

	Scene s1;

	int value_width[3] = { 30,40,50 };
	char value_character[5] = { '*','#','+','$','@' };

	s1.width = value_width[rand() % 3];
	s1.character = value_character[rand() % 5];
	s1.height = rand() % 11 + 20;

	return s1;

}

void DrawScene(Scene s1) {

	cout << setw(s1.width) << setfill(s1.character) << s1.character << setfill(' ') << endl;

	for (int i = 0; i < s1.height - 2; i++) {										// for printing

		cout << s1.character << setw(s1.width - 1) << s1.character << endl;
	
	}

	cout << setw(s1.width) << setfill(s1.character) << s1.character;

}

Lshape Create_LShape() {

	Lshape Ls1;

	char character[5] = { '*','#','+','$','@' };

	Ls1.size = rand() % 6 + 2;
	Ls1.character = character[rand() % 5];
	Ls1.x = rand() % 21 + 5;
	Ls1.y = 3;

	return Ls1;

}

void Draw_LShape(Lshape Ls1) {

	Crusor(Ls1.x, Ls1.y);
	cout << setw(Ls1.size) << setfill(Ls1.character) << Ls1.character << setfill(' ');
	Ls1.y++;

	for (int i = 1; i < Ls1.size; i++) {										// for printing
		
		Crusor(Ls1.x, Ls1.y);
		cout << Ls1.character << setw(Ls1.size - 1) << Ls1.character;
		Ls1.y++;
	
	}

	Crusor(Ls1.x, Ls1.y);
	cout << Ls1.character << setw(Ls1.size - 1) << Ls1.character << setw(Ls1.size) << setfill(Ls1.character) << Ls1.character << setfill(' ');
	Ls1.y++;

	for (int i = 1; i < Ls1.size; i++) {										// for printing

		Crusor(Ls1.x, Ls1.y);
		cout << Ls1.character << setw(2 * Ls1.size - 1) << Ls1.character;
		Ls1.y++;
	
	}

	Crusor(Ls1.x, Ls1.y);
	cout << setw(2 * Ls1.size) << setfill(Ls1.character) << Ls1.character << setfill(' ');

}

void Crusor(int x, int y) {

	COORD coord;

	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

Lshape LShape_GoDown(Lshape Ls1) {

	Ls1.y++;

	return Ls1;

}