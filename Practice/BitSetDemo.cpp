#include<iostream>
#include<bitset>
using namespace std;
int main() {

	unsigned char c1 = 5;
	unsigned char c2 = 1;
	bitset<8> set1 = bitset<8>(c1);
	bitset<8> set2 = bitset<8>(c2);
	bitset<8> set3;

	set3 = set1 & set2;
	cout << set3 << endl;
	cout << (set1 | set2);


	return 0;
}