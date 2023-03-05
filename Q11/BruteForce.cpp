#include<stdc++.h>
using namespace std;

/*
T.C = O(n^2)
S.C = O(1)
*/

int findDuplicate(int *nums, int n){

    for(int i=0; i<n-1 ;i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]==nums[j]) return nums[i];
        }
    }
    return -1;
}

int main(){
    int nums[5] = {1,3,4,4,2};
    int n = sizeof(nums)/sizeof(int);

    cout << findDuplicate(nums,n);
    return 0;
}