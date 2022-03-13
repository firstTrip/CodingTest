//https://programmers.co.kr/learn/courses/30/lessons/12973
#include <iostream>
#include<string>
#include<stack>
using namespace std;

int solution(string s)// 문자열 줄이기 
{
    int answer = -1;

    stack<char> st;

    if (s.length() == 1 || s.length() == 0)
    {
        return answer = 0;
    }

    st.push(s[0]);

    for (int i = 1; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
            continue;
        }

        if (st.top() == s[i])
            st.pop();
        else
        {
            st.push(s[i]);
        }
    }

    if (!st.empty())
        return answer = 0;
    else
        return answer = 1;
}


int main()
{

    solution("baabaabba");
	return 0;
}