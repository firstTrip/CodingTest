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
        day = (99 - progresses[i]) / speeds[i] + 1; // 소요시간 계산 식 

        if (answer.empty() || max_day < day)
            answer.push_back(1);
        else
            ++answer.back(); //만약 day 보다 max_day 가 작은 경우  answer 의 끝값을 ++ 시켜준다 

        if (max_day < day) // max_day 보다 큰 day 가 있다면 max_day 갱신
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