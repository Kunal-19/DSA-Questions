#include<stdc++.h>
using namespace std;

/*
T.C : O(nlogn)
S.C : O(1)
*/

int getMajorityElement(int arr[],int n){
    sort(arr,arr+n);
    int i=0, j=0,cnt=0;

    while(j<n){
        if(arr[i]==arr[j]){
            cnt++;
            j++;
        }
        else{
            if(cnt > n/2) return arr[i];
            else{
                i = j;
                cnt = 0;
            }
        }
    }

    if(cnt > n/2) return arr[i];
    return -1;
}

int main(){
    int arr[] = {3,1,3,3,2};
    cout << getMajorityElement(arr,5)<< endl;
    return 0;
}