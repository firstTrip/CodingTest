#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

pair<int, int> pos;

vector<pair<int, int>> v;
int n;

bool compare(pair<int, int> x, pair<int, int> y)
{
	if (x.first == y.first)
		return x.second > y.second;
	else if (x.first > y.first)
	{
		return x.first > y.first;
	}else
		return y.first > x.first;

}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;

		v.push_back(make_pair(x, y));
	}


	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i].first << " " << v[i].second << '\n';

	return 0;
}