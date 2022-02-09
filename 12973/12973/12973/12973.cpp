//https://programmers.co.kr/learn/courses/30/lessons/12973
#include <iostream>
#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    int answer = -1;

    stack<char> st;

    if (s.length() == 1)
    {
        answer = 0;
        return answer;
    }

    do {
        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                if (s.length() == 2)
                {
                    st.pop();
                    answer = 1;
                    break;
                }

                st.push(s[i]);// 삽입후 삭제
                st.push(s[i + 1]);//삽입후 삭제
                s.erase(i, i + 1);
                st.pop();
                st.pop();

                cout << "into? " << endl;

               
            }
            else
            {   
                st.push(s[i]);
                cout << "last st is " << st.top() << endl;
            }

            if (i == s.length() - 2 && s.length() > 2 || s.length() == 1)
            {
                answer = 0;
                cout << "last answer is " << answer << endl;
                return answer;
            }
        }
        cout << "st size is " << st.size() << endl;
        

    } while (!st.empty());




    cout << "last answer is " << answer << endl;
    return answer;
    /*
    string tmp;

    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
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
                    answer = 1;
                    cout << "last answer is " << answer << endl;
                    return answer = 1;
                }
                else
                {
                    s.erase(i, i + 1);// 일정범위의 문자열을 삭제 시켜준다.
                    cout << "s is " << s << endl;
                    cout << "s[i] is " << i << s[i] << endl;
                    cout << "it is?" << endl;
                }
               
                
            }

            if (i == s.length() - 2 && s.length() > 2 || s.length() ==1)
            {
                cout << "last answer is " << answer << endl;
                return answer = 0;
            }

        }
           
    } // 0 탐색을 종료 해야하는 경우 추가 


    cout << "last tmp is " << s <<" ??"  << endl;
    cout << "last answer is " << answer << endl;
    */

}


int main()
{

    solution("baabaabba");
	return 0;
}