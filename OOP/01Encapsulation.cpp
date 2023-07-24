#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
/*
* 圆类, 求圆的周长
* 周求周长的公式: 2 * PI * 半径
*/
class Circle {
public:
	// 属性
	double radius;

	// 行为
	double perimeter() {
		return 2 * radius * PI;
	}
};

/*
* 设计一个学生类, 
* 属性有姓名和学号, 可以给姓名和学号赋值
* 可以显示学生的姓名和学号
*/
class Student {
	/* 
	* 类中的属性和行为 统一称为成员
	* 属性: 成员属性, 成员变量
	* 函数: 成员方法, 成员函数
	*/
public:
	string name;
	int number;

	void showStudent() {
		cout << "姓名: " << name << ", 学号: " << number << endl;
	}

	/*给姓名赋值*/
	void setName(string name) {
		this->name = name;
	}
	void setNumber(int number) {
		this->number = number;
	}
};

int main() {

	Circle circle;
	circle.radius = 10.0;

	cout << "圆的半径为: " << circle.radius << endl;
	cout << "圆的周长为: " << circle.perimeter() << endl;

	Student stu;
	stu.name = "小吴";
	stu.number = 20230723;
	stu.showStudent();

	Student stu2;
	stu2.setName("吴畅");
	stu2.setNumber(20230724);
	stu2.showStudent();

	return 0;
}