#include<iostream>

using namespace std;

int n, m;
int arr[8][8];

int cnt = 0;

int check()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == 0)
				cnt++;
		}
	}

	return cnt;
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


	cout << check();

	return 0;
}