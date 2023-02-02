#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;

    for (int i = 0; i < report.size(); i++)
    {
        
    }

    return answer;
}


int main()
{
    vector<string> id_list = {"muzi", "frodo", "apeach", "neo"};
    vector<string> report = {"muzi frodo", "apeach frodo", "frodo neo", "muzi neo", "apeach muzi"};

    solution(id_list , report , 2);
	return 0;
}