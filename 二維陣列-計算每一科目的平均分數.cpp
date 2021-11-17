/*
每位同學成績如下表，請計算每一科目的平均分數並輸出。

範例：
姓名 國文 英文 數學 自然 社會
李小明 65 85 78 75 69
王小華 66 55 52 92 47
劉小花 75 99 63 73 86
吳小惠 77 88 99 91 100

答案應為：70.75 81.75 73 82.75 75.5



系統輸入：20個int型態的數值（4*5的矩陣）

結果輸出：5個float型態的數值
*/

#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Score[4][5];
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 5; j++)
            cin >> Score[i][j];

        float arr[5]={};
        int n=0;
    for (int i = 0; i < 5; i++)
    {
        int tot=0;
        for (int j = 0; j < 4; j++)
        {
            tot+=Score[j][i];
        }
        arr[n]+=tot;
        n++;
    }

    for(int i=0;i<5;i++)
    {
        cout << arr[i]/4.0<< " ";
    }
}
