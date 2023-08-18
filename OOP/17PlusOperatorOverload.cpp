#include <iostream>
using namespace std;

class Person {
public:
	int a;
	int b;
	Person operator+(Person& p) {
		Person temp;
		temp.a = this->a + p.a;
		temp.b = this->b + p.b;
		return temp;
	}
	Person() {
		this->a = 0;
		this->b = 0;
	}
	Person(int a, int b) {
		this->a = a;
		this->b = b;
	}
};

Person operator+(Person& person, int num) {
	Person temp;
	temp.a = person.a + num;
	temp.b = person.b + num;
	return temp;
}

int main() {
	Person p1(10, 20);
	Person p2(30, 40);
	Person p3 = p1 + p2;
	Person p4 = p1 + 60;
	cout << "p3.a = " << p3.a << ", p3.b = " << p3.b << endl;
	cout << "p4.a = " << p4.a << ", p4.b = " << p4.b << endl;

	return 0;
}