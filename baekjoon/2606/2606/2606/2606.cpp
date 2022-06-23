#include<iostream>

using namespace std;

bool visited[101];
int map[101][101];
int n, m, cnt = 0;

void DFS(int x)
{
	visited[x] = true;
	for (int i = 1; i <= n; i++)
	{
		if ((!visited[i] && map[x][i] == 1))
		{
			cnt++;
			DFS(i);
		}
	}
}


int main()
{
	int x, y;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> x;
		cin >> y;

		map[x][y] = map[y][x] = 1;
	}

	DFS(1);

	cout << cnt;

	return 0;
}