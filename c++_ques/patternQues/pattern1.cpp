#include <iostream>
using namespace std;

/*
How to approach pattern questions-
step1- How may row are there?
step2 -How many colums are there in each row?
step3 - Find the relation between rows and columns
step 4 - Find

*/

/*Example 1 -*/
void patternStar()
{
    int n;    // Declare a variable where the input of user will be stored
    cin >> n; // This line reads an integer value from the user using the cin object and stores it in the variable n. The user will be prompted to enter a value.
    int i = 1;
    while (i <= n)
    { // The outer while loop is executed as long as i is less than or equal to n. This loop controls the number of rows to be printed.

        int j = 1; // j is initialized to 1. It represents the current column number.

        while (j <= n)
        { // while loop is executed as long as j is less than or equal to n. This loop controls the number of asterisks (*) to be printed in each row.

            cout << "*";
            j = j + 1; // The variable j is incremented by 1 using j = j + 1; to move to the next column.
        }
        cout << "\n";
        i = i + 1; // After printing all the columns in a row, the outer loop increments the variable i by 1 using i = i + 1; to move to the next row.
    }

    cout << "\n";
}

// Example Two
void pattern_heart()
{
    int n;    // declared a variable
    cin >> n; // The user will be prompted to enter a value which will get stored in the var n

    int i = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << "❖";
            j = j + 1;
        }
        cout << "\n";
        i = i + 1;
    }

    cout << "\n";
}

// Example three
void pattern_triangle()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << "✩";
            col = col + 1;
        }
        cout << "\n";
        row = row + 1;
    }
}

// Example 4
void triangle_pattern2()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            col = col + 1;
            cout << "✿";
        }
        row = row + 1;
        cout << "\n";
    }
}

// Example 5 (Inverted half pyramid)
// Formula = n-i+1 where i=row, n=inout value
void inverted_pyramid()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = n;
        while (col >= row)
        {
            col = col - 1;
            cout << "*";
        }

        row = row + 1;
        cout << "\n";
    }
}

int main()
{
    patternStar();
    pattern_heart();
    pattern_triangle();
    triangle_pattern2();
    inverted_pyramid();
    return 0;
}