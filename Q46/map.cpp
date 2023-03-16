#include<stdc++.h>
#include<unordered_map>
using namespace std;

void display(int arr[][5]){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print(vector<int>ans){
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[][5] = {{1,2,7,4,8},{3,7,8,5,1},{8,7,7,3,1},{8,1,2,7,9}};
    display(arr);
    vector<int> ans;

    unordered_map<int,int> mp; 
    
    for(int i=0; i<5; i++){
        mp[arr[0][i]] = 0;
    }

    for(int i=1; i<4;i++){
        for(int j=0; j<5;j++){
            if(mp.find(arr[i][j])!= mp.end() && mp[arr[i][j]] == i-1){
                mp[arr[i][j]] = i;
            }
        }
    }
    
    for(auto it:mp){
        if(it.second == 3)
        ans.push_back(it.first);
    }
    print(ans);
    return 0;
}