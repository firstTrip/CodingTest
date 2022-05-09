#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <cstdlib>

using namespace std;

int n; //���ϸ��� ��
int m; //�Է¹��� ������ ��

char str[21];   //���ϸ� �̸�

map<string, int> mp1;   //���ڿ� �������� ����
string mp2[100001];     //��ȣ �������� ����

int main(void) {
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        string s = str;

        mp1.insert(pair<string, int>(s, i));
        mp2[i] = s;
    }

    for (int i = 0; i < m; i++) {
        scanf("%s", str);

        if (isdigit(str[0])) {
            cout << mp2[atoi(str) - 1] << "\n";
        }
        else {

            string s = str;
            printf("%d\n", mp1[s] + 1);
        }

    }
    return 0;
}
