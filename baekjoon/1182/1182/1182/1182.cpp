#include<iostream>

using namespace std;

int arr[20];
int N, S;// N 개의 정수와 정수 S 
int cnt;


void dfs(int i, int sum)
{
	if (i == N)// dfs 함수가 N 번째 탐색을 한경우 탐색을 종료해라
		return;

	if (sum + arr[i] == S)//sum 과 지금 탐색중인 배열의 합이 S 와 같은 경우 cnt ++
		cnt++;

	dfs(i + 1, sum);// 해당하는 배열을 더해 주지 않고 재탐색
	dfs(i + 1, sum + arr[i]);//해당하는 배열을 더해주고 재탐색

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