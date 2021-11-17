/*
有N筆成績資料，請計算其平均成績，並判斷是否及格。

1 <= N <= 50



系統輸入：N個int型態的數值

結果輸出："及格" 或 "不及格"



輸入範例：

2

60 70

輸出範例：及格
*/


#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    cin >> n;
    int grade,tot=0;
    for(int i=0;i<n;i++)
    {
        cin >> grade;
        tot+=grade;
    }

    if((tot/n)>=60)
    {
        cout << "pass";
    }
    else
    {
        cout << "failed";
    }

    return 0;
}
