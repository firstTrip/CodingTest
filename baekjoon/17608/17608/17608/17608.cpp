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

	for (int i = 0; i < num; i++) // num ���� ����⸦  �Է� �ް�  st �� push
	{
		int temp;
		cin >> temp;
		st.push(temp);
	}

	highScore = st.top();// ���� �������� ���ڸ� highScore �� �ʱ�ȭ
	cout <<"st.top()"<< st.top()<<endl;

	st.pop();// st pop()

	while (!st.empty())// st �� �� ���� ���� �ݺ� 
	{


		if (highScore >= st.top())// highScore �� st.top���� Ŭ ��� st.pop
		{
			cout << "st.top()  1   " << st.top()  << "    highScore is "<< highScore << endl;

			st.pop();
		}
		else // highScore �� st.top() ���� ���� ��� cnt  �� ���� �����ְ� highScore �� st.top ���� ���� �����ش�.
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