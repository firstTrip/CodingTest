//https://programmers.co.kr/learn/courses/30/lessons/12953


#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int gcd(int a, int b) // 최대 공약수 구하는 방식 외우기
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int lcm(int a,int b) // 최소 공배수 구하는 방법
{
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;

    return a *b/gcd(a,b);
}

int solution(vector<int> arr) { // 두개씩 최소 공배수 계산이후에 그 값을 추가 시킨다.
    int answer = 0;
    stack<int> st;

    for (int i = 0; i < arr.size(); i++)
        st.push(arr[i]);


    while (st.size() != 1) // st 에 값이 하나 남았을 경우 그 수가 n 개의 최소 공배수가 완성된다
    {
        int a, b;
        a = st.top();
        st.pop();
        b = st.top();
        st.pop();

        st.push(lcm(a,b)); // 두수의 최소 공배수 추가 
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