//https://programmers.co.kr/learn/courses/30/lessons/49993

#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool isIt() {


    return false;

    return true;
}

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    int idx = 0;

    for (int n = 0; n < skill.length() ; n++)
    {
        for (int i = 0; i < skill_trees.size(); i++)
        {
            for (int j = 0; j < skill_trees[i].length(); j++)
            {
                if (skill[i] == skill_trees[i][j])
                {
                    idx = j;
                    
                    // 앞으로 남은 배열중에 B 말고 이상의 값이 있는지 확인 하기 없으면 answer ++
                    for (int x = idx; x < skill_trees[i].length(); x++)
                    {

                    }
                }
            
         

            }

        }
    }
    
    return answer;
}

int main()
{
    string skill;
    vector<string> skill_trees;

    skill_trees = { "BACDE","CBADF","AECB","BDA" };

    skill = "CBD";

    
    solution(skill, skill_trees);

    return 0;
}