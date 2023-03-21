#include<stdc++.h>
#include<unordered_map>
using namespace std;

/*
T.C : O(n)
S.C : O(n)
*/

int getMajorityElement(int arr[],int n){
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]]++;
        if(mp[arr[i]]>n/2) return arr[i];
    }
    return -1;
}

int main(){
    int arr[] = {3,1,3,3,2};
    cout << getMajorityElement(arr,5)<< endl;
    return 0;
}