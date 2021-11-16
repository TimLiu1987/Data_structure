// 請寫一個int Transfer(char postfix[])副程式，可以輸入後序運算式，並回傳運算結果。

// 注意：課本中此題程式碼有誤，請仔細驗證結果。

// 輸入範例：
// 3475-*2/+

// 輸出範例：
// 7


// 系統輸入：char型態的陣列（後序式）

// 結果輸出：一個int型態的數值


#include <stdio.h>
#include <iostream>
using namespace std;

int Transfer(char postfix[])
{
    int number[20],num=0;
    for(int i=0;postfix[i]!='\0';i++)
    {
        switch (postfix[i])
        {
            case '*':
            case '/':
            case '+':
            case '-':
                int n0,n1;
                n0 = number[--num];
                n1 = number[--num];
                switch (postfix[i])
                {
                    case '*':
                        n0=n1*n0;
                        break;
                    case '/':
                        n0=n1/n0;
                        break;
                    case '+':
                        n0=n1+n0;
                        break;
                    case '-':
                        n0=n1-n0;
                        break;
                }
                number[num++]=n0;
                break;
            default:
                number[num++]=postfix[i]-'0';
                break;
        }
    }

    return number[--num];
}

int main(int argc, char* argv[]) {
    char itemset[20];
    scanf("%s", itemset);
    cout<<Transfer(itemset);
}
