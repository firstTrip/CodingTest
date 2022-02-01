//https://programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int idx = 0;
    sort(people.begin(), people.end());// people 을 정렬 시킨다.

    for(int i=0;i<people.size();i++)
        cout << "people is " << people[i] << endl;
    
    while (people.size() >idx)
    {
        int back = people.back();
        people.pop_back();

        if (people[idx] + back <= limit)
        {
            answer++;
            idx++;
        }
        else
            answer++;
    }
   
    return answer;
}

int main()
{
    vector<int> people;
    people = {70,50,80,20,30};

    solution(people, 100);

    return 0;
}