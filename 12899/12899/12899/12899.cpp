#include <string>
#include <stack>
#include <iostream>

using namespace std;

string solution(int n)
{
    string answer = "";
    stack<int> tmp;
    
    while (n>3)
    {   
        int quotient = n % 3;
        
        if (quotient == 0)
        {
            int temp = n / 3 - 1;
            tmp.push(3);
            n = n / 3 - 1;
        }
        else
        {
            tmp.push(n%3);
            n /= 3;
        }
       
    }

    tmp.push(n); 

    while (!tmp.empty())
    {
        int num = tmp.top();
        tmp.pop();

        if (num == 3)
            answer += "4";
        else
            answer += to_string(num); //to_string -> int ���� string ������ ��ȯ �����ִ� �Լ� <string>  ��� ���Ͽ� ���ԵǾ��ִ�.
    }

    return answer;
}


int main()
{
    solution(3);
}