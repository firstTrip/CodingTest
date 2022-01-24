//https://programmers.co.kr/learn/courses/30/lessons/42626



#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int scovil(int x ,int y)
{
    return x + (2*y);
}

int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    priority_queue<int,vector<int>,greater<int>> qu;//우선순위 큐를 사용 최소힙으로 변경 

    
    for (int i = 0; i < scoville.size(); i++)
    {
        qu.push(scoville[i]);

    }

    while (!qu.empty() && qu.top()<K)
    {

        if (qu.size() == 1)
            return -1;

        int x, y;

        x = qu.top();
        qu.pop();
        y = qu.top();
        qu.pop();


        cout << x<< "     "<< y;
        cout << '\n';
        scovil(x, y);
               
        answer++;

        if (x < K)
        {
           
            qu.push(scovil(x, y));
            cout << scovil(x, y);
            cout << '\n';
        }


    }



    cout <<"answer is " <<  answer;
    return answer;
}

int main()
{

    vector<int> answer;
    answer = { 2,1,3,4,10,12 };

    solution(answer, 7);
 
    return 0;
}