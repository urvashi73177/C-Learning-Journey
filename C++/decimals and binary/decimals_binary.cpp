/*
1st approach - 

How to convert decimaml in binary value of any number-
1) Let n = 10
2) Divide n by 2
3) Store the remainder in a variable - the
4) Repeat the above step until n!=0
5) reverse the answer.

for example - n = 7
quotient - 3
remainder - 1

quoteint - 1
remainder = 1

quotient - 0
Remainder = 1

Therefore, answer = 111 
2^0 + 2^1 + 2^2 = 7

*/

/*
2nd approach

Let n = 5

*/

//The & (bitwise AND) in C or C++ takes two numbers as operands and does AND on every bit of two numbers. The result of AND is 1 only if both bits are 1.

#include <iostream>
using namespace std;

    int main(){
        int n = 10;
        int reversedRemainder = 0;
        //Divide n by 2 until n!=0;
        while(n!=0){
            int remainder = n%2;
            n = n/2;
            reversedRemainder = reversedRemainder*10+remainder;
           
        }

        //Print the reversed remainder
        while(reversedRemainder!=0){
            int remainder = reversedRemainder % 10;
        std::cout << remainder << " ";
        reversedRemainder = reversedRemainder / 10;
        }

        

    return 0;
    }