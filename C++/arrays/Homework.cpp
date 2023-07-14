#include <iostream>
using namespace std;

//Give the sum of an array the user inputs.


void Homework(int arr[], int size){
    int sum = 0;
    for (int i = 0; i<size; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout<<"The sum is"<<" "<< sum<<endl;

    
}

int main(){
    int size;
    cout<<"Enter the size of an array"<<endl;
    cin >> size;
    int num[size]; //Initalised an ARRAY num[10] = {....}
    Homework(num, size);
    return 0;
}