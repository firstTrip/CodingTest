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

				if (s[i] != s[i - 1] && s[i] == s[j]) // ���� �������� �ʰ� ��ȸ�� �ϸ鼭 ���� ���ڿ��� �����ϴ� ��� false �� ���� 
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