#include<iostream>
#include<string>
using namespace std;

/*
* ����Ȩ�� -- public:		��Ա���ڿ��Է���, ������Է���
* ����Ȩ�� -- protected:	��Ա���ڿ��Է���, ���ⲻ���Է���
* ˽��Ȩ�� -- private:		��Ա���ڿ��Է���, ���ⲻ���Է���(�̳����)
*/
class People {
	// ������Ա
public:
	string name;
protected:
	string car;
private:
	string password;

public:
	void func() {
		this->name = "����";
		this->car = "������";
		this->password = "123456";
	}
};

int main() {

	People p1;
	// �����޸�
	p1.name = "����";

	/*
	* p1.car = "����";
	* ���ɷ���
	* ��Ա "Prople::car" (������, ��������:15) ���ɷ���
	*/

	p1.func();

	

	return 0;
}