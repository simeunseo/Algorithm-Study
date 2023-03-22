#include <iostream>
#include <algorithm>
#include <climits>
#include <string>
using namespace std;

int n, max_res;
string str;

int cal(int a, int b, char oper)
{
    int result = a;
    switch (oper)
    {
    case '+':
        result += b;
        break;
    case '*':
        result *= b;
        break;
    case '-':
        result -= b;
        break;
    }
    return result;
}

void func(int idx, int cur)
{
    if (idx > n - 1)
    {
        max_res = max(max_res, cur);
        return;
    }
    char oper = (idx == 0) ? '+' : str[idx - 1];

    if (idx + 2 < n)
    {
        int bracket = cal(str[idx] - '0', str[idx + 2] - '0', str[idx + 1]);
        func(idx + 4, cal(cur, bracket, oper));
    }
    func(idx + 2, cal(cur, str[idx] - '0', oper));
}

int main()
{
    cin >> n >> str;
    max_res = INT_MIN;
    func(0, 0);
    cout << max_res;
}