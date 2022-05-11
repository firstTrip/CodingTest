#include<iostream>
#include<vector>

using namespace std;

int n, m;
int minNum =0;

vector<int> A;
vector<int> B;

int sum = 0;
int add = 0;

int main()
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;

		A.push_back(tmp);
	}

	for (int i = 0; i < m; i++)
	{
		int tmp;
		cin >> tmp;

		B.push_back(tmp);
	}

	for (int i = 0; i < A.size(); i++)
	{
		for (int j = 0; j < B.size(); j++)
		{
			minNum = abs(A[i] - B[0]);
			
			if (minNum > abs(A[i] - B[j]))
			{  
				minNum = abs(A[i] - B[j]);

				if(add > j)
					add = j;

			}

		}

		sum += B[add];
		cout << B[add] << '\n';

	}


	cout << sum;
	return 0;
}