// PAIR SUM -
/*
[1,2,3,4,5]
S = 5
Fiind me the pair whose sum is equals to S.
*/

#include <iostream>
using namespace std;

void pairSum(int array[], int size, int Sum)
{
    int pair;
    int i = 0;
    while (i <= size)
    {
        if (array[i] + array[i + 1] == Sum)
        {
            i++;
            cout << i << " " << i + 1 << " ";
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int Sum = 5;
    pairSum(array, 5, Sum);
    return 0;
}