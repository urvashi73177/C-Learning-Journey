
// Q- calculates the sum of all numbers from 1 to a given input number n.
//formlua - sum = n/2 (a+l)

#include <iostream>
using namespace std;

int main()
{
    // declaring a integer
    int n;
    // This line reads an integer value from the user using the cin object and stores it in the variable n. The user will be prompted to enter a value.
    cin >> n;
    // declares and initializes an integer variable i with the value 1. It is used as a counter to iterate from 1 to n
    int i = 1;
    // declares and initializes an integer variable sum with the value 0. It will be used to accumulate the sum of numbers.
    int sum = 0;
    // This line begins a while loop that continues as long as i is less than n. The code inside the while loop will be executed repeatedly until the condition becomes false.
    while (i < n)
    {
        cout << i << " ";
        // line increments the value of i by 1 in each iteration of the while loop. It is necessary to move to the next number.
        i = i + 1;
        // This line adds the current value of i to the sum variable. It accumulates the sum of all numbers from 1 to n.
        sum = sum + i;
    }

    cout << "value of sum is" << sum << endl;

    // return 0;
}