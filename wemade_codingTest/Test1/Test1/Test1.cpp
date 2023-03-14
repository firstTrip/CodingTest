#include <vector>

using namespace std;


int dx[5] = { -1,1,0,0 };
int dy[5] = { 0,0,-1,1 };

int radishCnt=0, sweetPotatoCnt=0, potatoCnt = 0;

bool visit[100][100];

enum vagetable
{
    radish,
    sweetPotato,
    potato
};

bool cheackBoundary(int x, int y, int size)
{
    return (x >= 0 && x < size&& y >= 0 && y < size) ? 1 : 0;
}

void Search(int y,int x, int type, vector<vector<int> > v)
{

    for (int i = 0; i < 5; i++)
    {
        int newX = x + dx[i];
        int newY = y + dy[i];


        if (!cheackBoundary(newX, newY,v.size()))
            continue;

        if (visit[newY][newX])
            continue;

        if (v[newY][newX] == type)
        {
            visit[newY][newX] = true;
            Search(newY, newX, type, v);

        }
       

    }
}



vector<int> solution(vector<vector<int> > v)
{
    vector<int> answer;
    memset(visit, false, sizeof(visit));
    int type;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (!visit[i][j])
            {
                type = v[i][j];
                visit[i][j] = true;
                Search(i,j, type,v);


                if (type == radish)
                    radishCnt++;
                else if (type == sweetPotato)
                    sweetPotatoCnt++;
                else if (type == potato)
                    potatoCnt++;
            }
        }
    }

    answer.push_back(radishCnt);
    answer.push_back(sweetPotatoCnt);
    answer.push_back(potatoCnt);
    return answer;
}

int main()
{

    vector<vector<int>> v = {{0,0,1,1},{1,1,1,1},{2,2,2,1},{0,0,0,2} };
    solution(v);
    return 0;
}