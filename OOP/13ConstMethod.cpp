#include<iostream>
using namespace std;

class Person {
public:
	int m_A;
	mutable int m_B;
public:
	/*
	* thisָ�뱾����һ��ָ�볣��:
	* Person* const this;
	* �������е�this���巽ʽ��������:
	* const Person* const this
	*/
	void showPerson() const {
		//m_A = 100;
	}

	/*
	* m_B ����mutable����, �ñ��������ڳ��������޸�
	*/
	void showB() const{
		m_B = 5000;
	}

	/*
	* ���Գ������õ���ͨ����
	*/
	void func() {}
};

void test01() {
	/*
	* ������, ����������Բ����޸�
	*/
	const Person p;
	//p.m_A = 10;
	p.m_B = 10;
	/*
	* p.func();
	* �������ܵ�����ͨ����
	*/
}

int main() {

	test01();

	return 0;
}