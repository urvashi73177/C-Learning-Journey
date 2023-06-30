/*
For Loops - Used where we know the number of terations we need to perform. 

While loops -  are used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test conditions.

A while loop is used when you want to repeat a block of code until a certain condition is met. The condition is evaluated before executing the loop, and the loop continues as long as the condition is true.

                                    

                                    Syntax:
initialization expression;
while (test_expression)
{
   statements
 
  update_expression;
}

*/

// The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body, i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. 

#include <iostream>
using namespace std;

int main(){
    //Initialization
    int i = 1;

    //Test expression
    while(i<6){
        cout << "While loop testing" << "\n";

        //Update
        i++;
    }

     return 0;
}