#include<iostream>
#include<string>
using namespace std;

struct C1 {
	int some;
};

class C2{
	int some;
};

int main() {

	struct C1 c1;
	c1.some;

	class C2 c2;
	/*
	* c2.some;
	* class 默认权限为 private 不可访问
	*/
	

	return 0;
}