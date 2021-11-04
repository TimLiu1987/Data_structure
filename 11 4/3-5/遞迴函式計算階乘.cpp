#include <stdio.h>
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}

int main(int argc, char* argv[]) {
    // write here //
    int n;
    cin >> n;
    cout << fact(n) << endl;
}
