#include<iostream>
#include<stack>
#include<queue>
#include<string>


using namespace std;

string s = "";
string answer;

stack<char> st;
vector<char> Tag;


int main()
{

	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '<')
		{
			for (int j=i+1; ;j++)
			{
				if (s[j] == '>')
				{
					i = j;
					break;
				}
				Tag.push_back(s[i]);

			}
			
			for (int i = 0; i < Tag.size(); i++)
				answer += Tag[i];
		}
		else if (s[i] == ' ')
		{
			cout << "into " << '\n';

			while (!st.empty())
			{

				answer += st.top();
				st.pop();
			}

		}
		else
		{
			cout << s[i]<<'\n';

			st.push(s[i]);
		}
		

	}

	cout << answer;
	return 0;
}