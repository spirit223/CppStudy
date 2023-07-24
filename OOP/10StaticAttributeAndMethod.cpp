#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	
	/*
	* 如果不进行初始化, 会报一个无法解析的外部命令
	* 这个命令不是在编译期出现的, 在链接阶段才会出现
	*/
	static int m_A;
	int m_B;

	static void func() {
		cout << "static void func()调用" << endl;
	}

	static void func2() {
		// 静态成员方法可以访问静态成员变量
		m_A = 100;

		/*
		* 静态成员方法不能访问非静态成员属性
		* m_B = 200;
		*/
		cout << "Value of m_A is:" << m_A << endl;
	}
};

// 类外初始化
int Person::m_A = 10;

void test01() {
	
	Person p;
	cout << p.m_A << endl;

	/*
	* 使用p2修改了静态变量, p访问m_A被修改
	* 证明了使用的是同一份内存
	*/
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02() {
	// 静态变量只有一份, 不属于某个对象, 所以可以直接使用类名进行访问
	cout << Person::m_A << endl;
}

void test03() {
	Person p;
	p.func();

	Person::func();
}

void test04() {
	Person::func2();
}
int main() {
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}