#include<iostream>
#include<vector>
#include<map>

using namespace std;

int solution()
{
    int n;
    cin >> n;

    map<int, int> mx;
    map<int, int> my;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }

    int cnt = 0;

    for (auto mi : mx)
    {
        if (mi.second >= 2)
            cnt++;

    }

    for (auto mi : my)
    {
        if (mi.second >= 2)
            cnt++;
    }


	return cnt;
}

int main()
{
	cout << solution();

	return 0;
}