#include<iostream>


using namespace std;

int N, M;

int arr[10] = { 0, };
bool visited[10] = { false, };

void Dfs(int num,int cnt)
{
	if (cnt == M)
	{
		for (int i = 0; i < M; i++)
		{
			cout << arr[i] << ' ';

		}
		cout << '\n';
		return;
	}

	for (int i=num;i<=N;i++)
	{
		if (!visited[i])
		{
			visited[i] = true;
			arr[cnt] = i;
			Dfs(i+1,cnt + 1);
			visited[i] = false;

		}

	
	}
}

int main()
{
	cin >> N >> M;

	Dfs(1,0);

	return 0;
}