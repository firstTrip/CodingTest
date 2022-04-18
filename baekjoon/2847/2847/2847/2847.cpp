#include<iostream>

using namespace std;


int N;
int arr[100];
int cnt=0;


int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int j = N-1; j >= 1; --j) {
		while (arr[j] <= arr[j - 1]) {
			arr[j - 1]--;
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}