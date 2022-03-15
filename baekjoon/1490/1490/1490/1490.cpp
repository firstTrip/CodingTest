#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> Div(int n)// 숫자 n 을 자릿수 대로 나누어 벡터에 저장해주는 함수.
{
	vector<int> tmp;
	while (n !=0)
	{
		if (n % 10 != 0)// 0 으로는 정수를 나눌수 없기때문에 0 이 아닌 경우에만 벡터에 값 저장.
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