#include <vector>
#include <algorithm>


using namespace std;

bool comp(pair<double, int> a, pair<double, int> b) {
    //������ ���ؼ� ����
    if (a.first > b.first) {
        return true;
    } //������ ������ �������� ��ȣ ��
    else if (a.first == b.first) {
        if (a.second < b.second) {
            return true;
        }
        else
            return false;
    }
    else
        return false;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<double, int>> failRateVector;
    double failRate;
    double tryUser;
    double failUser;

    //������ ���ϴ� ����
    for (int i = 0; i < N; i++) {
        //�ش� �������� ���� ���ϴ� ����
        failUser = 0;
        //�ش� �������� ������ ����
        tryUser = 0;
        for (int j = 0; j < stages.size(); j++) {
            if (stages[j] >= i + 1) {
                tryUser++;
                if (stages[j] == i + 1) {
                    failUser++;
                }
            }
        }
        //0���� ������ ����ó��
        if (tryUser == 0)
            tryUser = 1;
        failRate = failUser / tryUser;
        failRateVector.push_back(make_pair(failRate, i + 1));
    }

    sort(failRateVector.begin(), failRateVector.end(), comp);
    for (int i = 0; i < N; i++) {
        answer.push_back(failRateVector[i].second);
    }
    return answer;
}

int main()
{
    vector<int> v = {2,1,2,6,2,3,3,3};

    solution(5, v);

    return 0;
}