#include<iostream>

using namespace std;
long long N;
long long temp = 0;


long long factorial(int n)
{
	long long sum = 1;

	for (int i = 1; i <= n; i++)
		sum *= i;

	return sum;
}

int main()
{
	cin >> N;

	if (N == 0)
	{
		cout << "NO";
		return 0;

	}

	for (int i = 0; ; i++)
	{
		temp += factorial(i);

		if (temp > N)
		{
			cout << "NO";
			break;
		}
		else if (temp == N)
		{
			cout << "YES";
			break;
		}
	}

	return 0;
}