//REVERSE AN ARRAY;
 
 //[2,3,4,5] => [5,4,3,2]

 #include <iostream>
 using namespace std;
 
 void reverse(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
 }

 void printArray(int array[], int size){
    for (int i =0; i<size; i++){
        cout<<array[i]<<" "<<endl;
    }

    cout<<endl;
 }

 int main(){
    int array[5] = {1,2,3,4,5};
    int arr[6] = {2,3,4,5,6,7};
    reverse(array, 5);
    reverse(arr, 6);
    printArray(arr , 6);
    printArray(array, 5);
 }

//  int main(){
//     int array[10] = {1,2,3,5,6,7,8,9,10}  ;
//     for(int i = 9; i>=0; i--){
//         cout << array[i] << endl;
//     }
//     return 0;
//  }