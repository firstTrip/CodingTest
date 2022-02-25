#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <stack>


using namespace std;

string solution(vector<int> numbers) {
    string answer = "";

    vector<int> arr[10];
    stack<int> st;


    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < numbers.size(); i++)
    {

        int r = numbers[i]; // 값 저장

        while (r <10) // 해당 숫자의 가장 앞자리 숫자 체크 
        {
            r = r % 10;
            cout << "r is " << r << '\n';




        }

        arr[0].push_back(numbers[i]);

    }

    for (int i = 0; i <10; i++)
    {
        for (int j = 0; arr[i].size(); j++)
        {
            if (arr[i].empty())
                break;

            cout << "arr" << i << " is " << arr[i][j] << '\n';
        }
    }
    

    return answer;
}

int main()
{
    vector<int> nums = {61,10,21,91,99};

    solution(nums);

    return 0;
}