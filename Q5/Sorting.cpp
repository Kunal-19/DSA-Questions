#include<stdc++.h>
using namespace std;

/*
T.C : O(nlogn)
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

    sort(arr,arr+size);
    display(arr,size);
    return 0;
}