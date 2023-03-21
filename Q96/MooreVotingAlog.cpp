#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(1)
*/

int getMajorityElement(int arr[],int n){
    int element,cnt = 0;
    for(int i=0; i<n; i++){
        if(cnt==0) element = arr[i];

        if(element == arr[i]) cnt++;
        else cnt--;
    }

    return element;
}

int main(){
    int arr[] = {3,1,3,3,2};
    cout << getMajorityElement(arr,5)<< endl;
    return 0;
}