#include<iostream>

using namespace std;

int N, L; // N �� ��ȣ���� ���� , L �� ������ ����
int arr[100][3];

int main()
{
	cin >> N >> L;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];



	return 0;
}