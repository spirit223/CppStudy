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
	* class Ĭ��Ȩ��Ϊ private ���ɷ���
	*/
	

	return 0;
}