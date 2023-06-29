/* 
1) //#include <iostream> is a header file library that lets us work with input and output objects, such as cout (used in line 5). Header files add functionality to C++ programs.

2)//using namespace std means that we can use names for objects and variables from the standard library.

3)//int main(). This is called a function. Any code inside its curly brackets {} will be executed.

4)//cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text. In our example it will output "Namaste C++".

5)//return 0 ends the main function.

'\n' -> gives a extra new line as enter gives

 */


#include<iostream> 
using namespace std;

int main(){ 
    cout << "Namaste C++"<<'\n'; 
    return 0;
}