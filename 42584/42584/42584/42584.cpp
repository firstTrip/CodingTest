//��������
//n�� ���� �ְ��� �� ������ ����� �迭 prices�� �Ű������� �־��� ��, 
//�� ���� �ְ��� �������� �ش� �� ���� n�� ���̿� ������ �������� ���� �ð��� �� ������ �迭�� ���
//return �ϵ��� solution �Լ��� �ϼ��ϼ���.
//
//���ѻ���
//prices�� �� ������ 1 �̻� 10, 000 ������ �ڿ����Դϴ�.
//prices�� ���� n�� 2 �̻� 100, 000 �����Դϴ�. (2 <= n <= 100, 000)
//
//����� ��
//prices : [1, 2, 3, 2, 3]
//return : [4, 3, 1, 1, 0]
//
//����� �� ����
//1���� �ְ��� 1�̸� 1�ʺ��� 5�ʱ��� �� 4�ʰ� �ְ��� �����߽��ϴ�.
//2���� �ְ��� 2�̸� 2�ʺ��� 5�ʱ��� �� 3�ʰ� �ְ��� �����߽��ϴ�.
//3���� �ְ��� 3�̸� 4���� �ְ��� 2�� �ְ��� ���������� 3�ʿ��� 4�ʰ� �Ǳ� ���������� 
//1�ʰ� �ְ��� ���� �Ȱ����� ���ϴ�.���� 5�ʱ��� �� 1�ʰ� �ְ��� �����߽��ϴ�.
//4���� �ְ��� 2�̸� 4�ʺ��� 5�ʱ��� �� 1�ʰ� �ְ��� �����߽��ϴ�.
//5���� �ְ��� 3�̸� 5�� ���ķδ� �����Ͱ� �����Ƿ� �� 0�ʰ� �ְ��� �����߽��ϴ�.

#include<iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;

    for (int i = 0; i < prices.size(); i++)
    {
        int cnt = 0;

        for (int j = i+1;j< prices.size(); j++)
        {
            cnt++;

            if (prices[j] < prices[i])
                break;
        }

        answer.push_back(cnt);
    }

    return answer;
}

int main()
{
    vector<int> prices = { 1,2,3,2,3 };
    solution(prices);

    return 0;
}