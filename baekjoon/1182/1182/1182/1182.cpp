#include<iostream>

using namespace std;

int arr[20];
int N, S;// N ���� ������ ���� S 
int cnt;


void dfs(int i, int sum)
{
	if (i == N)// dfs �Լ��� N ��° Ž���� �Ѱ�� Ž���� �����ض�
		return;

	if (sum + arr[i] == S)//sum �� ���� Ž������ �迭�� ���� S �� ���� ��� cnt ++
		cnt++;

	dfs(i + 1, sum);// �ش��ϴ� �迭�� ���� ���� �ʰ� ��Ž��
	dfs(i + 1, sum + arr[i]);//�ش��ϴ� �迭�� �����ְ� ��Ž��

}

int main()
{
	cin >> N >> S;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	dfs(0, 0);


	cout << cnt;
	return 0;
}