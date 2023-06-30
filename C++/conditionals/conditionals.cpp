// IF STATEMENT IN C++
//  It is used to decide whether a certain statement or block of statements will be executed or not i.e if a certain condition is true then a block of statements is executed otherwise not.

/*
Syntax of if Statement

if(condition)
{
   Statements to execute if
   condition is true
}
*/

#include <iostream>
using namespace std;

void IfStatement()
{
    int a = 10;
    int b = 20;
    if (a > b)
    {
        cout << "A is greater than B";
    }
    cout << "I am not inside if block";
    cout << "\n";
}

// OUTPUT :- I am not inside if block
// As the condition present in the if statement is false. So, the block below the if statement is not executed.

//________________________________________________________________

// if-else

// We can use the else statement with the if statement to execute a block of code when the condition is false. The if-else statement consists of two blocks, one for false expression and one for true expression.

/*
Syntax of if else in C/C++
if (condition)
{
    Executes this block if
    condition is true
}
else
{
    Executes this block if
    condition is false
}
*/

void if_else()
{
    int i = 20;
    if (i < 15)
    {
        cout << "i is smaller than 15 ";
    }
    else
    {
        cout << "i is larger than 15";
    }
    cout << "\n";
}

// Output: i is larger than 15

//________________________________________________________________

// Nested if else statement

// A nested if in C is an if statement that is the target of another if statement. Nested if statements mean an if statement inside another if statement. Yes, both

/*
Syntax of Nested if-else
if (condition1)
{
   Executes when condition1 is true
   if (condition2)
   {
      Executes when condition2 is true
   }
   else
   {
         Executes when condition2 is false
}
*/

void nested_IF_ELSE()
{
    int i = 10;
    if (i == 10)
    {
        if (i < 15)
            cout << "i is smaller than 15"
                 << "\n";
        if (i < 12)
            cout << "i is smaller than 12";
        else
            cout << "i is greater than 15";
    }
    cout << "\n";
}

//________________________________________________________________

                            // switch Statement in C/C++

// The switch case statement is an alternative to the if else if ladder that can be used to execute the conditional code based on the value of the variable specified in the switch statement. The switch block consists of cases to be executed based on the value of the switch variable.

/*
Syntax of switch
switch (expression) {
    case value1:
        statements;
    case value2:
        statements;
    ....
    ....
    ....
    default:
        statements;
}

Note: The switch expression should evaluate to either integer or character. It cannot evaluate any other data type.
*/

void switch_case(){
    int num = 1;
    switch(num){
        case 1: cout << "Case one is executed";
        break;
        case 2: cout << "case two is executed";
        break;
        case 3: cout << "Case three is executed";
        break;
    }
}



int main()
{
    IfStatement();
    if_else();
    nested_IF_ELSE();
    switch_case();
    return 0;
}
