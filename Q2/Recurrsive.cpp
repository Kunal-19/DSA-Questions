#include<stdc++.h>
using namespace std;

/*
T.C = O(n)
S.C = O(n)
*/

void findMaxMin(int arr[],int &maxi, int &mini,int &i,int n){
    if(i>=n) return ;

    if(arr[i]>maxi) maxi = arr[i];
    if(arr[i]<mini) mini = arr[i];
    i++;
    findMaxMin(arr,maxi,mini,i,n);
}

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    int maxi = INT_MIN, mini = INT_MAX,i=0;

    findMaxMin(arr,maxi,mini,i,n);

    cout<< "Minimum = " << mini<< endl;
    cout<< "Maximum = " << maxi<< endl;
    return 0;
}