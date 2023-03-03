#include<stdc++.h>
using namespace std;


int main(){
    int n = 5;
    int arr[] = {1,2,3,-2,5};
    int sum = 0, maxi = INT_MIN;
    for(int i=0; i<n ;i++){
        sum+=arr[i];
        maxi = max(maxi,sum);
        if(sum<0) sum = 0;
    }

    cout << maxi << endl;
    return 0;
}