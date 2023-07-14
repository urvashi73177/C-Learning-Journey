#include <iostream>
using namespace std;

//Question - Find the unique element in the array .
// Given an array of size n which contains all elements occurring in multiples of K, except one element which doesn't occur in multiple of K. Find that unique element.
// arr[] = {6, 2, 5, 2, 2, 6, 6}
// Output : 
// 5


void uniqueElement(int arr[], int size){
    int ans = 0;
    for (int i=0; i<size; i++){
        ans = ans^arr[i]; //XOR - 1^0 = 1, 3^3 = 0.
    }

    cout<<ans<<" ";
}
int main(){
    int arr[7] = {0,3,6,0,3,6,7};
    uniqueElement(arr, 7);
}