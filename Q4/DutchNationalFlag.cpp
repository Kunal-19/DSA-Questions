#include<stdc++.h>
using namespace std;

/*
T.C : O(2*n)
S.c : O(1)
*/


void display(int *arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[10] = {0,1,2, 2,1,0,0,2,1,1};
    int size = sizeof(arr)/sizeof(int);

    int i=0, j=0, k = size-1;

    while(j<=k){
        if(arr[j]==0){
            swap(arr[i++],arr[j++]);
        }
        else if(arr[j]==1) j++;
        else{
            swap(arr[j],arr[k--]);
        }
    } 

    display(arr,size);
    return 0;
}