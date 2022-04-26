#include<iostream>

using namespace std;

int n;

int main()
{
	int cnt = 0;
	int num=100;

	pair<int,int> temp;
	cin >> n;

	if (n > 9)
	{
		temp.first = n / 10;
		temp.second = n % 10;
	}
	else
	{
		n *= 10;
		temp.first = n / 10;
		temp.second = n % 10;
	}

	while (n != num)
	{

		num = temp.second * 10 + ((temp.first + temp.second) % 10);

		temp.first = num / 10;
		temp.second = num % 10;
		
		cnt++;

	}

	cout <<cnt;


	return 0;
}