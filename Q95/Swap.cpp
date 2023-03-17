#include<stdc++.h>
using namespace std;


int main(){
    int nums[5] = {3,4,1,5,1};
    int n= sizeof(nums)/sizeof(int);
    int *ans = new int[2];

    for(int i=0; i<n; i++){
        int index = nums[i] - 1;
        if(nums[index]!=index+1){
            swap(nums[index],nums[i]);
            i--;
        }
        else if(i!=index && nums[i] == nums[index]){
            ans[0] = nums[i];
            break;
        }
    }
    int sum = 0;
    for(int i = 0; i<n ;i++){
        sum+=nums[i];
    }

    int sum1ton = n*(n+1)/2;
    ans[1] = sum1ton + ans[0] - sum;
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}