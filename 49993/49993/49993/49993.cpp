//https://programmers.co.kr/learn/courses/30/lessons/49993
// 문자열의 시작이 스킬의 기초 스킬이 아닌경우 다 넘기기 
// 그 이후 검사 
// it find 이후 그 배열의 숫자 저장 후  C 보다 숫자가 작으면 탈락 바르게 정렬이 되어있는경우에 통과 answer ++
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(string skill, vector<string> skill_trees) {

    /*
    vector<string>::iterator it;
    vector<int> idx;

  
    for (int i = 0; i < skill_trees.size(); i++)
    {
        for (int n = 0; n < skill.length(); n++)
        {

            if (find(skill_trees[i].begin(), skill_trees[i].end(), skill[n]) != skill_trees[i].end())
            {

                cout << "skill[n] 은 " << skill[n] << " 있습니당 해당 idx 는 " << find(skill_trees[i].begin(), skill_trees[i].end(), skill[n]) - skill_trees[i].begin() << endl;
                idx.push_back(find(skill_trees[i].begin(), skill_trees[i].end(), skill[n]) - skill_trees[i].begin());
            }

        }

        for (int x = 0; x < idx.size()-1; x++)
        {
            if (idx[x] > idx[x + 1])
            {
                break;

            }
            else
            {
                if (idx[x + 1] > idx[x + 2])
                    break;
                else
                    answer++;
            }
                
        }

        idx.clear();
    }
 


    cout << "answer is " << answer << endl;
    return answer;
    */
    int answer = 0;
    for (int i = 0; i < skill_trees.size(); i++) {
        vector<char> compare; //최대 비교 변수를 저장 

        for (int k = 0; k < skill_trees[i].size(); k++) {
            for (int j = 0; j < skill.size(); j++) {
                if (skill[j] == skill_trees[i][k]) {
                    char tmp = skill[j]; // 스킬과 스킬 트리 사이의 곂치는 스킬들을 tmp 에 저장
                    compare.push_back(tmp); // compare 에 순서대로 저장
                }
            }
        }
        bool check = true;;// check 를 true 로 초기화
        for (int c = 0; c < compare.size(); c++) {
            if (skill[c] != compare[c]) {// skill 과 compare 의 서순이 같은지 확인 
                check = false; // 틀린 경우가 있을경우 check 를 false 로 변경
            }
        }
        if (check)answer++; // 다 같을경우 answer ++
    }
    cout << "answer is " << answer << endl;
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