#include<iostream>
#include<stack>
#include<vector>
#include<queue>

using namespace std;


int main()
{
	int n;
	vector<int> v;
	queue<int> q;

	cin >> n;

	for (int i =0; i < n; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
		q.push(i + 1);
	}

	/*
	for (int j = 0; ; j++)
	{
		for()
	}
	*/

	return 0;
}