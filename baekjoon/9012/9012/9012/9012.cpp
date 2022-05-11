#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int n;

vector<string> v;

string solustion(string word)
{
	stack<char> st;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == '(')
			st.push(word[i]);
		else if (word[i] == ')')
		{
			if(!st.empty())
				st.pop();
			else
				return "NO";

		}
	}

	if(!st.empty())
		return "NO";
	else
		return "YES";
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		string temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << solustion(v[i]) << '\n';
		
	}

	return 0;
}