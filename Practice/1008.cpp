#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int j = 1; j <= n; j++)
	{
		for (int k = n-j; k > 0; k--)
		{
			cout << " ";
		}
		for (int i = 1; i <= 2 * j - 1; i++)
		{
			cout << j;
		}
		cout << endl;
	}
	return 0;
}