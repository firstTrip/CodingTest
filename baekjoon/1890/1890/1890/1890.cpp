#include<iostream>

using namespace std;

int n;
int answer = 0;

long long arr[101][101];// 최대 게임판 크기
long long DP[101][101]; // DP 테이블의 최대 크기


void Solution()
{
	for (int i = 0; i < n; i++) // 이중 포문을 이용한 전체 탐색 
	{
		for (int j = 0; j < n; j++)
		{
			if (DP[i][j] == 0 || (i == n - 1 && j == n - 1)) continue; // DP[i][j]가 0 인 경우에는 지나갈 수 없는 경로이기때문에 무시해준다.

			int value = arr[i][j]; // 이동해야 하는 변수 저장
			int Down = value + i; // 아래로 이동을 하는 변수
			int Right = value + j;// 오른쪽으로 이동을 하는 변수

			if (Down < n) DP[Down][j] = DP[Down][j] + DP[i][j]; //범위를 넘어 가지 않는 경우 DP[Down][j] 값을 DP[Down][j] + DP[i][j]으로 초기화
			if (Right < n) DP[i][Right] = DP[i][Right] + DP[i][j];//범위를 넘어 가지 않는 경우 DP[i][Right] 값을 DP[i][Right] + DP[i][j]으로 초기화

		}
	}

	cout << DP[n - 1][n - 1]; // 모든 경로를 탐색 한 후 최종 목적지의 좌표 값 을 출력 
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	DP[0][0] = 1;// 처음 지점은 무조건 지나기 때문에 1로 시작

	Solution();

	return 0;
}