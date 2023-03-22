#include<stdc++.h>
using namespace std;
/*
T.C : O(On^3)*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int k) {
        int n= arr.size();
        vector<vector<int> >ans;

        if(n<4) return ans;
        sort(arr.begin(),arr.end());
        
        
        for(int i=0; i<n-3; i++){

            for(int j=i+1; j<n; j++){
                int s = j + 1, e = n-1;
                long int req = long(k) - arr[i] - arr[j];
                
                while(s<e){
                    long int sum = arr[s] + arr[e];
                    
                    if(sum==req){
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[s]);
                        v.push_back(arr[e]);
                        ans.push_back(v);
                        
                        int num3 = arr[s];
                        while(s<n && arr[s]==num3) s++;
                        
                        int num4 = arr[e];
                        while(e>j && arr[e]==num4) e--;
                    } 
                    else if(sum>req) e--;
                    else s++;
                }
                
                int num2 = arr[j];
                while(j<n && arr[j]==num2) j++;
                j--;
            }
            int num1 = arr[i];
            while(i<n && arr[i]==num1) i++;
            i--;
        }
        
        return ans;
    }
};

int main(){
    
    return 0;
}