#include <string>
#include <vector>
#include <iostream>

using namespace std;

int dx[5] = { -1,1,0,0 }; // ¿ÞÂÊ ,¿À¸¥ÂÊ
int dy[5] = { 0,0,-1,1 }; // ¾Æ·¡ , À§
// ºóÄ­ 0, ÆøÅº 1, Àå¾Ö¹° 2 , ÀÌµ¿ ¸øÇÏ´Â °÷ -1
int minTime = INT_MAX;
bool checkBoundary(int x, int y,int size)
{
    return (x >= 0 && x < size&& y >= 0 && y < size) ? 1: 0;
}

bool cheackEmpty(vector<vector<int>> board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == 0)
                return false;
        }
    }

    return true;
}

vector<vector<int>> makeBomb(vector<vector<int>> board,int k)
{
    vector<vector<int>> newBoard;

    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board.size(); j++)
        {
            if (board[i][j] == 1)
            {
                // k¸¸Å­ÀÇ for ¹® Å½»ö
                int newX;
                int newY;

                for (int x = 0; x < 4; x++)
                {
                    newX = j + dx[x];
                    newY = i + dy[x];

                    if (!checkBoundary(newX,newY, board.size()))
                        continue;

                    for (int z = 0; z < k; z++)
                    {
                        int bombAreaX = newX + (z * dx[x]);
                        int bombAreaY = newY + (z * dy[x]);

                        if (!checkBoundary(bombAreaX, bombAreaY, board.size()))
                            continue;

                        if (board[bombAreaY][bombAreaX] != 2)
                        {
                            if (board[bombAreaY][bombAreaX] != 1)
                                board[bombAreaY][bombAreaX] = -1;


                        }
                        else
                            break;
                    }
                  
                }
               
            }
        }
    }

    return board;
}

void DFS(vector<vector<int>> board, int ax, int ay, int cnt)
{
    if (cnt >= board.size() * board.size() || cnt>= minTime)
        return;

    if (board[ax][ay] == 0)
    {
        minTime = cnt;
        return;
    }

    cnt++;

    for (int x = 0; x < 5; x++)
    {
        int newX = ay + dx[x];
        int newY = ax + dy[x];

        if (!checkBoundary(newX, newY, board.size()) )
            continue;

        if (board[newY][newX] == 2 || board[newY][newX] == 1)
            continue;

        DFS(board, newY, newX, cnt);


    }
}

int solution(vector<vector<int>> board, int k, int ax, int ay) {
    int answer = -1;

    board = makeBomb(board, k);

    if (!cheackEmpty(board))
        DFS(board, ax, ay, 0);
    else
        return -1;

    return answer = minTime;
}

int main()
{
    vector<vector<int>> borad = { {0,0,0,1},{0,0,0,1,} ,{0,0,0,1},{0,0,0,1} };

    solution(borad, 2, 2, 1);

    return 0;
};
