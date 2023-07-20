/*
Approach - 
step1 - Find the middle value of the array (0+n-1/2)
step2 - Compare it with the key
step3 - If it is equalas to the key return true else follow step 4
step4 - If it is not equal to the key - Move to the right or left direction and find the middle value and compare it with the key

example - arraty = [3,5,9,13,27] and key = 13
=>The middle value of the array is - 0+4/2 = 2. Hence the middle value is = 9.

=> Now 9 != 13

=> Comparing the middle value with key - 13>9
Hence we will move to the right direction as
[3,5,9,13,27]

=>In right direction we have - [13,27]
index of 13 = 3
index of 27 = 4

=>Finding the middle value
3+4/2 = 3

=> The middle value is 13.
    
Now 13==13 hence return true and the index. 

*/

#include <iostream>
using namespace std;

int binarySearch(int array[], int size, int key){
    int start = 0;
    int end = size-1;
    //1- Finding the middle value.
    int mid_val = (start + end)/2;
    while(start<=end){
        if(key==array[mid_val]){
            return mid_val;
        }
        if(key > array[mid_val]){
           start =  mid_val+1;
        }
        else{
            start = mid_val-1;
        }

        mid_val = (start + end)/2;

    }
    return -1;

}

int main(){
    int array[5] = {3,5,9,13,27};
    int key = 13;
    int index = binarySearch(array, 5 , key);
    cout<<"Index of 13 is"<<" "<<index<<endl;
    return 0;
}