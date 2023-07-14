#include <iostream>
using namespace std;


void efficient_prime_number(){
    int n;
    cin >> n;
    bool is_prime = 1;
    for (int i=2 ; i<n ; i++){
        if (n%i == 0){
            is_prime = 0;
            break;
        }
    }

    if (is_prime == 0){
        cout << "Not a prime number"<<endl;
    }else {
        cout << "Is a prime number"<<endl;
    }
}

void prime_number()
{
    int i;
    cin >> i;
    int n = 2;
    while (n < i)
    {
        if (i % n == 0)
        {
            cout << "Not a prime number for"
                 << " " << n << "\n";
        }
        else
        {
            cout << "It is a prime number for"
                 << " " << n << "\n";
        }
        n = n + 1;
    }
}

int main()
{
    // prime_number();
    efficient_prime_number();
    // return 0;
}