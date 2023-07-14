#include <iostream>
using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,

void fibbonaci(int n)
{
    int a = 0;
    int b = 1;
    cout << a << "\n"
         << b << "\n";
    for (int i = 1; i <= n; i++)
    {
        int totalssum = a + b;

        a = b;
        b = totalssum;

        cout << totalssum << "\n";
    }
}

int main()
{
    fibbonaci(5);
    return 0;
}