//https://programmers.co.kr/learn/courses/30/lessons/42626



#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) 
{
    int answer = 0;

    sort(scoville.begin(),scoville.end());// sort �� ��� �� �� ù ���ڿ��� ������ ���� ù �ּ� , �� ��° ���ڿ��� ������ ���� ������ �ּҸ� �Է� �Ѵ�.
    
    for (int i = 0; i < scoville.size(); i++)
    {
        cout << "scoville is " << scoville[i] << endl;

    }


    return answer;
}

int main()
{

    vector<int> answer;
    answer = { 1,2,3,4,10,12 };

    for (int i = 0; i < answer.size(); i++)
        cout << "answer is " << answer[i] << endl;


    solution(answer, 7);

    return 0;
}