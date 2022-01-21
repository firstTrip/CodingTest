//https://programmers.co.kr/learn/courses/30/lessons/42626



#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> scoville, int K) 
{
    int answer = 0;

    sort(scoville.begin(),scoville.end());// sort 를 사용 할 때 첫 인자에는 정렬할 값의 첫 주소 , 두 번째 인자에는 정렬할 값의 마지막 주소를 입력 한다.
    
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