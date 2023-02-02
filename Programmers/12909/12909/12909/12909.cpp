//���� ����
//��ȣ�� �ٸ��� ¦�������ٴ� ���� '(' ���ڷ� �������� �ݵ�� ¦��� ')' ���ڷ� ������ �Ѵٴ� ���Դϴ�.
// ���� ���
//
//"()()" �Ǵ� "(())()" �� �ùٸ� ��ȣ�Դϴ�.
//")()(" �Ǵ� "(()(" �� �ùٸ��� ���� ��ȣ�Դϴ�.
//'(' �Ǵ� ')' �θ� �̷���� ���ڿ� s�� �־����� ��, 
// ���ڿ� s�� �ùٸ� ��ȣ�̸� true�� return �ϰ�, �ùٸ��� ���� ��ȣ�̸� false�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
//
//���ѻ���
//���ڿ� s�� ���� : 100, 000 ������ �ڿ���
//���ڿ� s�� '(' �Ǵ� ')' �θ� �̷���� �ֽ��ϴ�.

#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> st;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if(!st.empty())
                st.pop();
            else
            {
                answer = false;
                break;
            }
        }
    }

    if (!st.empty())
        answer = false;

    cout << answer << endl;

    return answer;
}

int main()
{
    string s = ")()(";
    solution(s);
	return 0;
}