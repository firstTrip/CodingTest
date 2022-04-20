#include<iostream>

using namespace std;

int N, M; //가로,세로 

int arr[50][50];
int minCnt = 0;


int MakeChes(int x,int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[i][j] = 'B')
			{



			}
			else
			{

			}
		}
	}

	return cnt;
}

int main()
{
	cin >> N >> M;
	/*
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	}
	*/

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (N - i < 8|| M-j<8)
				continue;

			MakeChes(i, j);
		}
	}


	cout << minCnt;

	return 0;
}