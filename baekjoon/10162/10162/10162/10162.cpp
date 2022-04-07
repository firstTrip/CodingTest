#include<iostream>
#include<string>

using namespace std;


int N;
int A = 300, B = 60, C=10;
string s;
string blank = "0 ";

int main()
{
	cin >> N;

	if (N / A)
	{
		s += to_string(N / A) + " ";

		N = N % A;

	}
	else
		s += blank;


	if (N / B)
	{
		s += to_string(N/B) + " ";

		N = N % B;
	}
	else
		s += blank;

	if (N / C)
	{
		s += to_string(N / C);

		N = N % C; 
	}
	else
		s += blank;



	if (N)
		cout << -1;
	else
		cout << s;

	return 0;
}