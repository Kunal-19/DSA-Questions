#include<stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverse(arr,arr+6);
    display(arr,6);
    return 0;
}