/*
Approach-
outer loop is for rows and inner loop is for coloumns.

1) no of lines = no of rows = no of times outer loop will run.

2) Identify for every row number, how many columns are there or types of elements in the column.

3) What do you need to print


*/

#include <iostream>
using namespace std;

void pattern_1(int n)
{

    // This loop will run n times as row<=n
    for (int row = 1; row <= n; row++)
    {

        // for every row, run the col
        // This loop will run row times as  - col<=row

        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }

        // When one row is printed, we need to print new liine
        cout << "\n";
    }
}

void pattern2()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern3()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = n; col >= row; col--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern4()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << col;
        }
        cout << "\n";
    }
}

void pattern5()
{
    int n;
    cin >> n;
    for (int row = 1; row < 2 * n; row++)
    {
        int totalColsInRow = row > n ? 2 * n - row - 1 : row;
        for (int col = 1; col <= totalColsInRow; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()
{
    pattern_1(5);
    pattern2();
    pattern3();
    pattern4();
    pattern5();
    return 0;
}