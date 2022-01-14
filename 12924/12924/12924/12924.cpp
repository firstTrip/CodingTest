#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int sum = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum += j;
            if (sum == n)
            {
                answer++;
                cout << "sum is same n " << sum << endl;
                break;
            }
            else if (sum > n)
            {
                cout <<"sum is over then n " << sum << endl;
                break;
            }
                
        }
        cout << sum << endl;
        sum = 0;
    }
    answer++;
    return answer;
}




int main()
{

    cout << "answer is " << solution(15) << endl;
	return 0;
}