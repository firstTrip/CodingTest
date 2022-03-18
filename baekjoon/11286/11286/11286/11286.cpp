
#include <iostream>
#include<queue>
#include<utility>

using namespace std;

int main()
{
	int n,num;
	int zero = 0;
	priority_queue< pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq; // pair  를 int int 형으로 만든후 내림차순을 
																			//이용한 우선순위 큐를 사용하여 인자를 넣으면서 정렬시켜준다.
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