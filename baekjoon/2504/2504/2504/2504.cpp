#include<iostream>
#include<stack>

using namespace std;

string s;
stack<char> st;

int num =1;
// 더하기 연산 부분 해야함
int main()
{

	cin >> s;


	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			st.push(s[i]);

		}
		else if (s[i] == '[')
		{
			st.push(s[i]);

		}
		else if (s[i] == ')')
		{
			num *= 2;

			st.pop();
		}
		else if (s[i] == ']')
		{
			num *= 3;

			st.pop();
		}
	}

	cout << num;
	return 0;
}