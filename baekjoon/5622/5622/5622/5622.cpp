#include<iostream>
using namespace std;

string s;
int sum = 0;

string alpha[8] = { "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ" };

int CharToInt(char c)
{
	int num =0;
	
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < alpha[i].length(); j++)
		{
			if (alpha[i][j] == c)
			{
				num = i + 3;
				break;
			}
		}
	}

	return num;
}

int main()
{
	cin >> s;

	for (int i = 0; i < s.length(); i++)
	{
		sum +=CharToInt(s[i]);
	}


	cout << sum;

	return 0;
}