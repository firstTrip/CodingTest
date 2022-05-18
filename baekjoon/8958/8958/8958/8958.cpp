#include<iostream>

using namespace std;

int t;

int main()
{
	cin >> t;

	while(t--);
	{
		string s;
		cin >> s;

		int answer = 0;
		int cnt = 0;

		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == 'O')
			{
				cnt++;
				answer += cnt;
			}
			else
			{
				cnt = 0;
			}

		}

		cout << answer<<'\n';
	}

	return 0;
}