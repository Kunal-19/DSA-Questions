#include<stdc++.h>
using namespace std;

/*
T.C : O(n^2)
S.C : O(1)
*/

int main(){
    int n = 4;
    int arr[] = {-1,-2,-3,-4};

    int maxi = INT_MIN;
    for(int i=0; i<n ;i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            sum+=arr[j];
            maxi = max(maxi,sum);
        }
    }

    cout << maxi << endl;
    return 0;
}