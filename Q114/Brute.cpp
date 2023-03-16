#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int inputTrees(vector<int>&trees,int n){
    int maxi = 0;
    for(int i=0; i<n;i++){
        int temp;
        cin >> temp;
        trees.push_back(temp);
        maxi = max(maxi,temp);
    }
    return maxi;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> trees;
    int maxi = inputTrees(trees,n);
    int ans = INT_MAX;

    for(int i=maxi;i>=0; i--){
        int sum = 0;

        for(int j=0; j<n;j++){
            if(trees[j]>i) sum+=(trees[j] - i);
        }
        if(sum>=m){
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}