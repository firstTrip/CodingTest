#include <iostream>
#include <string>
#include <cstdio>
#include <map>
#include <cstdlib>

using namespace std;

int n; //포켓몬의 수
int m; //입력받을 문제의 수

char str[21];   //포켓몬 이름

map<string, int> mp1;   //문자열 기준으로 정렬
string mp2[100001];     //번호 기준으로 정렬

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
