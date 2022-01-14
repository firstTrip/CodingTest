#include <string>
#include <vector>
#include <iostream>
#include <bitset>

using namespace std;

string setBit(int n)
{
    string temp = "";

    temp = bitset<12>(n).to_string();// 2진수 변환

    for (int i = 0; i < temp.length(); i++)
    {
        if (temp[i] == '1') // 2 진수 변환시에 앞에 생성되는 의미없는 수를 삭제 
        {
            temp = temp.substr(i);
            break;
        }

    }

    return temp;
}

int solution(int n) 
{
    int answer = 0;
    string temp = "";
    string temp2 = "";
    int cnt =0;
    int cnt2 = 0;
    int newNum = 0;

    temp = setBit(n);

    cout << temp << endl;

    for (int n = 0; n < temp.length(); n++)
    {
        if (temp[n] == '1')
            cnt++;
    }

    cout << "cnt is " << cnt << endl;

    for (int i = 1; i < n; i++)
    {
        newNum = i + n;

        temp2 = setBit(newNum);

        cout << temp2 << endl;

        for (int j = 0; j < temp2.length(); j++)
        {
            if (temp2[j] == '1')
                cnt2++;

            cout << "cnt2 is " << cnt2 << endl;

        }

        if (cnt2 == cnt)
        {
            cout << newNum << endl;
            return answer;
            
        }
        else
            cnt2 = 0;
    }


    return answer;
}


int main()
{

    solution(15);
    return 0;
}