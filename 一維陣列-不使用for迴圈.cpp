/*
依序輸入一位同學考試六個科目成績，輸出成績總和。
※注意除了預設以外不使用for迴圈！

系統輸入：六個int型態的數值
(請使用預設變數Score做計算)

結果輸出：1個int型態的數值



輸入範例：60 70 80 85 90 100

輸出範例：485
*/

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[6];
    for (int i = 0; i < 6; i++)
        cin >> Score[i];

    int i=0,tot=0;
    while(i<6)
    {
        tot+=Score[i];
        i++;
    }
    cout << tot;
}
