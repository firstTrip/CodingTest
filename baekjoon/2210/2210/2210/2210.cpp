#include<iostream>
#include<set>

using namespace std;

int arr[5][5];

int dX[4] = { 0,0,1,-1 };
int dY[4] = { 1,-1,0,0 };

set<int> s;

void DFS(int x,int y,int num ,int cnt)
{
	if (cnt == 6)
	{
		s.insert(num);
		return;
	}

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dX[i];
		int ny = y + dY[i];

		if (nx >= 0 && nx < 5 && ny < 5 && ny >=0)
		{
			DFS(nx, ny, num * 10 + arr[nx][ny], cnt +1);
		}
		
	}
	
}

int main()
{
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			cin >> arr[i][j];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			DFS(i, j, arr[i][j],1);


	cout << s.size();

	return 0;
}