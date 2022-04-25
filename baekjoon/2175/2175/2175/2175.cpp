#include<iostream>
#include<vector>


using namespace std;


vector<pair<int, int>> v;
vector<pair<float, float>> MPos;


vector<float> f;


int main()
{

	for (int i = 0; i < 4; i++)
	{
		int x, y;
		cin >> x >> y;

		v.push_back(make_pair(x, y));

	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i; j++)
		{

			if (i - j == 2)
				continue;

			MPos.push_back(make_pair((float)(v[j].first + v[i].first)/2, (float)(v[j].second + v[i].second)/2));

		}
	}

	for (auto n : MPos)
		cout << n.first << " " << n.second << '\n';

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i; j++)
		{


		}
	}

	return 0;
}