#include<stdc++.h>
using namespace std;

/*
T.C : O(n^2)
S.C : O(1)
*/

int getMajorityElement(int arr[],int n){
    for(int i=0; i<n/2; i++){
        int cnt = 1;
        for(int j=i+1; j<n; j++){
            if(arr[j]==arr[i])cnt++;
        }
        if(cnt>(n/2)) return arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {3,1,3,3,2};
    cout << getMajorityElement(arr,5)<< endl;
    return 0;
}