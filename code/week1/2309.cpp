#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int array[9];
    int sum = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> array[i];
        sum += array[i];
    }
    sort(array, array + 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j != i)
            {
                if ((sum - array[i] - array[j]) == 100)
                {
                    for (int k = 0; k < 9; k++)
                    {
                        if (k != i && k != j)
                        {
                            cout << array[k] << endl;
                        }
                    }
                    return 0;
                }
            }
        }
    }
}