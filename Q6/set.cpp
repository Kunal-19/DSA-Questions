#include<stdc++.h>
using namespace std;


int main(){
    set<int> mp;
    int m = 5, n = 3;
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[3] = {1,2,3};

    for(int i=0; i < m; i++){
        mp.insert(arr1[i]);
    }
    for(int i=0; i < n; i++){
        mp.insert(arr2[i]);
    }

    for(auto i:mp){
        cout << i << " ";
    }
    return 0;
}