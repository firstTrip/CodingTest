//https://programmers.co.kr/learn/courses/30/lessons/49993
// ���ڿ��� ������ ��ų�� ���� ��ų�� �ƴѰ�� �� �ѱ�� 
// �� ���� �˻� 
// it find ���� �� �迭�� ���� ���� ��  C ���� ���ڰ� ������ Ż�� �ٸ��� ������ �Ǿ��ִ°�쿡 ��� answer ++
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

                cout << "skill[n] �� " << skill[n] << " �ֽ��ϴ� �ش� idx �� " << find(skill_trees[i].begin(), skill_trees[i].end(), skill[n]) - skill_trees[i].begin() << endl;
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
        vector<char> compare; //�ִ� �� ������ ���� 

        for (int k = 0; k < skill_trees[i].size(); k++) {
            for (int j = 0; j < skill.size(); j++) {
                if (skill[j] == skill_trees[i][k]) {
                    char tmp = skill[j]; // ��ų�� ��ų Ʈ�� ������ ��ġ�� ��ų���� tmp �� ����
                    compare.push_back(tmp); // compare �� ������� ����
                }
            }
        }
        bool check = true;;// check �� true �� �ʱ�ȭ
        for (int c = 0; c < compare.size(); c++) {
            if (skill[c] != compare[c]) {// skill �� compare �� ������ ������ Ȯ�� 
                check = false; // Ʋ�� ��찡 ������� check �� false �� ����
            }
        }
        if (check)answer++; // �� ������� answer ++
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