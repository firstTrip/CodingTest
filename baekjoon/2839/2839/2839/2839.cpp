#include<iostream>

using namespace std;

int n; // �Է� �޴� ��
int maxFive=0; // �ִ� 5�ǰ�
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