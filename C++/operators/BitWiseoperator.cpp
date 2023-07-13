#include <iostream>
using namespace std;


void not_operator(){
int a = 4;
    cout << ~a<< "\n ";
    //output = -5
}

void XOR(){
    int b = 4;
    int c = 6;
    cout << (b^c);
}

int main(){
    not_operator();
    XOR();
    return 0;
}

