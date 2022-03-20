#include <iostream>

using namespace std;

int N, M;

int arr[10] = { 0, }; // 배열을 모두 0 으로 채운다.
bool visited[10] = { false, };// 배열을 모두 false  로 채운다.


void Dfs(int cnt)
{
	if (cnt == M)// M 의 목표 위치까지 도달시 출력 시켜준다.
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++)// 도달 위치까지 도달하지 못할시 반복문 실행
	{
		if (!visited[i])// vistred 의 i 번째 배열이 false 일시 
		{
			visited[i] = true;// true 로 전환해주고 
			arr[cnt] = i;// arr[cnt] 에 값을 대입해주고
			Dfs(cnt + 1);// M 까지 될때까지 반복 해준다.
			visited[i] = false;// 다시 false 로 변경 해준다.
		}
	}
}

int main()
{

	cin >> N >> M;

	Dfs(0);

	return 0;
}