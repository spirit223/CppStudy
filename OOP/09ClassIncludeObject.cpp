#include<iostream>
#include<string>
using namespace std;

class Phone {
public:
	string m_PName;
public:
	Phone(string pName):m_PName(pName) {
		cout << "Phone constructor!" << endl;
	}
};

class Person {
public:
	string m_Name;
	Phone m_phone;
public:
	Person(string name, string pName) :m_Name(name), m_phone(pName){
		cout << "Person constructor!" << endl;
	}
};

void test01() {
	Person p("����", "iPhone14");
	cout << p.m_Name << "����һ��" << p.m_phone.m_PName << endl;
}


int main() {

	test01();

	return 0;
}