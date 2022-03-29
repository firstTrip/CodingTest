#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int n, temp, sum = 0;
int nums[8001] = {0,};
float avg=0;
int mid=0, min=0, range=0;//»ê¼úÆò±Õ,Áß¾Ó°ª,ÃÖºó°ª,¹üÀ§

int idx=0;
int maxCnt = 0;
vector<int> v;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;

		v.push_back(temp);
		sum += temp;

		if (temp <= 0)
			idx = -temp;
		else
			idx = 4000 + temp;

		nums[idx]++;

		if (nums[idx] > maxCnt)
			maxCnt = nums[idx];
	}

	sort(v.begin(), v.end());

	bool flag = false;
	int result = 0;

	for (int i =-4000; i < 4001; i++)
	{
		idx = (i > 0) ? 4000 + i : -i;


		if (nums[idx] == maxCnt)
		{
			result = i;

			if (flag)
				break;

			flag = true;
		}
	}


	avg = round((float)sum / v.size());
	if (avg == -0)
		avg = 0;
	cout << avg << '\n';

	mid = v[v.size() / 2];
	cout << mid << '\n';

	cout << result << '\n';

	range = v.back() - v.front();

	cout << range << '\n';


	return 0;
}