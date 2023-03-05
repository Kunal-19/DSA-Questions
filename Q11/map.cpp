#include<stdc++.h>
#include<unordered_map>
using namespace std;

/*
T.C = O(n)
S.C = O(n)
*/


int findDuplicate(int *nums,int n){
    unordered_map<int,int> m;

    for(int i=0; i<n; i++){
        m[nums[i]]++;
    }

    for(auto i:m){
        if(i.second > 1) return i.first;
    }
    return -1;
}

int main(){
    int nums[5] = {1,3,4,1,2};
    int n = sizeof(nums)/sizeof(int);

    cout << findDuplicate(nums,n);
    return 0;
}