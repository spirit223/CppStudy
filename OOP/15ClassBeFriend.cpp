#include<iostream>
#include<string>
using namespace std;

class Building;

class GoodGay {
public:
	Building* building;
public:
	GoodGay();
	/*
	�ιۺ���, ���øú������� building �е���������
	*/
	void visit();
};

class Building {
	friend class GoodGay;
public:
	string livingRoom;
private:
	string bedRoom;
public:
	Building();
};

// ����д��Ա����
Building::Building() {
	this->livingRoom = "����";
	this->bedRoom = "����";
}

GoodGay::GoodGay() {
	this->building = new Building;
}

void GoodGay::visit() {
	cout << "�û��������ڷ���: " << this->building->livingRoom << endl;
	cout << "�û��������ڷ���: " << this->building->bedRoom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {

	test01();

	return 0;
}