#include<vector>
#include<iostream>

using namespace std;

int solution() {
   
	int answer = 0;// 
	int cnt = 0;//���� ������ �� ���� 
	int numOfAnswer;// ������ ����

	int n;
	vector<int> nums;

	cin >> numOfAnswer; // ������ ������ ����ڿ��� �Է� ����

	for (int i = 0; i < numOfAnswer; i++)// ������ ������ŭ ���� �Է¹���
	{
		cin >> n;
		nums.push_back(n);// nums ���Ϳ� ����
	}

	for (int i = 0; i < numOfAnswer; i++)// ������ ������ŭ for ���� ����
	{
		if (nums[i] == 0)// nums�� i ��° ��Ұ� 0 �ΰ�� ������ 0 ���� �ʱ�ȭ
		{
			cnt = 0;
		}
		else // ���� ������ cnt �� ���� �����ְ� �� ������ �����ش�.
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