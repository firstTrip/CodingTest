#include<iostream>

using namespace std;

int n;
int answer = 0;

long long arr[101][101];
long long DP[101][101];

void Search(int x,int y)
{

	if (x >n || y>n)
	{

		cout << x << "   " << y << '\n';
		return;

	}
		
	if(arr[x][y] == 0)
	{
		answer++;
		return;
	}

	Search(x + arr[x][y], y);
	Search(x, y + arr[x][y]);

}

void Solution()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (DP[i][j] == 0 || (i == n - 1 && j == n - 1)) continue;

			int value = arr[i][j];
			int Down = value + i;
			int Right = value + j;

			if (Down < n) DP[Down][j] = DP[Down][j] + DP[i][j];
			if (Right < n) DP[i][Right] = DP[i][Right] + DP[i][j];

		}
	}

	cout << DP[n - 1][n - 1];
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	DP[0][0] = 1;// 처음 지점은 무조건 지나기 때문에 1로 시작

	Solution();

	return 0;
}