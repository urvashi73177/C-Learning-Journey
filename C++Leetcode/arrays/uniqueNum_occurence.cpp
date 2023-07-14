//Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

/*

Example 1:
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

Example 2:
Input: arr = [1,2]
Output: false

Example 3:
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

*/

#include <iostream>
using namespace std;

bool UniqueElem(int arr[], int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];
        if((ans^arr[i])==0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int ans = 0;
    int arr[5] = {1,5,3,1,5};
    bool uniqueElement = UniqueElem(arr, 5);
    if(!uniqueElement){
        cout<<"There is no unique element!"<<endl;
    }
    else{
        cout<<"The unique element is"<<" "<<endl;
    }
    return 0;
}