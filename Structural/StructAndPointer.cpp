#include<iostream>
#include<string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main() {

	/* ȷ���ṹ���С */
	cout << "sizeof Student = " << sizeof Student << endl;
	cout << "sizeof string = " << sizeof string << endl;

	Student stu = { "С��", 30, 50 };
	cout << stu.name << endl;

	Student* p = &stu;
	cout << p->name << endl;


	return 0;
}