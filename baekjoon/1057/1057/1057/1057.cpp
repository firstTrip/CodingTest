#include<iostream>

using namespace std;



int main()
{
	int n,kim,lim,round =1;

	cin >> n>> kim>> lim;

	while (n)// n �� ��ŭ  while ���� ����
	{
		if ((kim + 1) / 2 == (lim + 1) / 2)// ������ ��� ����
			break;

		kim = (kim + 1) / 2;
		lim = (lim + 1) / 2;
		round++;

		n /= 2;
	}

	if (!n)
		return-1;

	cout << round;

	return 0;
}