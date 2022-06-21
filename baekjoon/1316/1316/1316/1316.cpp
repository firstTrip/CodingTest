#include<iostream>
#include<vector>
#include<algorithm>



using namespace std;

int n,cnt=0;

string s;

int main()
{

	cin >> n;

	while (n--)
	{
		cin >> s;
		bool flag = true;

		for (int i = 0; i < s.length(); i++)
		{

			for (int j = 0; j < i; j++)
			{

				if (s[i] != s[i - 1] && s[i] == s[j]) // 옆에 존재하지 않고 순회를 하면서 같은 문자열이 존재하는 경우 false 로 변경 
				{
					flag = false;
					break;
				}

			}


		}
		if (flag) cnt++;
	}

	cout << cnt;

	return 0;
}