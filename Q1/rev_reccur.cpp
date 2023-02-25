#include<stdc++.h>
using namespace std;

void reverse_reccur(int arr[],int s,int e){
    if(s>e) return ;

    swap(arr[s],arr[e]);
    reverse_reccur(arr,s+1,e-1);
}

void display(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverse_reccur(arr,0,5);
    display(arr,6);
    return 0;
}