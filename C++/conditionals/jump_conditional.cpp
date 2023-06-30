/*                          
                                    A) break
This loop control statement is used to terminate the loop. As soon as the break statement is encountered from within a loop, the loop iterations stop there, and control returns from the loop immediately to the first statement after the loop.

Syntax of break
break;
Basically, break statements are used in situations when we are not sure about the actual number of iterations for the loop or we want to terminate the loop based on some condition.
*/

#include <iostream>
using namespace std;

void findElement(int arr[], int size, int key)
{
    // loop to transverse array and search for key
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "array found at position"
                 << " " << (i + 1);
            break;
        }
    }
    cout << "\n";
}

//________________________________________________________________________

                                //B) CONTINUE

// This loop control statement is just like the break statement. The continue statement is opposite to that of the break statement, instead of terminating the loop, it forces to execute the next iteration of the loop. 

void continuee(){
    // loop from 1 to 10
    for(int i = 0; i <= 10; i++){
        // If i is equals to 6,
        // continue to next iteration
        // without printing
        if(i==6)
        continue;

        else
        //otherwise print the value of i 
        cout << i << " ";
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // array
    int n = 5;                   // number of elements in array
    int key = 3;                 // key to be searched
    int i=6;
    // calling function to find key -
    findElement(arr, n, key);
    continuee();

    return 0;
}