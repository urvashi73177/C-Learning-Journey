#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << "Printing array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    // Print the ekements of an array
    int third[3] = {1, 2, 3};
    printArray(third, 3);

    // Initialize all the elements as 1 of an array
    int zero[20] = {0};
    printArray(zero, 20);
    int sizeofzero = sizeof(zero) / sizeof(int);
    cout << "size of zeero is"
         << " " << sizeofzero << endl;

    return 0;
}