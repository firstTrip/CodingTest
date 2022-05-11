#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

vector<int> nums;

int main()
{
	for (int i = 0; i < 28; i++)
	{
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	sort(nums.begin(), nums.end());

	for (int i = 1; i <= 30; i++)
	{
		auto it = find(nums.begin(), nums.end(), i);
		if (it == nums.end())
			cout << i << '\n';
	}

	return 0;
}