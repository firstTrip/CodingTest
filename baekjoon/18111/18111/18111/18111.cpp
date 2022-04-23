#include<iostream>
#include<cmath>

using namespace std;

int n, m,b; // 세로줄 , 가로줄 , 인벤토리의 블록수

int arr[501][501];

int minTime = 1e9,maxHeight = -1;



int main()
{
	cin >> n >> m >> b;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];


	for (int height = 0; height <= 256; height++)
	{
		int add=0, sub=0;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				int curHeight = arr[i][j] - height;

				if (curHeight < 0)
					add -= curHeight;
				else
					sub += curHeight;


			}
		}

		if (sub + b >= add)
		{
			int ttime = 2 * sub + add;
			if (minTime >= ttime)
			{
				minTime = ttime;
				maxHeight = height;
			}
		}
	
	}
		
	cout << minTime << " " << maxHeight;
		

	return 0;
}