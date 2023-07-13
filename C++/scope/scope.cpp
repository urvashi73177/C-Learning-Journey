#include <iostream>
using namespace std;

void scope(){
    int a = 3;
    cout << a<<"\n";
    //output - 3
}

void scope2(){
    int a = 5;  
    if(true){
        cout<<a<<"\n";
    }
    //output - 5. Therefore we can access the variabele in if loop which is initialised in the main scope of the funciton.
}

void scope3(){
    int a = 5;
    if(true){
        int b = 10;
        cout << b;
    }
    cout << "This is outside the scope"<<b<<endl;
//This throws an error that - use of undeclared indentifier 'b'. This is because the varible b can be only acceseed in the if loop not in the main loop. To use it in the main scope, we will need to initialise it again in the main scope of the function.
    
}

int main(){
    scope();
    scope2();
    scope3();
    return 0;
}