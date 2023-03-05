#include<stdc++.h>
using namespace std;

// Only Applicable when the elements are in index range

/*
T.C = O(n)
S.C = O(1)
*/


int findDuplicate(int *nums,int n){
    
    for(int i=0; i<n ;i++){
        if(nums[abs(nums[i])-1]>0) nums[abs(nums[i])-1]*=-1;
        else return abs(nums[i]);
    }
    return -1;
}


int main(){
    int nums[5] = {3,1,3,4,2};
    int n = sizeof(nums)/sizeof(int);

    cout << findDuplicate(nums,n);
    return 0;
}