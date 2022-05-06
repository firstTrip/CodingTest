#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string solution(string word)
{
	string a, b, c, answer = "";
	for (int i = 1; i < word.length() - 1; ++i)
	{
		for (int j = 1; j < word.length() - i; ++j)
		{
			a = word.substr(0, i);
			b = word.substr(i, j);
			c = word.substr(i + j);
			reverse(a.begin(), a.end());
			reverse(b.begin(), b.end());
			reverse(c.begin(), c.end());
			if (answer == "")
			{
				answer = a + b + c;
			}
			else if (a + b + c < answer)
			{
				answer = a + b + c;
			}
		}
	}
	return answer;
}

int main(int argc, const char* argv[]) {
	string word;
	cin >> word;
	cout << solution(word) << endl;

	return 0;
}
/*
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

string s;
string tmp;

vector<string> v;
vector<int> isSelected;

stack<char> st;

int main()
{
	cin >> s;

	for (int j = 0; j < s.length() - 3; j++) isSelected.push_back(0);
	for (int j = 0; j < 3; j++) isSelected.push_back(1);

	do
	{
		for (int i = 0; i < isSelected.size(); i++)
		{
			st.push(s[i]);

			if (isSelected[i])
			{
				while (!st.empty())
				{
					tmp += st.top();
					st.pop();
				}

			}
			
		}

		while (!st.empty())
		{
			tmp += st.top();
			st.pop();
		}



		v.push_back(tmp);
		tmp = "";

	} while (next_permutation(isSelected.begin(), isSelected.end()));


	sort(v.begin(), v.end());

	cout << v[0];

	return 0;
}*/