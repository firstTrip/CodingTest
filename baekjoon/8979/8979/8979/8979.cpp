#include<iostream>
#include<algorithm> 

using namespace std;

int n, m;
int arr[1000][4];

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cin >> arr[i][j];
		}
	}



	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}