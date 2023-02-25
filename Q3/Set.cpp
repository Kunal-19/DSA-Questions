#include<stdc++.h>
using namespace std;

/*
T.C = O(nlong)
S.C = O(n)
*/

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout << "Enter the value of K to find Kth largest term: ";
    cin>> k;

    set<int> s;
    for(int i=0; i<n;i++){
        s.insert(arr[i]);
    }
    int i = 0;
    for(auto it:s){
        i++;
        if(i==k){
            cout << it << endl;
            break;
        }
    }
    return 0;
}