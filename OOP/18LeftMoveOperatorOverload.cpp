#include<iostream>
#include <string>
using namespace std;

// �������������
class People {
public:
	int m_A;
	int m_B;
public:
	/*
	���ַ�ʽֻ��ʵ�� p.operator(people), 
	�򻯷�ʽ�� p << cout
	���Բ����ó�Ա�����ķ�ʽ��ʵ���������������
	void operator<<(const People& people) {

	}
	*/
	
	People() {
		this->m_A = 10;
		this->m_B = 20;
	}
};

void test01() {

	People p;
	cout << p.m_A << endl;
	cout << p << endl;
}

int main() {

	test01();

	return 0;
}