#include<iostream>

using namespace std;

int arr[20][200];


int n, m;// �迭�� ũ��, ���̷����� ũ��
int s, x, y;// �ð� , x ��ǥ y ��ǥ

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