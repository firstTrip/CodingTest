#include<iostream>

using namespace std;

int n, m;

int tmpN,tmpM;

int Reverse(int num)
{
	int rNum=0;

	while (num)
	{
		int temp;
		temp = num % 10;
		num /= 10;

		rNum *= 10;
		rNum += temp;

	}


	return rNum;
}

int main()
{
	cin >> n >> m;
	int originN = n, originM = m;
	while (n)
	{
		tmpN = n % 10;
		tmpM = m % 10;

		if (tmpN > tmpM)
		{
			cout<< Reverse(originN);
			break;
		}
		else if (tmpN < tmpM)
		{
			cout << Reverse(originM);
			break;

		}

		n /= 10;
		m /= 10;

	}

	return 0;
}