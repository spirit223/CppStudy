#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	Person() {
		cout << "构造函数的调用" << endl;
	}

	~Person() {
		cout << "对象被销毁" << endl;
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