#include<iostream>
using namespace std;

// 成员变量和成员方法是分开存储的
class Person {};

class People {
	// 非静态成员变量
	int m_A;
	static int m_B;
	void func() {}
	static void func2() {}
};
int People::m_B = 10;

void test01() {

	Person p;
	/*
	* 空对象占用字节为1
	* C++编译器会给每个空对象分配一个字节内存的空间, 是为了区分空对象在内存的位置
	* 每个空对象应该有一个独一无二的内存空间
	*/
	cout << "sizeof Person is:  " << sizeof(Person) << endl;
	cout << "sizeof p is:  " << sizeof p << endl;
}

void test02() {
	People p;
	cout << "sizeof People is:  " << sizeof(People) << endl;
	cout << "sizeof p is:  " << sizeof p << endl;
}

int main() {

	//test01();
	test02();

	return 0;
}