#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>


using namespace std;

int n, m;
int flag;
int student;

vector<pair<int,int>> s;

bool comp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
}

void choose()
{
	int min_count = 987654321;

	for (int i = 0; i < s.size(); i++)
	{
		min_count = min(min_count, s[i].second);
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (min_count == s[i].second)
		{
			s.erase(s.begin() + i);
			break;
		}
	}
}


int main()
{

	cin >> n;
	cin >> m;


	for (int i = 0; i < m; i++)
	{
		cin >> student;
		flag = 0;

		for (int j = 0; j < s.size(); j++)
		{
			if (s[j].first == student)
			{
				flag = 1;
				s[j].second++;
				break;
			}
		}
		
		if (flag == 0) // 새후보인경우
		{
			if (s.size() < n)
			{
				s.push_back(make_pair(student, 1));
			}
			else if (s.size() == n)
			{
				choose();
				s.push_back(make_pair(student, 1));
			}
		}
		

	}

	sort(s.begin(), s.end(),comp);


	for (int i = 0; i < s.size(); i++)
		cout << s[i].first << " ";

	return 0;
}
