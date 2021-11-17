/*
請使用stringstream，在一串字串中，擷取數字的部分作輸出
不可更改main函式內容


範例輸入1：
23,24,25

範例輸出1：
23
24
25


範例輸入2：
120,88,243,294,289,214,155,228,274,292,116

範例輸出2：
120
88
243
294
289
214
155
228
274
292
116
*/

#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
stringstream ss;

vector<int> parseInts(string str) {
    vector<int> bruh;
    ss << str;
    int n;
    char trash;
    while(!ss.eof())
    {
        ss >> n;
        bruh.push_back(n);
        ss >> trash;
    }

    return bruh;
}

int main(int argc, char* argv[]) {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
