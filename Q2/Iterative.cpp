#include<stdc++.h>
using namespace std;

/*
T.C = O(n)
S.C = O(1)
*/

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    int maxi = INT_MIN, mini = INT_MAX;

    for(int i=0; i<n; i++){
        if(mini>arr[i]) mini = arr[i];
        if(maxi<arr[i]) maxi = arr[i];
    }

    cout<< "Minimum = " << mini<< endl;
    cout<< "Maximum = " << maxi<< endl;
    return 0;
}