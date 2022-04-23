#include<iostream>

using namespace std;

string s;
string temp = "";
string n = "()", m= "[]";

int main()
{

	cin >> s;

	for (int i = 0; i < s.length()-1; i++)
	{
		temp += s[i];
		temp += s[i+1];

		if (temp == n || temp == m)
		{
			i++;
		}
	}


	return 0;
}