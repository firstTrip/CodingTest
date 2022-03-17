#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int solution()
{
	vector<int> v;
	stack<int> st;
	int num;
	int highScore;
	int cnt =1;
	cin >> num;

	for (int i = 0; i < num; i++) // num 개의 막대기를  입력 받고  st 에 push
	{
		int temp;
		cin >> temp;
		st.push(temp);
	}

	highScore = st.top();// 가장 오른쪽의 인자를 highScore 로 초기화
	cout <<"st.top()"<< st.top()<<endl;

	st.pop();// st pop()

	while (!st.empty())// st 가 다 빌때 까지 반복 
	{


		if (highScore >= st.top())// highScore 가 st.top보다 클 경우 st.pop
		{
			cout << "st.top()  1   " << st.top()  << "    highScore is "<< highScore << endl;

			st.pop();
		}
		else // highScore 가 st.top() 보다 작은 경우 cnt  를 증가 시켜주고 highScore 를 st.top 으로 변경 시켜준다.
		{
			cout << "st.top()  2   " << st.top() << "    highScore is " << highScore << endl;

			highScore = st.top();
			cnt++;
			st.pop();
			
		}
	}

	return cnt;
}

int main()
{
	 
	cout<< solution();

	return 0;
}