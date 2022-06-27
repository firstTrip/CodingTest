#include<iostream>

using namespace std;

int arr[50][50];
bool visited[50][50] = {false,};

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		for (int i = 0; i < k; i++)
		{
			int x, y;

			cin >> x >> y;

			cin >> arr[x][y];
		}

	}

	return 0;
}