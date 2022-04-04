#include <iostream>
#include <queue>

using namespace std;

int main() {
    int count = 0;
    int test_case;
    cin >> test_case;

    int n, m, ipt;//������ ����, �ñ��� ���� ��ġ, �߿䵵

    for (int i = 0; i < test_case; ++i) {
        count = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;// ������ ������ , �߿䵵 �� ������ ���� pair ����

        priority_queue<int> pq; // �켱���� ť

        for (int j = 0; j < n; ++j) {
            cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);// �켱���� ť�� �߿䵵�� �־� �߿䵵 ������� ������ �ϰ� ����
        }

        while (!q.empty()) {// q �� ��� �������� �ݺ� 
            int index = q.front().first;// ���� ����
            int value = q.front().second;// ������ �߿䵵

            q.pop();// q ���� ����

            if (pq.top() == value) {// �߿䵵�� pq.top()�� ���� ���� ��� 
                pq.pop();// pq �� ����
                ++count;// count ����

                if (index == m) {// ������ ���� ������ m  �� ���� �� count ���
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });// �ٽ�  q �� ���� ����
        }
    }
}