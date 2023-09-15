#include<iostream>
#include<bitset>
using namespace std;

void printBit(const unsigned char c1) {
	bitset<8> bit1 = bitset<8>(c1);
	bitset<1> tmp;
	for (int i = 0; i < 4; i++)
	{
		tmp[0] = bit1[i];
		bit1[i] = bit1[7 - i];
		bit1[7 - i] = tmp[0];
	}
	for (int i = 0; i < 8; i++)
	{
		cout << bit1[i];
		if (i == 3) {
			cout << " ";
		}
	}
	cout << endl;
}
int main() {

	unsigned char c1 = 5;	//5  0000 0101
	unsigned char c2 = 1;	//1	 0000 0101

	printBit(c1);
	printBit(c2);

	unsigned char c3 = c1 & c2;
	printBit(c3);
	cout << "0000 0101 & 0000 0101 = " << (int)c3 << endl;

	unsigned char c4 = c1 | c2;
	printBit(c4);
	cout << "0000 0101 | 0000 0101 = " << (int)c4 << endl;

	return 0;
}