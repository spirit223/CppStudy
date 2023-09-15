#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compute(string& s, int left, int right) {
    char op = '+'; //Ĭ�ϼӿ�ʼ
    int num = 0;
    vector<int> st;
    for (int i = left; i <= right; i++) {
        if (isdigit(s[i])) //����
            num = num * 10 + s[i] - '0'; //����ò��������ܺ�
        if (s[i] == '{' || s[i] == '[' || s[i] == '(') { //����������
            int layer = 0; //ͳ�������Ų���
            int j = i;
            while (j <= right) { //�������ұ�
                if (s[j] == '{' || s[j] == '[' || s[j] == '(')
                    layer++; //���������ţ������ۼ�
                else if (s[j] == '}' || s[j] == ']' || s[j] == ')') {
                    layer--; //���������Ų����ݼ�
                    if (layer == 0) //ֱ������Ϊ0
                        break;
                }
                j++;
            }
            num = compute(s, i + 1, j - 1); //�ݹ���������еĲ���
            i = j + 1;
        }
        if (!isdigit(s[i]) || i == right) { //������������߽�β
            switch (op) { //�����������ʼ����
            case '+': st.push_back(num); break; //�Ӽ������뵽ĩβ
            case '-': st.push_back(-num); break;
            case '*': st.back() *= num; break; //�˳�����ĩβ����
            case '/': st.back() /= num; break;
            }
            op = s[i]; //�޸�Ϊ��һ�ε������
            num = 0;
        }
    }
    int res = 0;
    for (int x : st) //�ۼӺ�
        res += x;
    return res;
}
int main() {
    string s;
    while (cin >> s) {
        cout << compute(s, 0, s.length() - 1) << endl;
    }
    return 0;
}