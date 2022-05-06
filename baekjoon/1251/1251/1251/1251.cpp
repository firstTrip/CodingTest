#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string s;
string tmp;
string tmp2;

vector<string> v;
vector<int> isSelected;



int main()
{
	cin >> s;


	for (int j = 0; j < s.length() - 3; j++) isSelected.push_back(0);
	for (int j = 0; j < 3; j++) isSelected.push_back(1);

	do
	{
		for (int i = 0; i < isSelected.size(); i++)
		{
			int cnt = 0;
			tmp += s[i];

			if (isSelected[i])
			{
				reverse(tmp.begin(), tmp.end());
				tmp2 += tmp;
				tmp = "";
				cnt = 0;
			}
			else
			{
				cnt++;
			}
			

			if (!isSelected[s.size()])
			{
				//reverse(tmp)
			}
		}
		//cout << tmp2<<'\n';

		
		v.push_back(tmp2);
		tmp2 = "";

	} while (next_permutation(isSelected.begin(), isSelected.end()));

	



	sort(v.begin(), v.end());

	cout << v[0];

	return 0;
}