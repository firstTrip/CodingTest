#include<iostream>
#include<set>

using namespace std;

string s[6];

string answer[3];

bool check(string word[3])
{
	for (int i = 0; i < 3; i++)
	{
		cout << word[i] << '\n';

		/*
		for (int j = 0; j < 3; j++)
		{

		}
		*/
	}
	cout <<"-------------------" << '\n';

	//return true;

	return false;
}

void InitailizeAnswer()
{
	for (int n = 0; n < 3; n++)
		answer[n] = " ";
}

int main()
{

	for (int i = 0; i < 6; i++)
		cin >> s[i];


	for (int n = 0; n < 3; n++)
	{
		for (int j = 0; j < 6; j++)
		{
			answer[n] = s[j];
		}
	}

	if (check(answer))
	{
		for (int n = 0; n < 3; n++)
			cout << answer[n] << '\n';
	}

	cout << '0' << '\n';


	return 0;
}