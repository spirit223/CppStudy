#include<iostream>
#include<string>
using namespace std;



int main() {
	int scores[][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	string names[3] = { "����", "����", "����" };

	cout << "�ɼ�����������ʾ: " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << scores[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	cout << "�����ܳɼ�Ϊ: " << endl;
	for (int i = 0; i < 3; i++)
	{
		int count = 0;
		for (int j = 0; j < 3; j++)
		{
			count += scores[i][j];
		}
		cout << names[i] << ": " << count << endl;
	}

	return 0;
}