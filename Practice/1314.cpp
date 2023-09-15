#include<iostream>
#include<iomanip>
using namespace std;

#define TOP trapezium.top
#define BOTTOM trapezium.bottom
#define HIGH trapezium.high

struct Trapezium {
	double top;
	double bottom;
	double high;
}trapezium;

int main() {

	TOP = 15;
	BOTTOM = 25;
	HIGH = 150 * 2 / 15;

	cout << fixed << setprecision(2) << (TOP + BOTTOM) * HIGH / 2;

	return 0;
}