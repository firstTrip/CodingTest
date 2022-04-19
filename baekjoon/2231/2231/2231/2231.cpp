#include<iostream>

using namespace std;

int N;

int func(int n)
{
	int res = n;
	while (n > 0)
	{
		res += n % 10;
		n = n / 10;
	}

	return res;

}

int main()
{
	cin >> N;

	for (int i = 0; i <= N; i++)
	{
		if (func(i) == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << '0';

	return 0;
}