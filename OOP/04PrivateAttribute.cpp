#include<iostream>
#include<string>

using namespace std;

class Person {
private:
	// �����ɶ���д
	string name;
	// ����ֻ��
	int age = 0;
	// ��д
	int money;
public:
	// ��������
	void setName(string name) {
		this->name = name;
	}
	// ��ȡ����
	string getName() {
		return this->name;
	}
	// ��ȡ����
	int getAge() {
		return this->age;
	}
	// ���ý�Ǯ
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
	* ������Ч�Լ���
	*/
	void setAge(int age) {
		if (age < 0 || age >= 150)
		{
			cout << "������" << endl;
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
	p.setName("С��");

	cout << "����Ϊ: " << p.getName() << endl;

	/*
	* p.age = 24;
	* ˽��Ȩ�޲��ɷ���
	* Ҳû��setAge����
	* �����޸�����, ����������һ��ֻ����״̬
	*/
	cout << "����Ϊ: " << p.getAge() << endl;

	p.setMoney(100000000);
	/*
	* cout << "��ǮΪ: " << p.getMoney() << endl;
	* cout << "��ǮΪ: " << p.money << endl;
	*/

	People peo;
	peo.setAge(151);
	
	
	return 0;
}
