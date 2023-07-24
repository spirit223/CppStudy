#include<iostream>
#include<string>
using namespace std;

/*
* 公共权限 -- public:		成员类内可以访问, 类外可以访问
* 保护权限 -- protected:	成员类内可以访问, 类外不可以访问
* 私有权限 -- private:		成员类内可以访问, 类外不可以访问(继承相关)
*/
class People {
	// 公共成员
public:
	string name;
protected:
	string car;
private:
	string password;

public:
	void func() {
		this->name = "张三";
		this->car = "拖拉机";
		this->password = "123456";
	}
};

int main() {

	People p1;
	// 可以修改
	p1.name = "李四";

	/*
	* p1.car = "奔驰";
	* 不可访问
	* 成员 "Prople::car" (已声明, 所在行数:15) 不可访问
	*/

	p1.func();

	

	return 0;
}