#include<stdc++.h>
using namespace std;

/*
T.C = O(n)
S.C = O(1)
*/


int findDuplicate(int *nums,int n){
    
    int sum = n*(n-1)/2, total = 0;
    for(int i=0; i<n ;i++){
        total+= nums[i];
    }
    
    return total- sum;
}

int main(){
    int nums[5] = {3,1,4,4,2};
    int n = sizeof(nums)/sizeof(int);

    cout << findDuplicate(nums,n);
    return 0;
}