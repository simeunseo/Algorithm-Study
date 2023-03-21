#include <iostream>
#include <set>
#include <string.h>
using namespace std;

int n = 0;
int s = 0;
int result = 0;
int a[21];

void back_tracking(int idx, int sum)
{
    if (idx == n)
    {
        if (sum == s)
            result++;
        return;
    }
    back_tracking(idx + 1, sum + a[idx]); // 현재 원소를 합하지 않는 경우
    back_tracking(idx + 1, sum);          // 현재 원소를 합하는 경우
}

int main()
{
    scanf("%d %d", &n, &s);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    back_tracking(0, 0);
    if (s == 0)
        result--;
    printf("%d\n", result);
    return (0);
}