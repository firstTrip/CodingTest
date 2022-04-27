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
			if (arr[n][m])// �Ķ����� ��� temp ����
				temp++;
		}
	}

	if (!temp) white++;// �Ķ����� �ƴѰ�쿡�� 0  ������  white �� ���� ��Ų��.
	else if (temp == size * size) blue++;// ���簢�� �� ä�����ٸ�
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