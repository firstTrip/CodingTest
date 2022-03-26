#include<iostream>
#include<vector>

using namespace std;

vector<int> v2;

int FourWayCheck()
{

}

int solution(int rainDrop,vector<vector<int>> v, vector<vector<bool>> flag)
{
	int rand=0;

	cout << "raint Drop is "<<rainDrop << endl;

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			if (v[i][j] <= rainDrop)
				flag[i][j] = true;
		}
	}


	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size(); j++)
		{
			
			cout<<flag[i][j] << " ";
		}

		cout << endl;
	}

	return -1;
}

int main()
{
	int n;
	cin >> n;


	vector<vector<int>> v(n,vector<int>(n,0));
	vector<vector<bool>> flag(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int m;
			cin >> v[i][j];
		}
	}

	
	for (int i = 1; i < 10; i++)
	{
		solution(i, v, flag);
	}
	
	return 0;
}