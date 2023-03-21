#include <iostream>
#include <algorithm>
using namespace std;

int n, result = 0;
char map[51][51];

void check()
{
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = 0; j < n; j++)
        {
            if (map[i][j] == map[i][j + 1])
            {
                count++;
            }
            else
            {
                if (result < count)
                    result = count;
                count = 1;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        int count = 1;
        for (int i = 0; i < n; i++)
        {
            if (map[i][j] == map[i + 1][j])
            {
                count++;
            }
            else
            {
                if (result < count)
                    result = count;
                count = 1;
            }
        }
    }
}

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> map[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            swap(map[i][j], map[i][j + 1]);
            check();
            swap(map[i][j], map[i][j + 1]);
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            swap(map[i][j], map[i + 1][j]);
            check();
            swap(map[i][j], map[i + 1][j]);
        }
    }

    cout << result << endl;

    return 0;
}