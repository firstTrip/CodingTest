//https://programmers.co.kr/learn/courses/30/lessons/12973
#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = -1;
    string tmp;

    // [����] ��ư�� ������ ��� ���� �� �� �ֽ��ϴ�.
    //cout << "Hello Cpp" << endl;
    while (!s.empty())
    {
        for (int i = 0; i < s.length()-1; i++)
        {
            cout << "s[i] is "<< i << s[i] << endl;
            if (s[i] == s[i + 1])
            {

                if (i < 1)
                {
                    cout << "s[i] is " << i << s[i] << endl;
                    s.clear();
                    return answer = 1;
                }
                else
                {
                    s.erase(i, i + 1);// ���������� ���ڿ��� ���� �����ش�.
                    cout << "s is " << s << endl;
                    cout << "s[i] is " << i << s[i] << endl;
                }
               
            }

        }
    } // 0 Ž���� ���� �ؾ��ϴ� ��� �߰� 


    cout << "last tmp is " << s <<" ??"  << endl;
    return answer;
}


int main()
{

    solution("baabaa");
	return 0;
}