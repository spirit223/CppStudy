#include<iostream>
using namespace std;

int main() {
	cout << "�����Ӱ���д��: " << endl;
	int score = 0;
	cin >> score;
	cout << "������Ӧ�ȼ�Ϊ: ";
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ���ĵ�Ӱ!" << endl;
		break;
	case 9:
		cout << "����Ϊ�Ǹ߷ֵĵ�Ӱ!" << endl;
		break;
	default:
		cout << "��δ����õ�Ӱ�Ĵ��!" << endl;
		break;
	}

	return 0;
}