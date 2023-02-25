#include<stdc++.h>
using namespace std;

/*
T.C = O(nlong)
S.C = O(1)
*/

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout << "Enter the value of K to find Kth largest term: ";
    cin>> k;

    if(k>n) cout << "K is out of range..";
    else{
        sort(arr,arr+n);
        cout << arr[n-k] << endl;
    }
    
    return 0;
}