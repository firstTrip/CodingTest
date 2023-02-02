//���ڿ� s���� �������� ���е� ���ڵ��� ����Ǿ� �ֽ��ϴ�.
//str�� ��Ÿ���� ���� �� �ּҰ��� �ִ밪�� ã�� �̸� "(�ּҰ�) (�ִ밪)"������ ���ڿ��� ��ȯ�ϴ� �Լ�
//solution�� �ϼ��ϼ���.
//������� s�� "1 2 3 4"��� "1 4"�� �����ϰ�, "-1 -2 -3 -4"��� "-4 -1"�� �����ϸ� �˴ϴ�.
#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>


using namespace std;

string solution(string s) {
    string answer = "";
    istringstream ss(s);

    vector<int> splitS;
    splitS.clear();

    while ((getline(ss,s,' ')))
    {
        splitS.push_back(stoi(s));
    }

    sort(splitS.begin(), splitS.end());

    answer = to_string(splitS.front())+ " " + to_string(splitS.back());

    return answer;
}

int main()
{
    string s = "-1 -2 -3 -4";
    cout<< solution(s);

    return 0;
}