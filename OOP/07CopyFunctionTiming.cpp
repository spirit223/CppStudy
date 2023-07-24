#include<iostream>
using namespace std;
 
class Person {
public:
	int age;
public:
	Person() {
		this->age = 0;
		cout << "默认构造函数被调用" << endl;
	}

	Person(int age) {
		this->age = age;
		cout << "有参构造函数被调用" << endl;
	}

	Person(const Person& p) {
		this->age = p.age;
		cout << "拷贝构造函数被调用" << endl;
	}

	~Person() {
		cout << "析构函数被调用, 对象地址为: " << this << endl;
	}
};

void test01() {
	Person p1(10);
	Person p2(p1);

	cout << "p2的年龄为: " << p2.age << endl;
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