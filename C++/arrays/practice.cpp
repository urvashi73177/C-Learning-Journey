/*
=> We can store similar kind of data type in an array
=> The data is stored in contagious memory
[0,1,2,3,4,5,....n] 
=> We can access a particualr data through index
[1,2,3] if we want to access "2" we can access it by index number 1.


Syntax of Array Declaration
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];

why do we need arrays?
To store many values in a single array value


The C arrays are static in nature, i.e., they are allocated memory at the compile time.

*/

#include<iostream>
using namespace std;


//Example 1 - Accessing elements
void AccessingElements(){
    int number[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    cout << "Pirnting the array"<< endl;
    for(int i = 0; i<n; i++){
        cout<<number[i]<<endl;
    }
}



//Example 2 - Initialization of all value with 1
void initialize(){
    int n = 1000;
    int value = 1;
    int arr[n];

    for(int i=0; i<=n; i++){
        arr[i] = value;
        cout << value<<" ";
    }

    cout<< "\n";


}
int main(){
  
    initialize();
    AccessingElements();
   
    return 0;
}