//https://programmers.co.kr/learn/courses/30/lessons/42586

#include <string>
#include <vector>
#include <iostream>
#include <stack>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;

    int day;
    int max_day = 0;
    for (int i = 0; i < progresses.size(); ++i)
    {
        day = (99 - progresses[i]) / speeds[i] + 1; // �ҿ�ð� ��� �� 

        if (answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back(); //���� day ���� max_day �� ���� ���  answer �� ������ ++ �����ش� 

        if (max_day < day) // max_day ���� ū day �� �ִٸ� max_day ����
            max_day = day;
    }

    return answer;
}

int main()
{
    vector<int> pro = {93,30,55};
    vector<int> spe = {1,30,5};

    solution(pro,spe);

    return 0;
}