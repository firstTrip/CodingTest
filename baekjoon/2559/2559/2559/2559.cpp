#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int N, K,maxNum,nextNum;
vector<int> v;
vector<int> temp;

int main()
{
	cin >> N >> K;


	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}
	int sum = 0;

	for (int j = 0; j < K; j++)
	{
		sum += v[j];
		
	}

	maxNum = sum;
	nextNum = sum;

	cout << "maxNum = " << maxNum << '\n';
	for (int i = 0; i < v.size()-K; i++)
	{
		nextNum += (v[K + i] - v[i]);

		if (nextNum > maxNum)
			maxNum = nextNum;
	}

	cout << maxNum;

	return 0;
}