#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, k,cnt =0;
int eraseNum = 2;

vector<pair<int, bool>> v;

int main()
{
	cin >> n >> k;

	for (int i = 2; i <= n; i++)
	{
		v.push_back(make_pair(i, false));
	}

	while (n--)
	{
		for (int i = 0; i < v.size(); i++)
		{
			if (v[i].first % eraseNum == 0 && v[i].second == false)
			{
				v[i].second = true;
				cnt++;

				if (cnt == k)
					cout << v[i].first;
			}


		}

		for (int i = 0; i < v.size(); i++)
		{
			if (!v[i].second)
			{
				eraseNum = v[i].first;
				break;
			}
		}

	}

	return 0;
}