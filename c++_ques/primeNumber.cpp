#include <iostream>
using namespace std;

void prime_number()
{
    int i;
    cin >> i;
    int n = 2;
    while (n < i)
    {
        if (i % n == 0)
        {
            cout << "Not a prime number for"
                 << " " << n << "\n";
        }
        else
        {
            cout << "It is a prime number for"
                 << " " << n << "\n";
        }
        n = n + 1;
    }
}

int main()
{
    prime_number();
    // return 0;
}