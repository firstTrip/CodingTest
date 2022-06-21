#include<iostream>
#include<stack>

using namespace std;

int n,sum =0;

stack<int> s;

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;

		if (temp ==0)
		{
			s.pop();
		}
		else
		{
			s.push(temp);
		}

	}

	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}