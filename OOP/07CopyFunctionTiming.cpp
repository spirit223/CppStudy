#include<iostream>
using namespace std;
 
class Person {
public:
	int age;
public:
	Person() {
		this->age = 0;
		cout << "Ĭ�Ϲ��캯��������" << endl;
	}

	Person(int age) {
		this->age = age;
		cout << "�вι��캯��������" << endl;
	}

	Person(const Person& p) {
		this->age = p.age;
		cout << "�������캯��������" << endl;
	}

	~Person() {
		cout << "��������������, �����ַΪ: " << this << endl;
	}
};

void test01() {
	Person p1(10);
	Person p2(p1);

	cout << "p2������Ϊ: " << p2.age << endl;
}

void doSome(Person p){}

void test02() {
	Person p;
	doSome(p);
	cout << p.age << endl;
}

Person doWork() {
	Person p1;
	cout << "doWork: " << (int*)&p1 << endl;
	return p1;
}

void test03() {
	Person p1 = doWork();
	cout << "test03: " << (int*)&p1 << endl;
}
int main() {

	//test01();
	//test02();
	test03();

	return 0;
}