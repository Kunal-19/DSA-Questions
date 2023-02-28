#include<stdc++.h>
using namespace std;

/*
T.C = O(nlong(maxi - mini))
S.C = O(1)
*/

int count(int arr[],int mid,int n){
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(arr[i]<=mid) cnt++;
    }
    return cnt;
}

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout << "Enter the value of K to find Kth largest term: ";
    cin>> k;

    int maxi = INT_MIN, mini = INT_MAX;

    for(int i=0; i<n; i++){
        if(mini>arr[i]) mini = arr[i];
        if(maxi<arr[i]) maxi = arr[i];
    }

    int s = mini, e =maxi, mid = s +(e-s)/2;

    while (s<e)
    {
        if(count(arr,mid,n) == k) break;
        else if(count(arr,mid,n)>k) e = mid-1;
        else s = mid+1;
        
        mid = s + (e-s)/2;
    }
    
    cout << "K-th Minimum : " << mid << endl;
    return 0;
}