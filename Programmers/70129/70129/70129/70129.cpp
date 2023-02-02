//���� ����
//0�� 1�� �̷���� � ���ڿ� x�� ���� ���� ��ȯ�� ������ ���� �����մϴ�.
//
//x�� ��� 0�� �����մϴ�.
//x�� ���̸� c��� �ϸ�, x�� "c�� 2�������� ǥ���� ���ڿ�"�� �ٲߴϴ�.
//���� ���, x = "0111010"�̶��, x�� ���� ��ȯ�� ���ϸ� 
//x = "0111010" -> "1111" -> "100" �� �˴ϴ�.
//
//0�� 1�� �̷���� ���ڿ� s�� �Ű������� �־����ϴ�.
//s�� "1"�� �� ������ ����ؼ� s�� ���� ��ȯ�� ������ ��, ���� ��ȯ�� Ƚ���� ��ȯ �������� ���ŵ� 
//��� 0�� ������ ���� �迭�� ��� return �ϵ��� solution �Լ��� �ϼ����ּ���.
//
//���ѻ���
//s�� ���̴� 1 �̻� 150, 000 �����Դϴ�.
//s���� '1'�� �ּ� �ϳ� �̻� ���ԵǾ� �ֽ��ϴ�.

#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

string changeBinary(int sLength)
{
    string s;
    int cnt = 0;
    s = bitset<10>(sLength).to_string();
    for (int i = 0; s.length()-1; i++)
    {
        if (s[i] == '0')
            cnt++;
        else
            break;
    }

    s = s.substr(cnt, s.length());
    return s;
}

vector<int> solution(string s) {
    vector<int> answer;
    int zeroCnt = 0;
    int binaryCnt = 0;
    
    while (s.length()>1)
    {
        string changeS = "";

        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
            {
                zeroCnt++;
            }
            else
            {
                changeS += s[i];
            }
        }

        s = changeBinary(changeS.length());
        binaryCnt++;
    }
   
    answer.push_back(binaryCnt);
    answer.push_back(zeroCnt);

    return answer;
}

int main()
{
    string s = "110010101001";
    solution(s);
    return 0;
}