#include<iostream>
using namespace std;

class Person {
public:
	int m_A;
	mutable int m_B;
public:
	/*
	* this指针本质是一个指针常量:
	* Person* const this;
	* 常函数中的this定义方式类似如下:
	* const Person* const this
	*/
	void showPerson() const {
		//m_A = 100;
	}

	/*
	* m_B 加了mutable修饰, 该变量可以在常函数中修改
	*/
	void showB() const{
		m_B = 5000;
	}

	/*
	* 测试常对象用的普通函数
	*/
	void func() {}
};

void test01() {
	/*
	* 常对象, 常对象的属性不能修改
	*/
	const Person p;
	//p.m_A = 10;
	p.m_B = 10;
	/*
	* p.func();
	* 常对象不能调用普通函数
	*/
}

int main() {

	test01();

	return 0;
}