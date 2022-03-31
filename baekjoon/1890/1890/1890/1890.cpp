#include<iostream>

using namespace std;

int n;
int arr[101][101] = {-1,};
int temp;
int answer = 0;

void Search(int x,int y)
{
	if (arr[x][y] == -1)
		return;

	if (arr[x][y] != 0)
	{
		Search(x + arr[x][y], y);
		Search(x, y + arr[x][y]);
	}
	else if(arr[x][y] == 0)
	{
		answer++;
	}

}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> temp;
			arr[i][j] = temp;

		}
	}


	Search(0, 0);

	cout << answer;

	return 0;
}