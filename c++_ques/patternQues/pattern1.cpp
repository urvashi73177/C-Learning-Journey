#include <iostream>
using namespace std;

/*
How to approach pattern questions-
step1- How may row are there?
step2 -How many colums are there in each row?
step3 - Find the relation between rows and columns
step 4 - Find

*/

void pattern(){
    int n;
    cin >> n ;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << "*";
            j = j+1;
        }
        cout<<"\n";
        i=i+1;
    }
}

int main(){
    pattern();
    return 0;
}