#include<iostream>

using namespace std;

int n; // 입력 받는 수
int maxFive=0; // 최대 5의값
int minThr = 0;

int main()
{
	cin >> n;

	maxFive = n / 5;

	cout << maxFive << '\n';

	while (maxFive > -1)
	{

		for (int i = 0;; i++)
		{
			cout << maxFive << "     " << i << '\n';


			if ((maxFive * 5 + i * 3 == n)) {
				cout << (maxFive + i);
				return 0;
			}
			else if (maxFive * 5 + i * 3 > n) {
				break;
			}

		}
	
		maxFive--;

	}


	cout << -1;


	return 0;
}