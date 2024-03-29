#include<stdc++.h>
#include<unordered_map>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int> mp;
    
    for(int i=0; i<n; i++){
        mp[a1[i]]++;
    }
    
    for(int i=0; i<m; i++){
        if(!mp[a2[i]]) return "No";
        else mp[a2[i]]--;
    }
    return "Yes";
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int brr[] = {1,2,4};
    cout << isSubset(arr,brr,6,3) << endl;
    return 0;
}