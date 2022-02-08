//https://programmers.co.kr/learn/courses/30/lessons/12973
#include <iostream>
#include<string>
using namespace std;

int solution(string s)
{
    int answer = -1;
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
                    return answer = 1;
                }
                else
                {
                    s.erase(i, i + 1);// 일정범위의 문자열을 삭제 시켜준다.
                    cout << "s is " << s << endl;
                    cout << "s[i] is " << i << s[i] << endl;
                }
               
            }

        }
    } // 0 탐색을 종료 해야하는 경우 추가 


    cout << "last tmp is " << s <<" ??"  << endl;
    return answer;
}


int main()
{

    solution("baabaa");
	return 0;
}