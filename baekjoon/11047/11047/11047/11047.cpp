#include <iostream>
#include <vector>
#include <algorithm> // sort

using namespace std;

int main() {

    int test, k;
    cin >> test >> k;

    vector<int> vec;

    int n;
    for (int i = 0; i < test; i++) {
        cin >> n;
        vec.push_back(n);
    }

    // 값어치가 큰 동전을 나눌수록 동전 개수가 적어지기 때문에 내림차순
    sort(vec.begin(), vec.end(), greater<int>());

    int cnt = 0;
    for (int i = 0; i < vec.size(); i++) {
        // 그리디(greedy)
        while (k - vec[i] >= 0) {
            cnt++;
            k -= vec[i];
        }
    }

    cout << cnt;
}