#include<stdc++.h>
using namespace std;

/*
T.C : O(nlogn)
S.C : O(1)
*/

void sortColors(int *arr,int n){
    sort(arr,arr+n);
}

void display(int *arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10] = {0,1,2, 2,1,0,0,2,1,1};
    int size = sizeof(arr)/sizeof(int);
    sortColors(arr,size);
    display(arr,size);
    return 0;
}