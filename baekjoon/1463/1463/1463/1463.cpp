#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1000001, 0);
int main()
{
    int N;
    cin >> N;

    dp[2] = 1;// 연산 횟수 저장 하기
    dp[3] = 1;
    dp[4] = 2;

    for (int i = 5; i <= N; i++) {
        if (i % 2 != 0 && i % 3 != 0)
            dp[i] = dp[i - 1] + 1; // 자신의 연산 + 자기 아래의 연산을 더해준다.
        else if (i % 2 == 0 && i % 3 == 0) // 2 와 3 둘다 나뉘어 떨어지는 경우 더 최소값을 저장해준다.
            dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);
        else if (i % 2 == 0)// 2 로 나뉘어 떨어지는경우 2로 나눈경우와 1 을 뺀경우 둘중에 DP 값이 더 작은것을 저장한다
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
        else if (i % 3 == 0)// 3으로 나뉘어 떨어지는 경우 3으로 나눈경우와 1을 뺀 경우 둘중에 DP 값이 더 작은 것을 저장한다.
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
    }
    cout << dp[N];

    return 0;
}