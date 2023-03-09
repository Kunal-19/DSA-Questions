#include<stdc++.h>
using namespace std;

void display(int *arr,int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr1, int *arr2,int m ,int n){

    int i = m-1, j= n-1, k=m+n-1;

    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k--] = arr1[i--];
        }
        else{
            arr1[k--] = arr2[j--];
        }
    }

    while(i>=0){
        arr1[k--] = arr1[i--]; 
    }

    while(j>=0) arr1[k--] = arr2[j--];
}

int main(){
    int m = 3, n = 3;
    int arr1[6] = {1,4,7,0,0,0};
    int arr2[3] = {2,5,6};

    merge(arr1,arr2,m,n);
    display(arr1,n+m);
    return 0;
}