#include<stdc++.h>
using namespace std;

vector<int> getUniqueElements(int arr[],int n){
    map<int,int> mp;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    vector<int> ans;

    for(auto it : mp){
        if(it.second == 1) ans.push_back(it.first);
    }

    return ans;
}

int main(){
    int arr[] = {36,50,24,56,36,24,42,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans = getUniqueElements(arr,n);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}