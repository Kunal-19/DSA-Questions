#include<stdc++.h>
using namespace std;

/*
T.C : O(n1 + n2)
S.C : O(n1 + n2)
*/

int getMedian(int arr1[],int arr2[],int n1,int n2){

    vector<int> temp;
    int i=0, j=0;

    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j])temp.push_back(arr1[i++]);
        else temp.push_back(arr2[j++]);
    }

    while(i<n1){
        temp.push_back(arr1[i++]);
    }

    while(j<n2){
        temp.push_back(arr2[j++]);
    }

    int n = n1 + n2;
    if((n1+n2)&1) return temp[n>>1];
    return (temp[n/2-1] + temp[n/2])/2;
}

int main(){
    int arr1[] = {1,12,26,38};
    int arr2[] = {2,13,17,30,45};
    cout << getMedian(arr1,arr2,4,5);

    return 0;
}