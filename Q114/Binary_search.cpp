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

bool isSufficient(int n,int m,int mid,vector<int>&trees){
    int height = 0;

    for(int i=0; i<n; i++){
        if(mid<trees[i]) height+= (trees[i]-mid);
        if(height>=m) return true;
    }

    return false;
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> trees;
    int maxi = inputTrees(trees,n);

    int ans = 0;
    int s = 1, e = maxi, mid = s + (e-s)/2;

    while(s<=e){
        if(isSufficient(n,m,mid,trees)){
            ans = mid;
            s = mid+1;
        }
        else e = mid -1;

        mid = s + (e-s)/2;
    }

    cout << ans << endl;
    return 0;
}