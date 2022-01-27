#include <string>
#include <vector>
#include <iostream>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) 
{
    int answer = 0;
    int temp =0;
    priority_queue<int> pq;

    for (int i = 0; i < truck_weights.size(); i++)
        pq.push(truck_weights[i]);


    while (!pq.empty())
    {
        cout << pq.top() << '\n';
        temp = pq.top();
        pq.pop();
        if (temp < weight && (temp +pq.top()) <weight)
        {
            pq.pop();
            cout << temp << '\n';

        }
        cout << temp << '\n';
    }

    return answer;
}

int main()
{
    vector<int> tw;

    tw = {7,4,5,6};

    solution(2, 10, tw);

    return 0;
}