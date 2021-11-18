/*
有一個二維陣列如下，請使用「以列為主」的方式，將二維陣列轉成一維陣列。

※main函式不可修改

範例輸入：
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15

範例輸出：
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15



系統輸入：15個int型態的數值（3*5的陣列）

結果輸出：15個int型態的數值

*/


#include <iostream>
using namespace std;
int main(int argc, char* argv[]) {
    int Array_Data[3][5];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
            cin >> Array_Data[i][j];

    int Array_Ans[15];

    // ~ write here ~ //

    int num=0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 5; j++)
        {
            Array_Ans[num]=Array_Data[i][j];
            num++;
        }

    for (int i = 0; i < 15; i++) {
        cout << Array_Ans[i] << " ";
    }
}
