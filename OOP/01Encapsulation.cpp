#include<iostream>
#include<string>
using namespace std;
const double PI = 3.14;
/*
* Բ��, ��Բ���ܳ�
* �����ܳ��Ĺ�ʽ: 2 * PI * �뾶
*/
class Circle {
public:
	// ����
	double radius;

	// ��Ϊ
	double perimeter() {
		return 2 * radius * PI;
	}
};

/*
* ���һ��ѧ����, 
* ������������ѧ��, ���Ը�������ѧ�Ÿ�ֵ
* ������ʾѧ����������ѧ��
*/
class Student {
	/* 
	* ���е����Ժ���Ϊ ͳһ��Ϊ��Ա
	* ����: ��Ա����, ��Ա����
	* ����: ��Ա����, ��Ա����
	*/
public:
	string name;
	int number;

	void showStudent() {
		cout << "����: " << name << ", ѧ��: " << number << endl;
	}

	/*��������ֵ*/
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

	cout << "Բ�İ뾶Ϊ: " << circle.radius << endl;
	cout << "Բ���ܳ�Ϊ: " << circle.perimeter() << endl;

	Student stu;
	stu.name = "С��";
	stu.number = 20230723;
	stu.showStudent();

	Student stu2;
	stu2.setName("�⳩");
	stu2.setNumber(20230724);
	stu2.showStudent();

	return 0;
}