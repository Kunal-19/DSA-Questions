#include<stdc++.h>
using namespace std;

/*
T.C : O(N*logn)
S.C : O(1)
*/

int main(){
    int arr[] = {3, 9, 12, 16, 20};
    int k;
    cout << "Enter the value of K : ";
    cin>> k;
    int n = sizeof(arr)/sizeof(int);

    sort(arr,arr+n);
    int mini,maxi;
    int diff = arr[n-1] - arr[0];

    for(int i=1; i<n; i++){
        if(arr[i]-k < 0) continue;

        maxi = max(maxi,arr[i]-k);
        mini = min(mini,arr[i-1]+k);

        diff = min(diff, maxi-mini);
    }

    cout << diff << endl;
    return 0;
}