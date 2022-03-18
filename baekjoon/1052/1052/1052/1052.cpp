#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	int n,k,cnt=0, temp = 0;
	queue<int> q;

	cin >> n;
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		q.push(1);
	}

	int sz = q.size();


	while (sz !=k)
	{

		sz = q.size();

		cout << "q.size() is " << sz << endl;

		if (sz % 2 == 0)
		{
			for (int i = 0; i < sz / 2; i++)
			{
				q.pop();
			}

		}
		else
		{
			for (int i = 0; i < sz / 2; i++)
			{
				q.pop();

			}

			cout << " pow(2, cnt) is " << pow(2, cnt) << endl;
			temp += pow(2, cnt);
		}

		cnt++;
		cout << "cnt is " << cnt << endl;


	}

	cout << "ÃÖÁ¾ °ª : " <<temp;
	return 0;
}