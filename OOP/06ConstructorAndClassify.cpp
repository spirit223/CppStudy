#include<iostream>
#include<string>
using namespace std;

class Person {
public:

	int age;
public:
	Person() {
		age = 0;
		cout << "�޲ι��캯������" << endl;
	}
	Person(int a) {
		this->age = a;
		cout << "�вι��캯������, ����Ϊ: " << a << endl;
	}
	// �������캯��, ���������޸�����ҪΪ��������
	Person(const Person& p) {
		this->age = p.age;
		cout << "�������캯������" << endl;
	}

	~Person() {
		cout << "���캯������, �����ַΪ: " << this << endl;
	}
};

// 1.���ŷ�����
void test01() {
	// �޲ι��췽�����ò��ܼ�����, �ᱻ��������Ϊ�Ǻ�������
	Person p1;		// �޲ι���
	Person p2(10);	// �вι���
	Person p3(p2);	// �������캯��

	cout << "\np2������Ϊ: " << p2.age << endl;
	cout << "\np3������Ϊ: " << p3.age << endl;
}

// 2. ��ʽ��
void test02() {
	Person p1 = Person();
	Person p2 = Person(20);
	Person p3 = Person(p2);

	// ��������, ������һ��ֱ�ӽ�����������������, ���յ��ö���
	Person(50);
	cout << "aaa" << endl;

	/*
	* ��Ҫ���ÿ���������ʼ����������
	* ���벻ͨ��
	* ��������Ϊ: Person(p2) == Person p2
	* ����� "Person p2 �ض���"
	*/
	//Person(p2);
}

// 3. ��ʽת����
void test03() {
	/*
	* �൱��д�� Person p = Person(10);
	* string�����������ְ취���� "" �������ַ���
	*/
	Person p = 10;

	/*
	* ���ÿ�������
	*/
	Person p2 = p;
}

int main() {

	//test01();
	//test02();
	test03();
	return 0;
}