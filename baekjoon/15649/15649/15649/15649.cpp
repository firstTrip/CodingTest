#include <iostream>

using namespace std;

int N, M;

int arr[10] = { 0, }; // �迭�� ��� 0 ���� ä���.
bool visited[10] = { false, };// �迭�� ��� false  �� ä���.


void Dfs(int cnt)
{
	if (cnt == M)// M �� ��ǥ ��ġ���� ���޽� ��� �����ش�.
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	for (int i = 1; i <= N; i++)// ���� ��ġ���� �������� ���ҽ� �ݺ��� ����
	{
		if (!visited[i])// vistred �� i ��° �迭�� false �Ͻ� 
		{
			visited[i] = true;// true �� ��ȯ���ְ� 
			arr[cnt] = i;// arr[cnt] �� ���� �������ְ�
			Dfs(cnt + 1);// M ���� �ɶ����� �ݺ� ���ش�.
			visited[i] = false;// �ٽ� false �� ���� ���ش�.
		}
	}
}

int main()
{

	cin >> N >> M;

	Dfs(0);

	return 0;
}