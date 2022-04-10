#include<iostream>

using namespace std;

int arr[20][200];


int n, m;// 배열의 크기, 바이러스의 크기
int s, x, y;// 시간 , x 좌표 y 좌표

int dirX[4] = { 1,-1,0,0 };
int dirY[4] = { 0,0,1,-1 };

int main()
{
	cin >> n >> m;
	cin >> s >> x>> y;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> arr[i][j];
	}

	for (int i = 0; i < 4; i++)
	{

	}

	for (int j = 0; j < 4; j++)
	{

	}

	return 0;
}