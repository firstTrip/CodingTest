#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> num = { 1,2,3,4,5,6,7,8,9,0 };
    vector<int> temp;

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < num.size(); i++)
    {
        for (int j = 0; j < numbers.size(); j++)
        {
            if (num[i] == numbers[j])
            {
                cout <<"erase is " << i << '\n';

                num.erase(num.begin() + i);
            }
          
        }
    }

    for (int i = 0; i < num.size(); i++)
    {
        cout << num[i] << '\n';
        answer += num[i];
    }
    cout <<"answer is "<< answer << '\n';


    /* 또다른 풀이 총합에서 numbers 의 수를 빼주기
    int answer = 45;

    for (int i = 0 ; i < numbers.size() ; i++)
        answer -= numbers[i];

    return answer;
    */
    return answer;
}

int main()
{
    vector<int> v = {5,8,4,0,6,7,9};
    solution(v);

    return 0;
}