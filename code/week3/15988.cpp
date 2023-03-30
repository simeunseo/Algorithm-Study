#include <iostream>

using namespace std;

long long MOD = 1000000009;
long long tc, n;
long long dp[1000005];

long long go(long long i)
{
    long long &ret = dp[i];
    if (ret != -1)
        return ret;
    if (i == 1)
        return ret = 1;
    if (i == 2)
        return ret = 2;
    if (i == 3)
        return ret = 4;
    return ret = (go(i - 1) + go(i - 2) + go(i - 3)) % MOD;
}

int main()
{
    memset(dp, -1, sizeof(dp));
    go(1000000);
    cin >> tc;
    while (tc--)
    {
        cin >> n;
        cout << go(n) << '\n';
    }
    return 0;
}