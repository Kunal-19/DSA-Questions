#include<stdc++.h>
using namespace std;

class Solution
{
    private:
    int help(int arr[],int n,vector<int>&dp){
        //Base Case
        if(n<1) return 0;
        if(n==1) return arr[n-1];
        
        if(dp[n]!=-1) return dp[n];
        
        //Picking
        int pick = arr[n-1] + help(arr,n-2,dp);
        
        //Not Picking
        int notPick = help(arr,n-1,dp);
        
        return dp[n] = max(pick,notPick);
    }
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        vector<int> dp(n+1,-1);
        dp[0] = 0;
        dp[1] = arr[0];
        return help(arr,n,dp);
    }
};

int main(){
    int arr[6] = {5,10,100,10,5,5};
    Solution S;
    cout << S.FindMaxSum(arr,6) << endl;
    return 0;
}