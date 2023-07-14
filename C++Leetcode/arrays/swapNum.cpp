#include <iostream>
using namespace std;


void reverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
    for (int i=0; i<size; i++){
        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
    }

    
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
        
    }
    
}

int main(){
    //Swap the numbers ({123}=>{321})
    // int size;
    // cin >> size;
    int num[6]={4,6,7,8,9,0}; 
    reverseArray(num, 6);
    printArray(num, 6);
    return 0;
}