#include<stdc++.h>
using namespace std;

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[3] = {1,2,3};
    int n = sizeof(arr)/sizeof(int);

    if(n==1) display(arr,n);
    if(n==2){
        reverse(arr,arr+n);
        display(arr,n);
    }
    
    int i = n-2, j= n-1;
    int index;

    while(i>=0){
        if(arr[i]<arr[j]){
            index = i;
            break;
        }
        i--;
        j--;
    }

    i = n-1;
    while(i>index){
        if(arr[index]<arr[i]){
            swap(arr[index],arr[i]);
            break;
        }
        i--;
    }

    reverse(arr+index+1,arr+n);
    display(arr,n);
    return 0;
}