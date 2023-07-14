#include <iostream>
using namespace std;

//Problem 1 - Substract the Product and sum of digits of an integer
//Input = 234
//Output = 15
//Explanation: product = 2*4*3 = 25 and sum = 9
// 24-9 = 15
void problem1(){
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n!=0){
        int digit = n%10;
        sum = sum + digit;
        product = product * digit;

        n= n/10;    
    }

    int answer = product - sum;
    cout << answer << endl;
    
}

int main(){
    problem1();
    return 0;
}