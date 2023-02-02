#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool able[500] = { false, };

vector<int> solution(int n, vector<vector<int>> quests) {
    vector<int> answer;

    // 사용가능한 퀘스트 
    for (int i = 0; i < quests.size(); i++)
    {
        if (quests[i][1])
        {
            able[quests[i][1]] = true; // 진행 불가능한 퀘스트

        }
    }

    while (answer.size() != n)
    {



        // 선행 퀘스트가 없거나 완료된것들
        for (int i = 1; i <= n; i++)
        {
            if (!able[i])
            {
                answer.push_back(i);
                able[i] = true;
                break;
            }
        }


    }
    



    return answer;
}

int main()
{
    vector<vector<int>> v = { {1,3} ,{1,4},{3,5},{5,4} };

    solution(5, v);

    return 0;
}