#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay{
public:
	GoodGay();
	/*
	visit1 ���Է���building�ڵ����г�Ա
	*/
	void visit1();
	/*
	visit2 �����Է���building�ڵ�˽�г�Ա
	*/
	void visit2();
public:
	Building* building;
};

class Building {
	friend void GoodGay::visit1();
public:
	string livingRoom;
	Building();
private:
	string bedroom;
};

GoodGay::GoodGay() {
	this->building = new Building;
}
Building::Building() {
	this->livingRoom = "����";
	this->bedroom = "����";
}

void GoodGay::visit1(){
	cout << "visit1 ���ڷ���building�е�: " << this->building->livingRoom << endl;
	cout << "visit1 ���ڷ���building�е�: " << this->building->bedroom << endl;
}
void GoodGay::visit2() {
	cout << "visit1 ���ڷ���building�е�: " << this->building->livingRoom << endl;
	//cout << "visit1 ���ڷ���building�е�: " << this->building->bedroom << endl;
}


int main() {

	GoodGay gg;
	gg.visit1();
	gg.visit2();


	return 0;
}