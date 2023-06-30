//Write a program to convert the user input from celcius to farenheit.

#include <iostream>
using namespace std;


void celcius_to_farenheit(){
    int input;
    cin >> input;
    int farenheit = input*9/5+32;
    cout << input<<" " << "Celcius=" <<" "<<farenheit<<" "<<"fahrenheit" ;
}


int main(){
    celcius_to_farenheit();
    return 0;
}