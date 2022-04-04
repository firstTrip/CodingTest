#include <iostream>
#include <queue>

using namespace std;

int main() {
    int count = 0;
    int test_case;
    cin >> test_case;

    int n, m, ipt;//문서의 개수, 궁금한 문서 위치, 중요도

    for (int i = 0; i < test_case; ++i) {
        count = 0;
        cin >> n >> m;
        queue<pair<int, int>> q;// 문서의 순서와 , 중요도 두 변수를 담은 pair 생성

        priority_queue<int> pq; // 우선순위 큐

        for (int j = 0; j < n; ++j) {
            cin >> ipt;
            q.push({ j, ipt });
            pq.push(ipt);// 우선순위 큐에 중요도를 넣어 중요도 순서대로 정렬을 하게 만듬
        }

        while (!q.empty()) {// q 가 모두 빌때까지 반복 
            int index = q.front().first;// 문서 순서
            int value = q.front().second;// 문서의 중요도

            q.pop();// q 에서 삭제

            if (pq.top() == value) {// 중요도와 pq.top()의 값이 같을 경우 
                pq.pop();// pq 를 삭제
                ++count;// count 증가

                if (index == m) {// 현재의 문서 순서가 m  과 같을 시 count 출력
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });// 다시  q 의 값을 복구
        }
    }
}