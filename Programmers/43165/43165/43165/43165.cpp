//Ÿ�� �ѹ�
//���� ����
//n���� ���� �ƴ� �������� �ֽ��ϴ�.�� �������� ������ �ٲ��� �ʰ� ������ ���ϰų� ���� Ÿ�� �ѹ��� ������� �մϴ�.
//���� ���[1, 1, 1, 1, 1]�� ���� 3�� ������� ���� �ټ� ����� �� �� �ֽ��ϴ�.
//
//- 1 + 1 + 1 + 1 + 1 = 3
//+ 1 - 1 + 1 + 1 + 1 = 3
//+ 1 + 1 - 1 + 1 + 1 = 3
//+ 1 + 1 + 1 - 1 + 1 = 3
//+ 1 + 1 + 1 + 1 - 1 = 3
//����� �� �ִ� ���ڰ� ��� �迭 numbers, Ÿ�� �ѹ� target�� �Ű������� �־��� �� ���ڸ� ������ ���ϰ� ���� 
//Ÿ�� �ѹ��� ����� ����� ���� return �ϵ��� solution �Լ��� �ۼ����ּ���.
//
//���ѻ���
//�־����� ������ ������ 2�� �̻� 20�� �����Դϴ�.
//�� ���ڴ� 1 �̻� 50 ������ �ڿ����Դϴ�.
//Ÿ�� �ѹ��� 1 �̻� 1000 ������ �ڿ����Դϴ�.

#include<iostream>
#include <string>
#include <vector>

using namespace std;
int maxCnt = 0;
int answerCnt = 0;
void DFS(vector<int> numbers,int sum , int cnt,int target)
{
    cnt++;
    if (cnt > maxCnt)
    {
        if (target == sum)
        {
            answerCnt++;
            return;
        }
        else
            return;
    }

    DFS(numbers, sum + numbers[cnt-1], cnt, target);
    DFS(numbers, sum - numbers[cnt-1], cnt, target);

}

int solution(vector<int> numbers, int target) {

    maxCnt = numbers.size();
    int answer = 0;

    DFS(numbers,0, 0, target);


    return answer = answerCnt;
}

int main()
{
    vector<int> numbers = {1,1,1,1,1};
    int target = 3;
    cout << to_string(solution(numbers, target));

    return 0;
}