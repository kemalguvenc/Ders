/****************************************************************************
**
**				Name of the Student...............: M.Kemal Güvenç
**				Number of the Student.............: B181210076
**				Course Group......................: D
****************************************************************************/

#include <iostream>
#include <fstream>
#include <time.h>
#include <string>
#include <iomanip>
#include <Windows.h>

using namespace std;

class Student;
class Clas_s;
class School;

int total_number = 0;
int class_number;

class File_Management {

public:

	static string read_name();
	static string read_surname();
	static void write_student(Student, string);
	static void write_class(Clas_s);
	static void update_class(School*);

};

class Student {

private:

	string name, surname;
	int no;

public:

	Student() {}

	Student(int x) {

		name = File_Management::read_name();
		surname = File_Management::read_surname();
		total_number++;
		no = total_number;

	}

	string read_name() { return name; }
	string read_surname() { return surname; }
	int read_no() { return no; }

	void write_name(string temp) { name = temp; }
	void write_surname(string temp) { surname = temp; }
	void write_no(int temp) { no = temp; }


};

class Clas_s {

private:

	string class_name;
	int student_count;

public:

	Clas_s() {}
	Clas_s(int x) : student_count(0) {

		string temp;
		temp = rand() % 26 + 65;
		class_name = to_string(x) + temp;

	}

	Student total_student[100];

	void write_name(string temp) { class_name = temp; }
	void write_count(int temp) { student_count = temp; }

	string r_name() { return class_name; }
	int r_count() { return student_count; }

	void add_student(Student);
	void remove_student(int);


};

class School {

public:

	Clas_s cls[100];
	int cls_count;

	School() {

		ifstream r_file("kayitlar.txt");

		string cls_name;
		int std_count;
		string std_name;
		string std_surname;
		int std_no;

		for (int i = 0; !r_file.eof(); i++) { // it reads end of the file and i is equal class count

			r_file >> cls_name >> std_count;
			cls[i].write_name(cls_name);
			cls[i].write_count(std_count);

			for (int j = 0; j < std_count; j++) { // it reads every student in text

				r_file >> std_name >> std_surname >> std_no;
				cls[i].total_student[j].write_name(std_name);
				cls[i].total_student[j].write_surname(std_surname);
				cls[i].total_student[j].write_no(std_no);
				
				if (total_number < std_no) total_number = std_no; 

			}

			cls_count = i;

			class_number = stoi(cls[i].r_name());

		}

		r_file.close();

	}

	void print();

};

class Program {

public:

	void run() {

		School obj;

		while (1) {															// main loop

			system("cls");
			obj.print();

			cout << endl << endl;

			cout << "1) Add a student" << endl;
			cout << "2) Add a class" << endl;
			cout << "3) Change the student" << endl;
			cout << "4) Remove the student" << endl;
			cout << "5) Remove the class" << endl;
			cout << "6) exit" << endl;

			cout << "Enter: ";

			int x;

			cin >> x;

			switch (x) {

			case 1:
			{
				string temp_class;
				cout << "Which is Class: ";
				cin >> temp_class;
				Student temp_student(1);

				for (int i = 0; i < obj.cls_count; i++) {				// to find the student

					if (obj.cls[i].r_name() == temp_class) {			// to find the student

						obj.cls[i].add_student(temp_student);

					}

				}

				break;
			}
			case 2: {
				string temp_class;

				obj.cls_count++;
				class_number++;

				Clas_s cls(class_number);

				obj.cls[obj.cls_count - 1] = cls;

				File_Management::write_class(cls);

				break;
			}
			case 3: {
				
				int no;

				cout << "Number of the Student who you want to change: ";

				cin >> no;

				for (int i = 0; i < obj.cls_count; i++) {							//to find the student

					for (int j = 0; j < obj.cls[i].r_count(); j++) {				// to find the student

						if (obj.cls[i].total_student[j].read_no() == no) {

							Student temp(1);
							obj.cls[i].total_student[j] = temp;

							cout << "New Informations of the Student: \n";

							cout << "Name: " << obj.cls[i].total_student[j].read_name() << endl;
							cout << "Surname: " << obj.cls[i].total_student[j].read_surname() << endl;
							cout << "No: " << obj.cls[i].total_student[j].read_no() << endl;

							system("PAUSE");
							

						}

					}

				}

				File_Management::update_class(&obj);

				break; }

			case 4: {

				int x;
				cout << "Number of the Student: ";
				cin >> x;

				for (int i = 0; i < obj.cls_count; i++) {							//to find the student

					for (int j = 0; j < obj.cls[i].r_count(); j++) {				//to find the student

						if (obj.cls[i].total_student[j].read_no() == x) {			// to check the number of student

							obj.cls[i].remove_student(x);

						}

					}

				}

				File_Management::update_class(&obj);

				break;
			}
			case 5: {

				string name;

				cout << "Which is class: ";
				cin >> name;

				for (int i = 0; i < obj.cls_count; i++) {						// to find the class;

					if (obj.cls[i].r_name() == name) {							// to chech the name of class

						for (int j = i; j < obj.cls_count-1; j++) {				// swap

							Clas_s temp = obj.cls[j];
							obj.cls[j] = obj.cls[j + 1];
							obj.cls[j + 1] = temp;

						}

						obj.cls_count--;

						File_Management::update_class(&obj);

						break;

					}

				}

				break; }

			case 6: exit(1);

			}

		}


	}

};

