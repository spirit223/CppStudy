#include<iostream>
#include <string>
using namespace std;

// 左移运算符重载
class People {
public:
	int m_A;
	int m_B;
public:
	/*
	此种方式只能实现 p.operator(people), 
	简化方式是 p << cout
	所以不采用成员函数的方式来实现左移运算符重载
	void operator<<(const People& people) {

	}
	*/
	
	People() {
		this->m_A = 10;
		this->m_B = 20;
	}
};

void test01() {

	People p;
	cout << p.m_A << endl;
	cout << p << endl;
}

int main() {

	test01();

	return 0;
}