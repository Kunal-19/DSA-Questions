#include<stdc++.h>
#include<unordered_set>
using namespace std;

/*
T.C: O(N)
S.c: O(m+n)
*/


int main(){
    unordered_set<int> mp;
    int m = 5, n = 3;
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[3] = {1,2,3};

    for(int i=0; i < m; i++){
        mp.insert(arr1[i]);
    }
    for(int i=0; i < n; i++){
        mp.insert(arr2[i]);
    }

    cout << mp.size();
    return 0;
}