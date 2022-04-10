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

		if (binary_search(s1.begin(), s1.end(), str))// 이중 탐색을 이용해서 영역 지정후 전달하는 인자 가 있을경우 트루 반환
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