#include <iostream>
#include <stack>

using namespace std;

int main() {
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    stack<pair<int, int> > s;  // pair<int, int> : index, height
    int num, height;
    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> height;

        while (!s.empty()) {
            //����ž �߰����� ��
            if (height < s.top().second) { // s.top().second
                cout << s.top().first << " ";
                break;
            }
            //����ž ã�� ������ ��� pop
            s.pop();
        }
        //���� ž�� ���ٸ�
        if (s.empty()) {
            cout << 0 << " ";
        }
        //���� ���̸� ���ÿ� Ǫ��
        s.push(make_pair(i + 1, height));
    }

    return 0;
}