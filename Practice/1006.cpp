#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int q = 0; q < 3; q++)
		{
			for (int k = n - i; k > 0; k--)
			{
				cout << " ";
			}
			for (int j = 1; j <= 2 * i - 1; j++)
			{
				cout << "*";
			}
			for (int k = n - i; k > 0; k--)
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}