#include<iostream>

using namespace std; 

int n;

int blue =0, white =0;

int arr[129][129];

void WhatColor(int i,int j,int size)
{
	int temp = 0;
	for (int n = i; n < i +size; n++)
	{
		for (int m = j; m < j + size; m++)
		{
			if (arr[n][m])// 파란색인 경우 temp 증가
				temp++;
		}
	}

	if (!temp) white++;// 파란색이 아닌경우에는 0  임으로  white 를 증가 시킨다.
	else if (temp == size * size) blue++;// 정사각형 다 채워진다면
	else {
		WhatColor(i, j, size / 2);
		WhatColor(i+size/2, j, size / 2);
		WhatColor(i, j+size/2, size / 2);
		WhatColor(i+size/2, j+size/2, size / 2);

	}
		
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin>> arr[i][j];

	WhatColor(0, 0, n);

	cout << white << '\n';
	cout << blue << '\n';

	return 0;
}