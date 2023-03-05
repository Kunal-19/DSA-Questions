#include<stdc++.h>
using namespace std;

/*
T.C = O(nlogn)
S.C = O(1)
*/


int findDuplicate(int *nums,int n){
    sort(nums,nums+n);

    int i=0;
    while(i<n-1){
        if(nums[i]==nums[i+1]) return nums[i];
        i++;
    }
    return -1;
}

int main(){
    int nums[5] = {1,3,4,2,2};
    int n = sizeof(nums)/sizeof(int);

    cout << findDuplicate(nums,n);
    return 0;
}