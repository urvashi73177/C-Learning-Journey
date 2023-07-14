// find the maximuma and minimum element from an array.

// ex - [10,30,60]
// output- max = 60 , min =10

#include <iostream>
using namespace std;

//Approach two - 
int getMaxnum(int num[], int n){
    int maxNum = INT_MIN;
    for(int i = 0; i<n; i++){
         maxNum = max(maxNum, num[i]);
    }
    // use max method isntead of if condition in approach two.
}

//aproach one - 
int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

int main()
{
    cout << "Enter the size of num"
         << " "
         << "\n";
    int size;
    cin >> size;
    int num[size];
    int i;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "The maximum number is" << getMax(num, size) << endl;
    cout << "The minimum number is" << getMin(num, size) << endl;
    // for(int i = 0; i<size; i++){
    //     cout<<num[i]<<" ";
    // }
    return 0;
}