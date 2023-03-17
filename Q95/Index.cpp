#include<stdc++.h>
using namespace std;


int main(){
    int nums[5] = {1,2,3,4,4};
    int n= sizeof(nums)/sizeof(int);
     int *ans = new int[2];
        int twice = -1;
        long long sum = 0;
        
        for(int i=0; i<n;i++){
            sum+=nums[i];
        }
        
        for(int i=0; i<n ;i++){
            if(nums[abs(nums[i])-1]>0) nums[abs(nums[i])-1]*=-1;
            else{
                twice = abs(nums[i]);
                break;
            }
        }
        
        ans[0] = twice;
        
        long long total = (1LL)*n*(n+1)/2;
        sum-=twice;
        
        ans[1] = (total-sum);
    cout << twice << " " << ans[1] << endl;
    return 0;
}