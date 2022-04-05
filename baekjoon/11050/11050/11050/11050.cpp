#include<iostream>

using namespace std;

int factorial(int n) {
	int sum = 1;

	for (int i = 0; i < n; i++)
		sum *= (i + 1);

	return sum;
}

int solve(int n,int m)
{
	return factorial(n) / (factorial(m) * factorial(n - m));
}

int main()
{
	int n, m;

	cin >> n >> m;
	
	 cout<< solve(n, m);

	return 0;
}