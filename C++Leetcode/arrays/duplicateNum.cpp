/*Find the duplicates of a number
eg - {1,2,3,4,3,5...}
*/

#include <iostream>
using namespace std;



int main(){
    int arr[5] = {1,2,4,5,2}
    int ans = 0;
        for(int i = 0; i<arr.size(); i++){
            ans = ans ^ arr[i];
        }

        for(int i = 1; i<arr.size(); i++){
            ans = ans ^ arr[i];
        }
        cout<<ans<<endl;
    return 0;
}
