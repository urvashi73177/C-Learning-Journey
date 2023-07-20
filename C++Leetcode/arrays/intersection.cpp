// Find the intersection - The common elecment among two arrays. The arrays are soreted in non-decreasing order.

// If no intersection present - return -1

// Two arrays are given a and b, size of a  = n and size of b = n

#include <iostream>
using namespace std;

// This is not an Optimised solution.
//  void Intersection(int arr1[], int arr2[], int size)
//  {
//      int commonNum;
//      for (int i = 0; i < size; i++)
//      {
//          int element = arr1[i];

//         for (int j = 0; j < size; j++)
//         {
//             if (element == arr2[j])
//             {
//                 cout << element;
//             }
//         }
//     }
// }

// Otimised Solution -
void Intersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0;
    int j = 0;
    int ans;
    while (i < m && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans = arr1[i];
            cout << "The answer is"
                 << " " << ans << endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
        }
    }
}
int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[4] = {2, 4, 8, 9};
    Intersection(arr1, arr2, 6, 4);
    return 0;
}