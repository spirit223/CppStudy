#include<iostream>
using namespace std;

class Person {
public:
	// 传统初始化操作
	Person(int a, int b, int c) {
		m_A = a;
		m_B = b;
		m_C = c;
	}
	// 初始化列表初始化属性
	Person():m_A(20), m_B(30), m_C(40) {}

	int m_A;
	int m_B;
	int m_C;
};

class People {
public:
	// 初始化列表初始化属性
	People(int a, int b, int c) :m_A(a), m_B(b), m_C(c) {}

	int m_A;
	int m_B;
	int m_C;
};

void test01() {
	/*Person p(10, 20, 30);*/
	Person p;
	cout << "m_A = " << p.m_A << endl << "m_B = " << p.m_B << endl << "m_C = " << p.m_C << endl;
}

void test02() {
	/*Person p(10, 20, 30);*/
	People p(30, 20, 10);
	cout << "m_A = " << p.m_A << endl << "m_B = " << p.m_B << endl << "m_C = " << p.m_C << endl;
}

int main() {

	//test01();
	test02();

	return 0;
}