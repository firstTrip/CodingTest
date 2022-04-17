#include<iostream>

using namespace std;

int N, L; // N 은 신호등의 개수 , L 은 도로의 길이
int arr[100][3];
int crossTime=1;

int main()
{
	cin >> N >> L;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];


	for (int i = 1; i <= L; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == arr[j][0] && arr[j][1] > crossTime % (arr[j][1] + arr[j][2]))
			{
				crossTime += arr[j][1] - crossTime % (arr[j][1] + arr[j][2]);
			}
			crossTime++;
		}
	}

	cout <<crossTime-1;

	return 0;
}