#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> div(int n)
{
	vector<int> tmp;

	while (n !=0)
	{
		tmp.push_back(n%10);
		n /= 10;
	}

	return tmp;
}

int solution()
{
	int answer;
	int num;
	string tmp;

	vector<int> v;

	cin >> num;

	tmp= to_string(num);
	cout << num <<'\n';
	v = div(num);

	for (int i = 0; i <v.size(); i++)
	{
		cout << v[i] << '\n';

	}

	while (tmp.length()<=10)
	{
		break;
	}
	return answer =0;
	
}

int main()
{

	solution();

	return 0;
}