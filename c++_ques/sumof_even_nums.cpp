#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 0;
    int sum = 0;
    while(i<n){
        
        i = i+2;
        cout << i << " ";

        sum = sum + i;
        
    }

    cout << "The sum of"<<" "<<i<<"is"<<" "<<sum;
   
}