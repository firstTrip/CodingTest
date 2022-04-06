#include<iostream>
#include<queue>
#include<string>
using namespace std;

int N,K;// N 명의 사람 K 번째 사람 제거하기 
queue<int> q;


vector<int> answer;
string  s;
int main()
{
	cin >> N >> K;

	
	for (int i = 0; i < N; i++)
	{
		q.push(i + 1);
	}


	while (!q.empty())
	{
		for (int i = 0; i < K-1; i++)
		{
			int temp = q.front();
			q.pop();
			q.push(temp);
		}
		int yosepuse = q.front();
		q.pop();

		answer.push_back(yosepuse);
		s += to_string(yosepuse);
		s += ", ";
	}

	s.erase(s.length() - 2,s.length()-1);


	cout << "<" <<  s << ">";

	return 0;
}