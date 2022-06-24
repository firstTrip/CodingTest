#include<iostream>

using namespace std;

int n,maxDeep=0,maxLand=-1;

int arr[100][100], cpyArr[100][100];

bool visited[100][100];

int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };
int cnt=0;

void PrintVisted()
{

	cout << "-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << visited[i][j] << ' ';

		}
		cout << endl;

	}
}

void dfs(int y,int x)
{
	visited[y][x] = true;

	for (int i = 0; i < 4; i++)
	{
		// 4방향 검사
		int nextX = x + dx[i];
		int nextY = y + dy[i];

		if (nextX<0 || nextY <0 || nextX>=n || nextY>=n) continue;

		if (cpyArr[nextY][nextX] && !visited[nextY][nextX])
		{
			visited[nextY][nextX] = true;
			dfs(nextY, nextX);

		}
	}


}

void Reset()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cpyArr[i][j] = 0;
			visited[i][j] = 0;
		}
	}

	cnt = 0;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];

			if (arr[i][j] > maxDeep)
				maxDeep = arr[i][j];
		}
	}


	
	// copy 해서 사용하기 , visited 초기화 , 최대 높이 수만큼 반복 
	for (int h = 1; h <= maxDeep; h++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (arr[i][j] < h)
					cpyArr[i][j] = 0;
				else
					cpyArr[i][j] = 1;
			}
		}


		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (cpyArr[i][j] && !visited[i][j])
				{
					dfs(i, j);
					cnt++;
				}

			}
		}

		if (cnt > maxLand)
			maxLand = cnt;

		PrintVisted();
		Reset();
	}

	cout << maxLand;
}