#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	// 姓名可读可写
	string name;
	// 年龄只读
	int age = 0;
	// 可写
	int money;
public:
	// 设置姓名
	void setName(string name) {
		this->name = name;
	}
	// 获取姓名
	string getName() {
		return this->name;
	}
	// 获取年龄
	int getAge() {
		return this->age;
	}
	// 设置金钱
	void setMoney(int money) {
		this->money = money;
	}
};

class People {
private:
	string name;
	int age;
	int money;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}

	/*
	* 数据有效性检验
	*/
	void setAge(int age) {
		if (age < 0 || age >= 150)
		{
			cout << "老妖精" << endl;
			return;
		}
		this->age = age;
	}

	int getAge() {
		return this->age;
	}
	void setMoney(int money) {
		this->money = money;
	}
};

int main() {

	Person p;
	p.setName("小吴");

	cout << "姓名为: " << p.getName() << endl;

	/*
	* p.age = 24;
	* 私有权限不可访问
	* 也没有setAge方法
	* 不能修改年龄, 所以年龄是一个只读的状态
	*/
	cout << "年龄为: " << p.getAge() << endl;

	p.setMoney(100000000);
	/*
	* cout << "金钱为: " << p.getMoney() << endl;
	* cout << "金钱为: " << p.money << endl;
	*/

	People peo;
	peo.setAge(151);
	
	
	return 0;
}
