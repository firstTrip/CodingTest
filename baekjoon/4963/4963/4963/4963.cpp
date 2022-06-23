#include<iostream>

using namespace std;

int w, h;

int arr[50][50];
int visited[50][50];

int dx[8] = { 1,1,0,-1,-1,-1,0,1 }, dy[8] = { 0,1,1,1,0,-1,-1,-1 };

void dfs(int y, int x) {
	for (int i = 0; i < 8; i++) {
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if (nextX < 0 || nextY < 0 || nextX >= w || nextY >= h)continue; //범위를 벗어나면 무시
		if (!visited[nextY][nextX] && arr[nextY][nextX]) { //이동할 좌표가 방문하지 않은 땅이면 재귀호출
			visited[nextY][nextX] = 1;
			dfs(nextY, nextX);
		}
	}
}
int main()
{

	while (1)
	{
		int cnt = 0;

		cin >> w >> h;

		if (!w && !h)break;

		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < h; j++)
			{
				cin >> arr[w][h];
			}
		}

		for (int i = 0; i < w; i++)
		{
			for (int j = 0; j < h; j++)
			{
				if (!visited[i][j] && arr[i][j])
				{
					visited[i][j] = 1;
					dfs(i, j);
					cnt++;
				}
				

			}
		}

		cout << cnt << endl;
		memset(visited, 0, sizeof(visited));
	}

}