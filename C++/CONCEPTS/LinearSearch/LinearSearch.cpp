#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for int(i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}

int main(){
    int arr[10] = {5,4,6,7,-3,-1,-8,16,19,22};
    cout<<"Enter the key"<<"\n";
    int key;
    cin >> key;
    bool found = search(arr, 10, key);
    if(found){
        cout<<"Key is present at";
    }
    else{
        cout<<"Key is not present"<<endl;
    }
    //Whether 5 is present of not? 
    
   
    return 0;
}