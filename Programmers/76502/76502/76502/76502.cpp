//괄호 회전하기
//문제 설명
//다음 규칙을 지키는 문자열을 올바른 괄호 문자열이라고 정의합니다.
//
//(), [], {} 는 모두 올바른 괄호 문자열입니다.
//만약 A가 올바른 괄호 문자열이라면, (A), [A], { A } 도 올바른 괄호 문자열입니다.
//예를 들어, [] 가 올바른 괄호 문자열이므로, ([]) 도 올바른 괄호 문자열입니다.
//만약 A, B가 올바른 괄호 문자열이라면, AB 도 올바른 괄호 문자열입니다.
//예를 들어, {} 와([]) 가 올바른 괄호 문자열이므로, {}([]) 도 올바른 괄호 문자열입니다.
//대괄호, 중괄호, 그리고 소괄호로 이루어진 문자열 s가 매개변수로 주어집니다.
//이 s를 왼쪽으로 x(0 ≤ x < (s의 길이)) 칸만큼 회전시켰을 때 
//s가 올바른 괄호 문자열이 되게 하는 x의 개수를 return 하도록 solution 함수를 완성해주세요.

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
