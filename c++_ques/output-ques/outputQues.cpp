#include <iostream>
using namespace std;

void output1(){
    for(int i = 0; i<=5; i++){
        cout << i << " ";
        i++;
    }
}

void output2(){
    for(int i = 0; i<=5; i--){
        cout << i << " ";
        i++;
    }
}

void output3(){
    for(int i = 0;  i<=15; i+=2){
        cout << i << " ";

        if(i&1){
            continue;
        }

        i++;
    }
}

int main (){
    // output1(); //otput - 0,2,4
    // output2(); //Gets into infinite loop
    output3();

    return 0;
}