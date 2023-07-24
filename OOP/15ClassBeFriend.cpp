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
	参观函数, 利用该函数访问 building 中的所有属性
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

// 类外写成员函数
Building::Building() {
	this->livingRoom = "客厅";
	this->bedRoom = "卧室";
}

GoodGay::GoodGay() {
	this->building = new Building;
}

void GoodGay::visit() {
	cout << "好基友类正在访问: " << this->building->livingRoom << endl;
	cout << "好基友类正在访问: " << this->building->bedRoom << endl;
}

void test01() {
	GoodGay gg;
	gg.visit();
}

int main() {

	test01();

	return 0;
}