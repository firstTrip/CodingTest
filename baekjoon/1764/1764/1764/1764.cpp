#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, m;

vector<string> s1;
vector<string> s2;

string name;
string str;


int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> name;
		s1.push_back(name);

	}
	
	sort(s1.begin(), s1.end());

	for (int i = 0; i < m; i++)
	{
		cin >> str;

		if (binary_search(s1.begin(), s1.end(), str))// ���� Ž���� �̿��ؼ� ���� ������ �����ϴ� ���� �� ������� Ʈ�� ��ȯ
		{
			s2.push_back(str);
		}

		
	}

	sort(s2.begin(), s2.end());

	cout << s2.size() << '\n';

	for (int i = 0; i < s2.size(); i++)
		cout << s2[i] << '\n';

	return 0;
}