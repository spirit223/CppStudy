#include<iostream>
#include<string>
using namespace std;

/*
��������
*/
class Building{
	// goodGay ȫ�ֺ����� Building �����Ԫ, ���Է���˽�г�Ա
	friend void goodGay(Building& building);
public:
	string LivingRoom;
private:
	string Bedroom;
public:
	Building() {
		this->LivingRoom = "����";
		this->Bedroom = "����";
	}
};

/*
ȫ�ֺ���
*/
void goodGay(Building& building) {
	cout << "�û���ȫ�ֺ������ڷ���: " << building.LivingRoom << endl;
	cout << "�û���ȫ�ֺ������ڷ���: " << building.Bedroom << endl;
}


int main() {
	Building building;
	goodGay(building);

	return 0;
}