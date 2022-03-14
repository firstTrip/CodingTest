#include<vector>
#include<iostream>

using namespace std;

int solution(vector<int> num) {
   
	int answer = 0;
	int temp = 0;

	for (int i = 0; i < num.size(); i++)
	{
		if (num[i] == 0)
		{
			temp = 0;
			cout << "temp is " << temp << '\n';
		}
		else
		{
			temp++;
			answer += temp;
			cout << "temp is " << temp << '\n';
		}
	}
	cout << answer;

    return answer;
}


int main()
{
	vector<int> nums = { 1,0,1,1,1,0,0,1,1,0 };

	solution(nums);
	
	return 0;
}