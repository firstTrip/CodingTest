#include<iostream>

using namespace std;

int N, M; //가로,세로 

char arr[50][50];
int minCnt = 64;


int MakeChes(int x,int y)
{
	int cnt = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (arr[x+i][y+j] == 'B')
			{
				if (arr[x + i + 1][y + j + 1] != 'W')
				{
					minCnt++;
				}

			}
			else
			{
				if (arr[x + i + 1][y + j + 1] != 'B')
				{
					minCnt++;
				}

			}
			j++;
		}
		i++;
	}

	return cnt;
}

int main()
{
	cin >> N >> M;
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < M; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (N - i < 8|| M-j<8)
				continue;

			if (minCnt < MakeChes(i, j))
				minCnt = MakeChes(i, j);
		}

		
	}


	cout << minCnt;

	return 0;
}