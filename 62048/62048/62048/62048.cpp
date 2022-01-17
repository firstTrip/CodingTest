#include <iostream>

using namespace std;

long long solution(int w, int h) {
    long long answer = 1;

    long long W = w;
    long long H = h;

    if (W == H)
    {
        answer = (W * H) - W;
    }
    else
    {
        long long a = W, b = H, c;

        while (b != 0)
        {
            c = a % b;
            a = b;
            b = c;
        }

        long long gcd = a;

        answer = (W * H) - (((W / gcd) + (H / gcd) - 1) * gcd);
    }
    
    cout << "answer is " << answer << endl;
    return answer;
}

int main()
{
    solution(8,12);
	return 0;
}