//https://programmers.co.kr/learn/courses/30/lessons/12953


#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int gcd(int a, int b) // �ִ� ����� ���ϴ� ��� �ܿ��
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a,int b) // �ּ� ����� ���ϴ� ���
{
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    return a *b/gcd(a,b);
}

int solution(vector<int> arr) { // �ΰ��� �ּ� ����� ������Ŀ� �� ���� �߰� ��Ų��.
    int answer = 0;
    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
        st.push(arr[i]);


    while (st.size() != 1) // st �� ���� �ϳ� ������ ��� �� ���� n ���� �ּ� ������� �ϼ��ȴ�
    {
        int a, b;
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();

        st.push(lcm(a,b)); // �μ��� �ּ� ����� �߰� 
    }

    cout << "st.top() is " << st.top() << endl;

    return answer = st.top();
}


int main()
{
    vector<int> arr = { 1,2,3 };

    solution(arr);

    return 0;
}