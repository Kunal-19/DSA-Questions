#include<stdc++.h>
using namespace std;

//METHOD 1
void reverse(int arr[],int n){    
    for(int i=0; i<n/2; i++){
        swap(arr[i],arr[n-1-i]);
    }
}

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverse(arr,6);
    display(arr,6);
    return 0;
}