#include<stdc++.h>
using namespace std;

/*
T.C : O(n)
S.C : O(m+n)
*/

int main(){
    int m = 5, n = 3;
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[3] = {1,2,3};

    vector<int> ans;
        
        for(int i=0; i<n; i++){
            ans.push_back(arr1[i]);
        }
        
        for(int j = 0; j<m; j++){
            ans.push_back(arr2[j]);
        }
        
        sort(ans.begin(),ans.end());
        
        int i=0,cnt = 0; n = ans.size();
        while(i<n-1){
            if(ans[i]!=ans[i+1]) cnt++;
            i++;
        }
        
        cout << cnt << endl;
    return 0;
}