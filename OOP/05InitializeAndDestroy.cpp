#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person() {
		cout << "���캯���ĵ���" << endl;
	}

	~Person() {
		cout << "��������" << endl;
	}
};

void test01() {
	Person p;
}

void test02() {
	Person p;
}

int main() {

	test02();

	return 0;
}