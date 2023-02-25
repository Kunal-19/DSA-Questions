#include<stdc++.h>
using namespace std;

/*
T.C = O(n)
S.C = O(1)
*/

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    stack<int> s;

    for(int i=0; i<n; i++){
        s.push(arr[i]);
    }

    for(int i=0; i<n; i++){
        arr[i] = s.top();
        s.pop();
    }

    display(arr,n);
    return 0;
}