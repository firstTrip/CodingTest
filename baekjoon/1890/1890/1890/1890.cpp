#include<iostream>

using namespace std;

int n;
int answer = 0;

long long arr[101][101];// �ִ� ������ ũ��
long long DP[101][101]; // DP ���̺��� �ִ� ũ��


void Solution()
{
	for (int i = 0; i < n; i++) // ���� ������ �̿��� ��ü Ž�� 
	{
		for (int j = 0; j < n; j++)
		{
			if (DP[i][j] == 0 || (i == n - 1 && j == n - 1)) continue; // DP[i][j]�� 0 �� ��쿡�� ������ �� ���� ����̱⶧���� �������ش�.

			int value = arr[i][j]; // �̵��ؾ� �ϴ� ���� ����
			int Down = value + i; // �Ʒ��� �̵��� �ϴ� ����
			int Right = value + j;// ���������� �̵��� �ϴ� ����

			if (Down < n) DP[Down][j] = DP[Down][j] + DP[i][j]; //������ �Ѿ� ���� �ʴ� ��� DP[Down][j] ���� DP[Down][j] + DP[i][j]���� �ʱ�ȭ
			if (Right < n) DP[i][Right] = DP[i][Right] + DP[i][j];//������ �Ѿ� ���� �ʴ� ��� DP[i][Right] ���� DP[i][Right] + DP[i][j]���� �ʱ�ȭ

		}
	}

	cout << DP[n - 1][n - 1]; // ��� ��θ� Ž�� �� �� ���� �������� ��ǥ �� �� ��� 
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

	DP[0][0] = 1;// ó�� ������ ������ ������ ������ 1�� ����

	Solution();

	return 0;
}