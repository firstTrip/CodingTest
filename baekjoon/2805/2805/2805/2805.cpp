#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

long long n, m; // 나무의 수 , 필요한 나무의 길이
int temp;

vector<int> v;// 나무들의 길이를 저장하는 공간

bool isPossible(unsigned int height)
{
	unsigned int taken = 0;

	
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= height)
			taken += (v[i] - height);

		if (taken >= m) return true;

	}

	return false;
}

int solve()
{
	unsigned int left=0, right= v.back();
	unsigned int mid, ret;

	while (left<= right)
	{
		mid = (left + right) / 2;

		if (isPossible(mid))
		{
			ret = mid;
			left =  mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}

	return ret;
}

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{

		cin >> temp;
		v.push_back(temp);
	}
	
	sort(v.begin(), v.end());


	cout << solve();
	return 0;
}