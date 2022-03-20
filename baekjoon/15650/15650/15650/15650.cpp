#include<iostream>


using namespace std;

int N, M;

int arr[10] = { 0, };

void Dfs(int cnt)
{
	if (cnt == M)
	{
		cout << arr[cnt] << ' ';

		return;
	}

	for (int i=1;i<=N;i++)
	{

	}
}

int main()
{
	cin >> N >> M;

	Dfs(0);

	return 0;
}