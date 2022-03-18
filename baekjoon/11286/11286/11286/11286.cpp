
#include <iostream>
#include<queue>
#include<utility>

using namespace std;

int main()
{
	int n,num;
	int zero = 0;
	priority_queue< pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq; // pair  �� int int ������ ������ ���������� 
																			//�̿��� �켱���� ť�� ����Ͽ� ���ڸ� �����鼭 ���Ľ����ش�.
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;

		if (num == 0)
		{
			if (pq.empty())
			{
				cout << zero << endl;

			}
			else
			{
				cout <<pq.top().second << endl;
				pq.pop();
			}


		}
		else
		{
			 
			pq.push(make_pair(abs(num), num));

		}


	}

}