#include<iostream>

using namespace std;

int n, m,cnt=0;

int arr[101][101];
bool visited[101][101];


int dx[] = { -1,1,0,0 }, dy[] = { 0,0,-1,1 };

void PrintVisited()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< visited[i][j];
		}
		cout << endl;
	}
}

void DFS(int y,int x)
{

	if (y == m && x == n)
		return;

	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx<0 || ny<0 || nx>=m || ny>=n) continue;

		if (!visited[ny][nx] && arr[ny][nx])
		{
			visited[ny][nx] = true;
			PrintVisited();
			DFS(ny, nx);
			cnt++;
		}
	}


}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	PrintVisited();
	DFS(0, 0);

	cout << cnt;
	return 0;
}