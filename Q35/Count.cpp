#include<stdc++.h>
using namespace std;

/*
T.C : O(n1 + n2)
S.C : O(1)
*/

int getMedian(int arr1[],int arr2[],int n1,int n2){
    int cnt = 0;
    int n = n1 + n2;
    int i=0, j=0;
    int prev,curr;

    while(cnt < n/2+1 && i<n1 && j<n2){
        prev = curr;
        if(arr1[i] <= arr2[j]) curr = arr1[i++];
        else curr = arr2[j++];

        cnt++;
    }

    while(cnt < n/2 + 1 && i<n1){
        prev = curr;
        curr = arr1[i++];
    }

    while(cnt < n/2 + 1 && j<n2){
        prev = curr;
        curr = arr2[j++];
    }

    cout << prev << " " << curr << endl; 
    if((n1+n2)&1) return curr;
    return (prev + curr)/2;
}

int main(){
    int arr1[] = {1,12,15,26,38};
    int arr2[] = {2,13,17,30,45};
    cout << getMedian(arr1,arr2,5,5);

    return 0;
}