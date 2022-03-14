#include<vector>
#include<iostream>

using namespace std;

int solution() {
   
	int answer = 0;// 
	int cnt = 0;//답을 맞췄을 때 득점 
	int numOfAnswer;// 문제의 갯수

	int n;
	vector<int> nums;

	cin >> numOfAnswer; // 문제의 갯수를 사용자에게 입력 받음

	for (int i = 0; i < numOfAnswer; i++)// 문제의 갯수만큼 답을 입력받음
	{
		cin >> n;
		nums.push_back(n);// nums 벡터에 저장
	}

	for (int i = 0; i < numOfAnswer; i++)// 문제의 갯수만큼 for 문을 돌림
	{
		if (nums[i] == 0)// nums의 i 번째 요소가 0 인경우 득점을 0 으로 초기화
		{
			cnt = 0;
		}
		else // 답을 맞춘경우 cnt 를 증가 시켜주고 총 득점에 더해준다.
		{
			cnt++;
			answer += cnt;
		}
	}
    return answer;
}


int main()
{
	cout<< solution();
	
	return 0;
}