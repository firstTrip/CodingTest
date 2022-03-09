#include <string>
#include <vector>
#include <bitset>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) 
{
    vector<string> answer;
    vector<string> str1;
    vector<string> str2;

    for (int i = 0; i < arr1.size(); i++)
    {
        str1.push_back(bitset<16>(arr1[i]).to_string().substr(16 - n));
        str2.push_back(bitset<16>(arr2[i]).to_string().substr(16 - n));
    }

    for (int i = 0; i < str1.size(); i++)
    {
        string tmp = "";
        for (int j = 0; j < str1.size(); j++)
        {
            if (str1[i][j] == '1' || str2[i][j] == '1')
            {
                tmp += '#';
            }
            else
                tmp += ' ';
        }
        answer.push_back(tmp);
        //cout << "tmp is " << tmp << '\n';


        //cout <<"str is " << i << str1[i] << '\n';
        //cout << "str is " << i << str2[i] << '\n';
    }
    return answer;
}

int main()
{
    vector<int> arr1 = {9,20,28,18,11};
    vector<int> arr2 = {30,1,21,17,28};

    solution(5, arr1, arr2);
    return 0;
}