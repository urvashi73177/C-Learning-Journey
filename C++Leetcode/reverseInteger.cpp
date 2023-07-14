// Reverse the integer -
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21

// Constraints:

// -231 <= x <= 231 - 1

#include <iostream>
using namespace std;

void reverseInteger(int x)
{
    int ans = 0;
    while (x != 0)
    {
        int digit = x % 10;
        if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10))
        {
            cout << " ";
        }
        ans = (ans * 10) + digit;

        x = x / 10;
    }
    cout << ans << " ";
}

int main()
{
    reverseInteger(123);
    return 0;
}
