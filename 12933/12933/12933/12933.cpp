#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> vc;
    int r=0;

    while (n != 0)
    {
        r = n % 10;
        n = n / 10;
        vc.push_back(r);
    }

    sort(vc.begin(), vc.end());

    for (int i = 0; i < vc.size(); i++)
    {
        cout << "vc is" << vc[i] << '\n';
        answer += (vc[i] * (pow(10, i)));
    }
        
    cout << "answer is" << answer << '\n';

    return answer;
}

int main()
{
    solution(118372);

    return 0;
}