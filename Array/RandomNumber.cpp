#include<iostream>
#include<ctime>
#include<random>
using namespace std;

int randInt() {
	default_random_engine random;
	random.seed(time(0));
	return random();
}

int main(void) {

	cout << randInt() << endl;

	return 0;
}