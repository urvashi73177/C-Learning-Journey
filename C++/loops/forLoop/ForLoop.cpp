// ForLoop - Syntax:

/*

for (initialization expr; test expr; update expr)
 {
     body of the loop
     statements we want to execute
 }

*/

#include <iostream>
using namespace std;


void forloopExperiment(){
    for(int a =0 , b=1 ; a>=0, b>=0; a-- , b--){
        cout<<a << "yay "<< b << endl;
    }
}

void myArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i : arr)
    {
        cout << i << " ";
    }

    cout<<"\n";
}

void myNumber()
{
    for (int i = 0; i <= 5; i++)
    {
        cout << "Namaste C++"
             << "\n";
    }
    cout <<"\n";
}

void sumOfNums(){
    for(int i=0 , j=10, k=20 ; (i+j+k)<100 ; j++, k--, i+=k){
        cout << "\n" << i << " "<< j << " "<< k << "\n";
    }
    cout << "\n";
}

void declaredVar(){
    int i = 99;
    for(int i =0; i<5 ; i++){
        cout << i << "\t";
    }
}

int main()
{
    myNumber();
    myArray();
    sumOfNums();
    declaredVar();
    forloopExperiment();
    return 0;
}
