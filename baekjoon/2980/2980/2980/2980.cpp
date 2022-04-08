#include<iostream>

using namespace std;

int N, L; // N 은 신호등의 개수 , L 은 도로의 길이
int arr[100][3];
int cnt = 1;
int arrCnt=0, crossTime=0;
int nowPlace = 0;
int main()
{
	cin >> N >> L;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];


	while (true)
	{
		if ((arr[arrCnt][1] - cnt) <0)
		{
			cnt = 0;
			arrCnt++;
			nowPlace++;
		}
		else
			nowPlace--;

		cnt++;
		crossTime++;
		nowPlace++;

		if (nowPlace > L)
			break;
	}

	cout <<crossTime-1;

	return 0;
}