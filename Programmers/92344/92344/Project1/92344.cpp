#include<iostream>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<vector<int>> skill)
{
    int answer = 0;

    for (int x = 0; x < skill.size(); x++)// 스킬의 갯수만큼 돌려주기 
    {
        int skillType = skill[x].front();// 스킬의 타입 구분

        int xBegin = skill[x][1];
        int yBegin = skill[x][2];

        int xEnd = skill[x][3];
        int yEnd = skill[x][4];

        int decrease = skill[x][5];

        switch (skillType)
        {

        case 1:// - cnt

            for (int i = xBegin; i <= xEnd; i++)
            {
                for (int j = yBegin; j <= yEnd; j++)
                {
                    board[i][j] -= decrease;
                }
            }
            break;

        case 2:// + cnt

            for (int i = xBegin; i <= xEnd; i++)
            {
                for (int j = yBegin; j <= yEnd; j++)
                {
                    board[i][j] += decrease;
                }
            }
            break;

        default:
            break;
        }

    }

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] > 0)
                answer++;
        }
    }

    return answer;
}

int main()
{

    vector<vector<int>> board;
    vector<vector<int>> skill;

    board = { {5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 }, { 5, 5, 5, 5, 5 } };
    skill = { {1, 0, 0, 3, 4, 4}, { 1, 2, 0, 2, 3, 2}, { 2, 1, 0, 3, 1, 2}, { 1, 0, 1, 3, 3, 1} };

    cout<< solution(board, skill)<<endl;

	return 0;
}



