#include<iostream>

using namespace std;

pair<int, bool> p[10001];

void d(int n)
{
	int sum = n;

	while (n != 0)
	{
		sum = sum + (n % 10);
		n = n / 10;
	}

	p[sum].second = true;
}

int main()
{
	for (int i = 1; i < 10001; i++)
	{
		p[i].first = i;
		p[i].second = false;
	}

	for (int i = 1; i < 10001; i++)
	{
		d(i);
	}

	for (int i = 1; i < 10001; i++)
	{
		if (!p[i].second)
			cout << p[i].first << endl;
	}

	return 0;
}