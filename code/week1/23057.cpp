#include <iostream>
#include <set>
#include <string.h>
using namespace std;

int card[21];
int N;
set<int> s;

void func(int idx, int sum)
{
    s.insert(sum);

    if (idx == N)
        return;

    func(idx + 1, sum + card[idx]);
    func(idx + 1, sum);
}

int main()
{
    int M, result;

    // init & input
    M = result = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &card[i]);
        M += card[i];
    }

    // backtracking
    func(0, 0);

    // result
    result = M - s.size() + 1;
    printf("%d\n", result);
    return (0);
}
