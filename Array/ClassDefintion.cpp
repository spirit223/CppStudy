#include<iostream>
using namespace std;

const double pai = 3.14;

class Circle
{
public:
	double calculate() {
		return 2 * r * pai;
	}
	void setR(double r) {
		this->r = r;
	}
private:
	double r;
};

int main() {

	Circle c1;
	c1.setR(4);

	cout << "Բ���ܳ�Ϊ�� " << c1.calculate();

	return 0;
}