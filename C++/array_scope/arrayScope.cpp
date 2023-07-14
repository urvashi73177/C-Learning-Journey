#include <iostream>
using namespace std;

/*
In the case of variable, you can change the value from any other function but incase of array you can change. This happens becasue in case of array a copy of the ariable get produced in the function but in case ogf array you send the address of the element you want to change to other fuynction by passing params and arguments. That's wy you able to updtae the value of the element of an array but not of the varible

When you pass a variable to a function, a copy of the variable's value is typically created and used within the function. Any modifications made to that copy won't affect the original variable outside the function. This is because variables are passed by value, meaning the function operates on a separate copy.

On the other hand, when you pass an array to a function, you're actually passing a reference to the array. The reference represents the memory address where the array is stored. This allows the function to access and modify the original array directly, rather than working with a copy.

So, when you modify an element of an array inside a function, the change is reflected in the original array because you're accessing and updating the actual memory location where the array is stored. In contrast, when you modify a variable inside a function, you're only modifying a copy, which doesn't affect the original variable outside the function.



*/

// Updating the value of array
void update(int arr[], int size)
{
    // Updating the array
    arr[0] = 120;
    cout << "Inside the function" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    cout << "Going back to main funciton" << endl;
}

void myAge(int age)
{
    age = 20;
    cout << "Inside the function" << endl;
    cout << age << endl;
    cout << "Going back to main fucntion";
}

int main()
{
    int arr[3] = {1, 2, 3};
    update(arr, 3);

    // Printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    int age = 10;
    myAge(age);
    cout << "In main function"
         << " " << age;

    return 0;
}
