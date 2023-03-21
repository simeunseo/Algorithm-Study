#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int result = 1000000000;
    vector<pair<int, int>> v;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int s, b;
        cin >> s >> b;
        v.push_back({s, b});
    }

    for (int i = 1; i < (1 << n); i++)
    {
        int s = 1;
        int b = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j)) // j번째 재료 선택
            {
                s *= v[j].first;
                b += v[j].second;
            }
        }
        result = min(result, abs(s - b));
    }
    cout << result;
    return 0;
}