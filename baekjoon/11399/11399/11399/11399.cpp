#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n,sum=0;

vector<int> v;

int dp[1000];
int main()
{
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	dp[0] = v[0];

	for (int i = 1; i < v.size(); i++)
	{
		dp[i] += dp[i - 1] + v[i];
	}

	for (int i = 0; i < v.size(); i++)
	{
		sum += dp[i];
	}

	cout << sum;

	return 0;
}