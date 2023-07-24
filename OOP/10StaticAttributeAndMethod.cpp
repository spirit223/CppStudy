#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	
	/*
	* ��������г�ʼ��, �ᱨһ���޷��������ⲿ����
	* ���������ڱ����ڳ��ֵ�, �����ӽ׶βŻ����
	*/
	static int m_A;
	int m_B;

	static void func() {
		cout << "static void func()����" << endl;
	}

	static void func2() {
		// ��̬��Ա�������Է��ʾ�̬��Ա����
		m_A = 100;

		/*
		* ��̬��Ա�������ܷ��ʷǾ�̬��Ա����
		* m_B = 200;
		*/
		cout << "Value of m_A is:" << m_A << endl;
	}
};

// �����ʼ��
int Person::m_A = 10;

void test01() {
	
	Person p;
	cout << p.m_A << endl;

	/*
	* ʹ��p2�޸��˾�̬����, p����m_A���޸�
	* ֤����ʹ�õ���ͬһ���ڴ�
	*/
	Person p2;
	p2.m_A = 200;
	cout << p.m_A << endl;
}

void test02() {
	// ��̬����ֻ��һ��, ������ĳ������, ���Կ���ֱ��ʹ���������з���
	cout << Person::m_A << endl;
}

void test03() {
	Person p;
	p.func();

	Person::func();
}

void test04() {
	Person::func2();
}
int main() {
	//test01();
	//test02();
	//test03();
	test04();
	return 0;
}