int main() {

	srand(time(NULL));

	Program prog;

	prog.run();

	system("PAUSE");
	return 0;
}

void top_print(int count)
{

	cout << (char)201;
	for (int i = 0; i < count; i++)
	{
		cout << (char)205;
	}
	cout << (char)187;
}

void bottom_print(int count)
{
	cout << (char)200;
	for (int i = 0; i < count; i++)
	{
		cout << (char)205;
	}
	cout << (char)188;
}

void goto_xy(int x, int y) {

	COORD coord;

	coord.X = x;
	coord.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}



void Clas_s::add_student(Student std) {

	total_student[student_count] = std;
	student_count++;

	File_Management::write_student(std, class_name);

}

void Clas_s::remove_student(int no) {

	for (int i = 0; i < student_count; i++) {									// to find the student

		if (total_student[i].read_no() == no) {									// cheack the number of student

			for (int j = i; j < student_count - 1; j++) {						// swap

				Student temp = total_student[j];
				total_student[j] = total_student[j + 1];
				total_student[j + 1] = temp;

			}

			break;

		}

	}

	student_count--;

}



void File_Management::write_class(Clas_s cls) {

	ofstream file("kayitlar.txt", ios::app);

	file << cls.r_name() << "\n" << cls.r_count() << "\n";

	file.close();

}

void File_Management::write_student(Student std, string class_name) {

	ifstream r_file("kayitlar.txt");
	ofstream w_file("kayitlar.tmp", ios::app);

	string temp_class_name;
	int temp_std_count;
	string temp_std_name;
	string temp_std_surname;
	int temp_std_no;

	while (!r_file.eof()) {												// to read the file

		r_file >> temp_class_name >> temp_std_count;

		if (r_file.eof()) break;

		w_file << temp_class_name << "\n";

		if (temp_class_name == class_name) {							// to find the class

			w_file << temp_std_count + 1 << "\n";

			for (int i = 0; i < temp_std_count; i++) {					// to write other students 

				r_file >> temp_std_name >> temp_std_surname >> temp_std_no;
				w_file << temp_std_name << " " << temp_std_surname << " " << temp_std_no << "\n";

			}

			w_file << std.read_name() << " " << std.read_surname() << " " << std.read_no() << "\n";

		}

		else {															// if name of file is different

			w_file << temp_std_count << "\n";

			for (int i = 0; i < temp_std_count; i++) {

				r_file >> temp_std_name >> temp_std_surname >> temp_std_no;
				w_file << temp_std_name << " " << temp_std_surname << " " << temp_std_no << "\n";

			}

		}

	}

	w_file.close();
	r_file.close();

	remove("kayitlar.txt");
	rename("kayitlar.tmp", "kayitlar.txt");

}

string File_Management::read_name() {

	string name;

	ifstream file;

	file.open("isimler.txt", ios::in);

	int x = rand() % 4969+1;

	for (int i = 0; i < x; i++) {											// to read the names from text
		file >> name;
	}

	file.close();

	return name;

}

string File_Management::read_surname() {

	string surname;

	ifstream file;

	file.open("isimler.txt", ios::in);

	int x = rand() % 278+1;

	for (int i = 0; i < x; i++) {
		file >> surname;													// to read the surnames from text
	}

	file.close();

	return surname;

}

void File_Management::update_class(School* obj) {

	ofstream w_file("kayitlar.txt", ios::out);

	for (int i = 0; i < obj->cls_count; i++) {

		w_file << obj->cls[i].r_name() << "\n" << obj->cls[i].r_count() << "\n";

		for (int j = 0; j < obj->cls[i].r_count(); j++) {

			w_file << obj->cls[i].total_student[j].read_name() << " " << obj->cls[i].total_student[j].read_surname() << " " << obj->cls[i].total_student[j].read_no() << "\n";

		}

	}

	w_file.close();

}



void School::print() {

	for (int i = 0; i < cls_count; i++) {									// print the top of class name

		top_print(14);

	}

	cout << endl;

	for (int i = 0; i < cls_count; i++) {									// print the middle of class name

		cout << (char)186 << setw(14) << cls[i].r_name() << (char)186;

	}

	cout << endl;

	for (int i = 0; i < cls_count; i++) {									// print the middle of class name

		bottom_print(14);

	}

	cout << endl << endl;

	int x = 0;
	int max_y = 0;

	for (int i = 0; i < cls_count; i++) {

		int y = 3;

		for (int j = 0; j < cls[i].r_count(); j++) {

			goto_xy(x, y);
			cout << " "; top_print(12); cout << " ";
			y++;

			goto_xy(x, y);
			cout << " "; cout << (char)186 << right << setw(12) << cls[i].total_student[j].read_name() << (char)186; cout << " ";
			y++;

			goto_xy(x, y);
			cout << " "; cout << (char)186 << right << setw(12) << cls[i].total_student[j].read_surname() << (char)186; cout << " ";
			y++;

			goto_xy(x, y);
			cout << " "; cout << (char)186 << right << setw(12) << cls[i].total_student[j].read_no() << (char)186; cout << " ";
			y++;

			goto_xy(x, y);
			cout << " "; bottom_print(12); cout << " ";
			y++;
			y++;

			if (y > max_y) max_y = y;

		}

		x += 16;

	}

	goto_xy(0, max_y+2);

}