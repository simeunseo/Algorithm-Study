#include <iostream>
#include <set>
#include <string.h>
using namespace std;

int n = 0;
int a[21];
set<int> s;

void back_tracking(int idx, int sum)
{
    s.insert(sum);
    if (idx == n)
        return;
    back_tracking(idx + 1, sum + a[idx]);
    back_tracking(idx + 1, sum);
}

int main()
{
    int m = 0;
    int count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        m += a[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
        }
    }
    back_tracking(0, 0);
}