#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int solution(int M, vector<int> load)
{
    int answer = 0;
    int maxMove = 0;
    bool visited[12] = {false,};
    pair<int, int> p;

    sort(load.begin(), load.end());

    for (int i = 0; i < load.size(); i++)
    {
        for (int j = load.size(); j >0; j--)
        {

            // 둘의 값이 같은 경우 제외, 이미 옮긴 경우 제외 
            if (i == j || visited[i] || visited[j]) continue;

            int sum = 0;
            sum = load[i] + load[j];

            if (sum <= M)
            {
                if (sum > maxMove)
                {
                    p.first = i;
                    p.second = j;
                }
            }

        }

    }

    return answer;
}

int main()
{


	return 0;
}

/*
int solution(vector<int> people, int limit) {
    int answer = 0;
    int idx = 0;
    sort(people.begin(), people.end());
    while (people.size() > idx) {
        int back = people.back();
        people.pop_back();
        if (people[idx] + back <= limit) {
            answer++;
            idx++;
        }
        else answer++; //혼자타는 경우
    }


    return answer;
}
*/