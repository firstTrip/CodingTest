#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Div(int n)// ���� n �� �ڸ��� ��� ������ ���Ϳ� �������ִ� �Լ�.
{
	vector<int> tmp;
	while (n !=0)
	{
		if (n % 10 != 0)// 0 ���δ� ������ ������ ���⶧���� 0 �� �ƴ� ��쿡�� ���Ϳ� �� ����.
		{
			tmp.push_back(n % 10);
		}
		n /= 10;

	}
	return tmp;
}

int DivToDigits(int num,vector<int> divNum)
{
	cout << num <<" is numToDigits" << '\n'; 

	for (int i = 0; i < divNum.size(); i++)
	{
		cout << divNum[i] << " is divNum" << '\n';


		if (num % divNum[i] != 0)
		{
			cout << num % divNum[i] << '\n';
			return -1;
		}
	}

	return num;
}

int recursiveFunc(int num, vector<int> divNum)
{

	num = num * 10;

	for (int i = 0; i < 10; i++)
	{
		num = num + i;

		if (DivToDigits(num, divNum) != -1)
		{

			cout << "answer = DivToDigits(num, v) is " << DivToDigits(num, divNum) << '\n';
			return DivToDigits(num, divNum);

		}
		num -= i;
	}

	return -1;
}

int Solution()
{
	long long answer;
	long long num;

	vector<int> v;

	cin >> num;

	v = Div(num);

	if (DivToDigits(num, v) != -1)
	{

		cout << "answer = DivToDigits(num, v) is " << DivToDigits(num, v) << '\n';
		return answer = DivToDigits(num, v);

	}

	while (num<=1000000000)
	{

		num = num * 10;

		for (int i = 0; i < 10; i++)
		{
			num = num + i;

			if(recursiveFunc(num,v) !=-1)
				return answer = recursiveFunc(num, v);

			if (DivToDigits(num, v) != -1)
			{

				cout << "answer = DivToDigits(num, v) is " << DivToDigits(num, v) << '\n';
				return  answer = DivToDigits(num, v);

			}
			num -= i;
		}
		
	}

	
}

int main()
{

	cout << " solution is " <<Solution();

	return 0;
}