/*
請寫一個int Fib(int n)副程式，使用遞迴的方式計算第n個費式數（Fibonacci number），並回傳計算結果。

提示：費式數列={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144...}，第n個費式數=第n-1個費式數+第n-2個費式數

輸入範例：
6

輸出範例：
8


系統輸入：1個int型態的數值

結果輸出：1個int型態的數值
*/


#include <stdio.h>
#include <iostream>
using namespace std;

int Fib(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2){
        return 1;
    }
    else
    {
        return Fib(n-1)+Fib(n-2);
    }
}

int main(int argc, char* argv[]) {
    // write here //
    int n;
    cin >> n;
    cout << Fib(n) << endl;
}
