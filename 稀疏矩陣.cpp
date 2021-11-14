// 請寫一個void compress_process(int a[][a_columns], int b[][b_columns])的副程式，可以對矩陣a進行「稀疏矩陣轉換」，並將轉換後的結果儲存至矩陣b。再寫void compress_print(int b[][b_columns])的副程式，輸出矩陣b的結果。

// 矩陣a範例：
// 5 0 0
// 0 0 -1
// 3 0 0
// 0 9 10

// 轉換後的矩陣b：
// 4 3 5
// 0 0 5
// 1 2 -1
// 2 0 3
// 3 1 9
// 3 2 10

// 輸出範例：
// 4 3 5 0 0 5 1 2 -1 2 0 3 3 1 9 3 2 10



// 系統輸入：12個int型態的數值（4*3的矩陣）

// 結果輸出：int型態的數值（依照矩陣a決定數量）



#include <iostream>
using namespace std;

const int a_rows = 4;
const int a_columns = 3;
const int b_rows = 100;
const int b_columns = 3;

void compress_init(int a[][a_columns]) {
    for (int i = 0; i < a_rows; i++)
        for (int j = 0; j < a_columns; j++)
            cin >> a[i][j];
}

void compress_process(int a[][a_columns], int b[][b_columns]){
    int total = 0, k = 1;
    for (int i = 0; i < a_rows; i++)
    {
        for (int j = 0; j < a_columns; j++)
        {
            if (a[i][j] != 0)
            {
                total++;
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = a[i][j];
                k++;
            }
        }

    }

    b[0][0] = a_rows;
    b[0][1] = a_columns;
    b[0][2] = total;
}

void compress_print(int b[][b_columns]) {
    for (int i = 0; i <= b[0][2]; i++)
    {
        for (int j = 0; j < b_columns; j++)
        {
            cout << b[i][j] << " ";
        }
    }
}

int main(int argc, char* argv[]) {
    int A[a_rows][a_columns], B[b_rows][b_columns];
    compress_init(A);
    compress_process(A, B);
    compress_print(B);
}
