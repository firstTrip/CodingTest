#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int n;
float row;
int cnt=1; // 행렬의 수


int dp[1001];
vector<pair<int, int>> v;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;


	row = ceil(sqrt(n));

	v.push_back(make_pair(1, 1));

	while (true) 
	{
		while (cnt>v[cnt].first + v[cnt].second)
		{

		}
	}


	return 0;
}


