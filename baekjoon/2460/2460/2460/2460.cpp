#include<iostream>

using namespace std;

int subway =10;

int enter[10];
int exitPerson[10];

int sum = 0;
int maxPerson=0;
int main()
{

	for (int i = 0; i < subway; i++)
	{
		cin >> exitPerson[i] >> enter[i];
		
	}

	

	for (int i = 0; i < subway; i++)
	{
		sum += (enter[i] - exitPerson[i]);
		cout << sum << '\n';
		if (sum > maxPerson)
		{
			maxPerson = sum;
			cout << "maxPerson is" << maxPerson << '\n';
		}
	}

	cout << maxPerson;
	return 0;
}