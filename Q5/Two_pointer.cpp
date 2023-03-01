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

    int i=0, j=size-1;
    while(i<=j){
        if(arr[i]<0) i++;
        else if(arr[i]>0 && arr[j]<0) swap(arr[i++],arr[j--]);
        else j--;
    }
    display(arr,size);
    return 0;
}