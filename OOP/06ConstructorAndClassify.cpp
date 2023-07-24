#include<iostream>
#include<string>
using namespace std;

class Person {
public:

	int age;
public:
	Person() {
		age = 0;
		cout << "无参构造函数调用" << endl;
	}
	Person(int a) {
		this->age = a;
		cout << "有参构造函数调用, 参数为: " << a << endl;
	}
	// 拷贝构造函数, 参数不可修改且需要为引用类型
	Person(const Person& p) {
		this->age = p.age;
		cout << "拷贝构造函数调用" << endl;
	}

	~Person() {
		cout << "构造函数调用, 对象地址为: " << this << endl;
	}
};

// 1.括号法调用
void test01() {
	// 无参构造方法调用不能加括号, 会被编译器认为是函数声明
	Person p1;		// 无参构造
	Person p2(10);	// 有参构造
	Person p3(p2);	// 拷贝构造函数

	cout << "\np2的年龄为: " << p2.age << endl;
	cout << "\np3的年龄为: " << p3.age << endl;
}

// 2. 显式法
void test02() {
	Person p1 = Person();
	Person p2 = Person(20);
	Person p3 = Person(p2);

	// 匿名对象, 下面这一行直接结束后会立马调用析构, 回收掉该对象
	Person(50);
	cout << "aaa" << endl;

	/*
	* 不要利用拷贝函数初始化匿名对象
	* 编译不通过
	* 编译器认为: Person(p2) == Person p2
	* 会出现 "Person p2 重定义"
	*/
	//Person(p2);
}

// 3. 隐式转换法
void test03() {
	/*
	* 相当于写了 Person p = Person(10);
	* string就是利用这种办法接收 "" 创建的字符串
	*/
	Person p = 10;

	/*
	* 调用拷贝构造
	*/
	Person p2 = p;
}

int main() {

	//test01();
	//test02();
	test03();
	return 0;
}