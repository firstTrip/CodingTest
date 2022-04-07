#include<iostream>
#include<vector>

using namespace std;

int N;
vector<int> v;
int arr[50000];
bool boom[50000] = {false,};


void Bomb(int idx)
{

	if (idx == 0 || idx == v.size())
	{
		if (idx == 0)
		{
			if (v[idx + 1] - v[idx] > 0)
			{
				boom[idx + 1] = true;

			}
			else
				return;
		}
		else
		{
			if (v[idx - 1] - v[idx] > 0)
				boom[idx - 1] = true;
			else
				return;

		}
	}
	else
	{
		if (v[idx + 1] - v[idx] > 0)
			boom[idx+1] = true;
		
	
		if(v[idx - 1] - v[idx] > 0)
			boom[idx - 1] = true;
	}

	boom[idx] = true;

}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int temp;
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < N; i++)
	{
		Bomb(i);
	}

	return 0;
}