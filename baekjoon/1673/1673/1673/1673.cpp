#include<iostream>

using namespace std;


int n, k;
int cnt = 0;
int stamp;

int main()
{

	while (cin >> n >> k)
	{
		cnt += n;

		while (n >= k)
		{
			stamp = n / k;
			cnt += stamp;
			n -= (stamp * k);
			n += stamp;
		}

		cout << cnt << '\n';

		cnt = 0;
		stamp = 0;
		n = 0;
		k = 0;
	}


	return 0;
}