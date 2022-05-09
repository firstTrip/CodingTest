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

    // ����ġ�� ū ������ �������� ���� ������ �������� ������ ��������
    sort(vec.begin(), vec.end(), greater<int>());

    int cnt = 0;
    for (int i = 0; i < vec.size(); i++) {
        // �׸���(greedy)
        while (k - vec[i] >= 0) {
            cnt++;
            k -= vec[i];
        }
    }

    cout << cnt;
}