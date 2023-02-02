#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool able[500] = { false, };

vector<int> solution(int n, vector<vector<int>> quests) {
    vector<int> answer;

    // ��밡���� ����Ʈ 
    for (int i = 0; i < quests.size(); i++)
    {
        if (quests[i][1])
        {
            able[quests[i][1]] = true; // ���� �Ұ����� ����Ʈ

        }
    }

    while (answer.size() != n)
    {



        // ���� ����Ʈ�� ���ų� �Ϸ�Ȱ͵�
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