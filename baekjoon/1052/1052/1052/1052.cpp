#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	/*
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

	cout << "최종 값 : " <<temp;
		*/


	int n, k;
	cin >> n >> k;

	if (k >= n) {
		cout << 0;
	}
	else {
		int answer = 0;

		while (1) 
		{
			int cnt = 0;
			int temp = n;
			while (temp > 0) 
			{
				if (temp % 2 == 0) 
				{
					temp /= 2;
				}
				else {
					temp /= 2;
					cnt++;
				}

			}
			//cnt가 k보다 작거나 같아지면 종료
			if (k >= cnt) 
			{
				break;
			}

			n++;
			answer++;
		}
		cout << answer;
	}

	return 0;
}
	
