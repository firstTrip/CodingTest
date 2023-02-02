#include<vector>
#include <iostream>
#include <cmath>
using namespace std;

int solution(int x, int y, int r, int d, vector<vector<int> > target)
{
    int answer = -1;
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다. 

    float a = atan2(x, y);

    cout << a << endl;

    return answer;
}

int main()
{
    const double Rad_to_deg = 57.2957951;

    float a = atan2(-1, 2) ;
    float temp1, temp2;
    cout <<  a * Rad_to_deg << endl;

    temp1 = a * Rad_to_deg + (-60);
    temp2 = a * Rad_to_deg + (60);



    return 0;
}