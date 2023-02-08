//��ȣ ȸ���ϱ�
//���� ����
//���� ��Ģ�� ��Ű�� ���ڿ��� �ùٸ� ��ȣ ���ڿ��̶�� �����մϴ�.
//
//(), [], {} �� ��� �ùٸ� ��ȣ ���ڿ��Դϴ�.
//���� A�� �ùٸ� ��ȣ ���ڿ��̶��, (A), [A], { A } �� �ùٸ� ��ȣ ���ڿ��Դϴ�.
//���� ���, [] �� �ùٸ� ��ȣ ���ڿ��̹Ƿ�, ([]) �� �ùٸ� ��ȣ ���ڿ��Դϴ�.
//���� A, B�� �ùٸ� ��ȣ ���ڿ��̶��, AB �� �ùٸ� ��ȣ ���ڿ��Դϴ�.
//���� ���, {} ��([]) �� �ùٸ� ��ȣ ���ڿ��̹Ƿ�, {}([]) �� �ùٸ� ��ȣ ���ڿ��Դϴ�.
//���ȣ, �߰�ȣ, �׸��� �Ұ�ȣ�� �̷���� ���ڿ� s�� �Ű������� �־����ϴ�.
//�� s�� �������� x(0 �� x < (s�� ����)) ĭ��ŭ ȸ�������� �� 
//s�� �ùٸ� ��ȣ ���ڿ��� �ǰ� �ϴ� x�� ������ return �ϵ��� solution �Լ��� �ϼ����ּ���.

#include<iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(string s) {
    int answer = 0;

    
    int cnt = 0;
    while (cnt< s.length()-1)
    {
        string newS ="";
        stack<char> st;
        bool isStop = false;

        for (int i = cnt; i < s.length(); i++)
        {
            newS += s[i];
        }


        for (int j = 0; j < cnt; j++)
        {
            newS += s[j];
        }


        for (auto k = 0; k < newS.length(); k++)
        {
            if (newS[k] == '[' || newS[k] == '{' || newS[k] == '(')
                st.push(newS[k]);
            else
            {
                if (st.empty())
                {
                    isStop = true;
                    break;

                }
                else
                {
                    if(st.top() == '[' && newS[k] == ']')
                        st.pop();
                    else if (st.top() == '{' && newS[k] == '}')
                        st.pop();
                    else if (st.top() == '(' && newS[k] == ')')
                        st.pop();
                    else
                    {
                        isStop = true;
                        break;
                    }
                }
            }
        }

        if (st.empty() && !isStop)
            answer++;

        cnt++;
    }

    return answer;
}

int main()
{
    string s = "[](){}";
    cout<<  to_string(solution(s));

    return 0;
}
