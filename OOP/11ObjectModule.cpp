#include<iostream>
using namespace std;

// ��Ա�����ͳ�Ա�����Ƿֿ��洢��
class Person {};

class People {
	// �Ǿ�̬��Ա����
	int m_A;
	static int m_B;
	void func() {}
	static void func2() {}
};
int People::m_B = 10;

void test01() {

	Person p;
	/*
	* �ն���ռ���ֽ�Ϊ1
	* C++���������ÿ���ն������һ���ֽ��ڴ�Ŀռ�, ��Ϊ�����ֿն������ڴ��λ��
	* ÿ���ն���Ӧ����һ����һ�޶����ڴ�ռ�
	*/
	cout << "sizeof Person is:  " << sizeof(Person) << endl;
	cout << "sizeof p is:  " << sizeof p << endl;
}

void test02() {
	People p;
	cout << "sizeof People is:  " << sizeof(People) << endl;
	cout << "sizeof p is:  " << sizeof p << endl;
}

int main() {

	//test01();
	test02();

	return 0;
}