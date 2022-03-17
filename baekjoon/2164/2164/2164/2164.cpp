#include<iostream>
#include<queue>

using namespace std;

int solution()
{
	int n;
	cin >> n;

	queue<int> q;// FIFO ±¸Á¶

	for (int i = 0; i < n; i++)
	{
		q.push(i + 1);
	}


	while (q.size() != 1)
	{

		q.pop();
		q.push(q.front());
		q.pop();


	}

	return q.front();
}

int main()
{

	cout << solution();
	return 0;
}