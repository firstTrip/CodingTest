#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int gcd(int a, int b)
{
	while (b != 0)
	{
		int r = a % b;
		a = b;
		b = r;
	}

	return a;
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}


int Div(int n)// ���� n �� �ڸ��� ��� ������ stack�� �������ְ� �ڸ������� �ּ� ������� ������ִ� �Լ�
{
	stack<int> tmp;
	while (n !=0)
	{
		if (n % 10 != 0)// 0 ���δ� ������ ������ ���⶧���� 0 �� �ƴ� ��쿡�� stack�� �� ����.
		{
			tmp.push(n % 10);
		}
		n /= 10;

	}

	while (tmp.size() != 1)
	{
		int a, b;
		a = tmp.top();
		tmp.pop();
		b = tmp.top();
		tmp.pop();

		tmp.push(lcm(a, b));
	}

	return tmp.top();
}

/*
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
*/

long long Solution()
{
	long long answer;
	int  num,lcmNum , rem;

	cin >> num;

	lcmNum = Div(num);


	int exp = 1;
	answer = num;


	for (int i = 1;; i++)
	{
		for (int j = 0; j <exp ; j++)
		{
			cout << "exp is " << exp << '\n';
			if ((answer * exp + j) % lcmNum == 0)
			{
				return (answer * exp + j);

			}
		}

		exp *= 10;
	}
	/*
	rem = answer % lcmNum; // �ʱ� ���� �ڸ������ ������������ �˻�?

	while (rem != 0)
	{
		int diff = lcmNum - rem;
		cout << "dif is " <<diff << endl;
		if (diff == lcmNum || diff < exp)
		{
			answer += diff;
			break;
		}

		exp *= 10;
		answer *= 10;
		rem = answer % lcmNum;
	}

	return answer;
	*/
	/*
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
	*/
	
}

int main()
{

	cout<<Solution();

	return 0;
}