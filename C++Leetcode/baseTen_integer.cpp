// Complement of Base 10 Integer


//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.



#include<iostream>
using namespace std;

// void baseTen_Integer(int n){
//         int reversedRemainder = 0;
//         while(n!=0){
//             int remainder = n%2;
//             n = n/2;
//             reversedRemainder = (reversedRemainder*10)+remainder;
//         }

//         while(reversedRemainder!=0){
//             int remainder = reversedRemainder%10;
//             cout << remainder << " ";
//             reversedRemainder = reversedRemainder/10;
           


//         }
        
// }

void baseTen_Integer(int n){
    int m = n;
    int mask = 0;
    while(m!=0){
        mask = (mask << 1)|1;
        m=m>>1;
    }

    int ans = (~n)&mask;
    cout<<ans<<" "; 
}

int main(){
    baseTen_Integer(5);
    return 0;
}