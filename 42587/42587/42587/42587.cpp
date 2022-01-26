//https://programmers.co.kr/learn/courses/30/lessons/42587

#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    queue<int> printer;                         //queue�� index ����.
    vector<int> sorted;                         //���ĵ� ��� �����
    for (int i = 0; i < priorities.size(); i++) {
        printer.push(i);
    }
    while (!printer.empty()) {
        int now_index = printer.front();
        printer.pop();
        if (priorities[now_index] != *max_element(priorities.begin(), priorities.end())) {
            //�ƴѰ�� push
            printer.push(now_index);
        }
        else {
            //�´°��
            sorted.push_back(now_index);
            priorities[now_index] = 0;
        }
    }
    for (int i = 0; i < sorted.size(); i++) {
        if (sorted[i] == location) return i + 1;
    }
}

int main()
{
    vector<int> prioritie;

    prioritie = {2,1,3,2};

    solution(prioritie, 2);

    cout<< solution(prioritie, 2);
    return 0;
}