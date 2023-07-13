#include<iostream>
using namespace std;

void calculator(){

    int a;
    cout<<"Enter the value of a"<<" ";
    cin >>a;

    int b;
    cout<<"Enter the value of b"<<" \n";
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform"<<" ";
    cin>>op;

    switch(op){
        case '+' : cout<<(a+b)<<'\n';
        break;

        case '-' : cout<<(a-b)<<'\n';
        break;

        case '*' : cout<<(a*b)<<'\n';
        break;

        case '/' : cout<<(a/b)<<'\n';
        break;

        default: cout<<"Invalid operation";
    break;
    }
    
}

void homework(){
    //Given amount
    int amount = 1330;
   int currency;
   cin>>currency;

    switch(currency){
        case 100: cout<<(amount/100)<<" ";
        break;
        case 20: cout<<(amount/20)<<" ";
        break;
        default: cout<<"UNvalid"<<" ";
        break;
    }
}

int main(){
    // calculator();
    homework();
    return 0;
}