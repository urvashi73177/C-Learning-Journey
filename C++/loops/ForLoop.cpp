// ForLoop - Syntax:

/*

for (initialization expr; test expr; update expr)
 {
     body of the loop
     statements we want to execute
 }

*/

#include <iostream>
using namespace std;

void myArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << " ";
    }
}

void myNumber()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "Namaste C++"
             << "\n";
    }
}

void sumOfNums(){
    for(int i=0 , j=10, k=20 ; (i+j+k)<100 ; j++, k--, i+=k){
        cout << "\n" << i << " "<< j << " "<< k << "\n";
    }
}

int main()
{
    myNumber();
    myArray();
    sumOfNums();
    return 0;
}
