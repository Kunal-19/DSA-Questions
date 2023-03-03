#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(1)
*/

/*
T.C : O(n)
S.C : O(1)
*/

void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    
    for(int i=n-2; i>=0; i--){
        arr[i+1] = arr[i];
    }
    
    arr[0] = temp;
}

void display(int *arr,int n){
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int N = 5;
    int A[] = {1, 2, 3, 4, 5};
    rotate(A,N);
    display(A,N);
    return 0;
}