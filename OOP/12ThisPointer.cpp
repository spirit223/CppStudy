#include<iostream>
using namespace std;

class Person {
public:
	int age;
public:
	Person(int age) {
		// ������Ƴ�ͻ����
		this->age = age;
	}

	Person& personAddAge(Person& p) {
		this->age += p.age;
		return *this;
	}
};

void test01() {

	Person p(18);

	cout << "p.age is: " << p.age << endl;
}

void test02() {

	Person p1(10);
	Person p2(20);

	// ���ú������������γ���ʽ����
	p2.personAddAge(p1).personAddAge(p1);


	cout << "p2.age is: " << p2.age << endl;
}

int main() {

	//test01();
	test02();

	return 0;
}