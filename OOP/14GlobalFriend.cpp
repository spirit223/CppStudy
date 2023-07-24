#include<iostream>
#include<string>
using namespace std;

/*
建筑物类
*/
class Building{
	// goodGay 全局函数是 Building 类的友元, 可以访问私有成员
	friend void goodGay(Building& building);
public:
	string LivingRoom;
private:
	string Bedroom;
public:
	Building() {
		this->LivingRoom = "客厅";
		this->Bedroom = "卧室";
	}
};

/*
全局函数
*/
void goodGay(Building& building) {
	cout << "好基友全局函数正在访问: " << building.LivingRoom << endl;
	cout << "好基友全局函数正在访问: " << building.Bedroom << endl;
}


int main() {
	Building building;
	goodGay(building);

	return 0;
}