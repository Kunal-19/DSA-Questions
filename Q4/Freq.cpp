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
    int cnt[3] = {0};

    for(int i=0; i<size;i++){
        if(arr[i]==0) cnt[0]++;
        else if(arr[i]==1) cnt[1]++;
        else cnt[2]++;
    }

    for(int i=0; i<size; i++){
        if(i<cnt[0]) arr[i] = 0;
        else if(i<cnt[0]+cnt[1]) arr[i] = 1;
        else arr[i] = 2;
    }

    display(arr,size);
    return 0;
}