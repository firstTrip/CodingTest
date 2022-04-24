#include<iostream>
#include<stack>

using namespace std;

string s;
string temp = "";
string n = "()", m= "[]";

int main()
{

	cin >> s;

	stack<char> st;

	for (int i = 0; i < s.length(); i++)
	{
		st.push(s[i]);
	}

	while (!st.empty())
	{
		char temp = st.top();

	}

	return 0;
}