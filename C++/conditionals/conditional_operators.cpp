                     // Conditional Operator in C/C++

// The conditional operator is used to add conditional code in our program. It is similar to the if-else statement. It is also known as the ternary operator as it works on three operands.

/*
Syntax of Conditional Operator

(condition) ? [true_statements] : [flase_statements];

*/

#include <iostream>
using namespace std;


void ConditionalOperator(){
    int var;
    int flag = 0;
    //using conditional operator to assign the value to a var
    var=flag==0? 25 : -25;
    cout << "Value of var when flag is 0: " << var << endl;

    //Changing the value of flag to 1 
    flag = 1;
    var = flag == 0 ? 25 : -25;
    cout <<"Value of var when flag is 1: " << var << endl;

}

int main(){
    ConditionalOperator();
    return 0;
}


