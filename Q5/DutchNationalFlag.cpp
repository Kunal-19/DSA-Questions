#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(1)
*/


void display(int *arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[9] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size = sizeof(arr)/sizeof(int);

    int i=0, j=0, k=size-1;

    while(j<k){
        if(arr[j]<0) swap(arr[i++],arr[j++]);
        else if(arr[j]==0) j++;
        else swap(arr[j],arr[k--]);
    }
    display(arr,size);
    return 0;
}