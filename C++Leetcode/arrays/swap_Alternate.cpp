//SOLUTION WRITTEN COMPLETELY BY ME. YAY I AM SO HAPPY!!!!! 

#include <iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0;
    int end = start + 1;
    for (int i = 0; i<size; i++){
        while(start<=end && end<size){
            swap(arr[start], arr[end]);
            start = end + 1;
            end = end + 2;
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {4,5,7,3,9};
    reverse(arr, 5);
    printArray(arr, 5);
    return 0;
}