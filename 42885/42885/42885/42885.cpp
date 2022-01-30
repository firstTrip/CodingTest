//https://programmers.co.kr/learn/courses/30/lessons/42885

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    sort(people.begin(), people.end());// people 을 정렬 시킨다.

    for(int i=0;i<people.size();i++)
        cout << "people is " << people[i] << endl;
    
    while (!people.empty())// people 이 빌때까지 돌린다.
    {
        for (int i = 0; i < people.size()-1; i++)
        {
            if (people[i] + people[i + 1] <= limit)
            {
                for (int j = i + 1; j < people.size(); j++)
                {
                    if (people[i] + people[j] <= limit)
                    {
                        cout << "people sum is " << people[i]+ people[j] << endl;
                        people.erase(people.begin() + i);// 사용한 요소를 삭제한다.
                        people.erase(people.begin() + j-1);

                        answer++;
                        break;
                    }

                }
                cout << "people is " << people[i] << endl;
                people.erase(people.begin() + i);
                answer++;
            }
            else
            {
                cout << "people is " << people[i] << endl;
                people.erase(people.begin() + i);
                answer++;
            }
            
        }
        cout << "people size is " << people.size() << endl;
        cout << "answer is " << answer << endl;
    }
    

    return answer;
}

int main()
{
    vector<int> people;
    people = {70,50,80,50};

    solution(people, 100);

    return 0;
}