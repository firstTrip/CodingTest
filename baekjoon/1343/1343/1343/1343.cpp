#include<iostream>
#include<algorithm>
using namespace std;

string s;
string answer,temp;


int cnt = 0;

int main()
{
	cin >> s;

	s += " ";

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == 'X')
		{
			cnt++;

		}
		else
		{
			if (cnt % 2 == 0)
			{
				while (cnt)
				{
					
					if (cnt % 2 == 0)
					{
						if (cnt % 4 == 0)
						{
							temp += "AAAA";

							cnt -= 4;
						}
						else
						{
							temp += "BB";

							cnt -= 2;
						}

					}

				}

				sort(temp.begin(), temp.end());

				answer += temp;
				temp = "";
			}
			else
			{
				cout << -1;
				return 0;
			}

			if(i != s.length()-1)
				answer += ".";
			cnt = 0;

		}

	}

	
	cout << answer;

	return 0;
}