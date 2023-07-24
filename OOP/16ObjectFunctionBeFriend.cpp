#include<iostream>
#include<string>
using namespace std;

class Building;
class GoodGay{
public:
	GoodGay();
	/*
	visit1 可以访问building内的所有成员
	*/
	void visit1();
	/*
	visit2 不可以访问building内的私有成员
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
	this->livingRoom = "客厅";
	this->bedroom = "卧室";
}

void GoodGay::visit1(){
	cout << "visit1 正在访问building中的: " << this->building->livingRoom << endl;
	cout << "visit1 正在访问building中的: " << this->building->bedroom << endl;
}
void GoodGay::visit2() {
	cout << "visit1 正在访问building中的: " << this->building->livingRoom << endl;
	//cout << "visit1 正在访问building中的: " << this->building->bedroom << endl;
}


int main() {

	GoodGay gg;
	gg.visit1();
	gg.visit2();


	return 0;
}