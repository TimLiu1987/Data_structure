// 請寫一個int Priority(char op)副程式，可以輸入運算子op並回傳優先度。再寫一個void InfixToPostfix(char infix[])副程式，可以輸入中序運算式，然後使用Priority(char op)比較每個運算子的優先度，透過堆疊的方式轉成後序運算式，並輸出結果。

// 輸入範例：
// 3+4*(7-5)/2

// 輸出範例：
// 3475-*2/+


// 系統輸入：char型態的陣列（中序式）

// 結果輸出：char型態的陣列（後序式）


#include <stdio.h>
#include <iostream>
using namespace std;

int Priority(char op)
{
    switch (op) {
        case '+':
        case '-':
            return 1;
            break;
        case '*':
        case '/':
            return 2;
            break;
        default:
            return 0;
            break;
    }
}

void InfixToPostfix(char infix[])
{
    char Stack[20]={};
    int i,top;
    for(i=0,top=0;infix[i]!='\0';i++){
        switch (infix[i])
        {
            case '(':
                top++;
                Stack[top] = infix[i];
                break;
            case '+':
            case '-':
            case '*':
            case '/':
                while (Priority(Stack[top])>=Priority(infix[i]))
                {
                    cout << Stack[top];
                    top--;
                }
                Stack[++top]=infix[i];
                break;
            case ')':
                while (Stack[top]!='(')
                {
                    cout << Stack[top];
                    top--;
                }
                top--;
                break;
            default:
                cout << infix[i];
                break;
        }
    }
    for(;top>0;)
    {
        cout << Stack[top--];
    }
}

int main(int argc, char* argv[]) {
    char itemset[20];
    scanf("%s", itemset);
    InfixToPostfix(itemset);
}
