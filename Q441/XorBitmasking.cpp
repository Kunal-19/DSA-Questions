#include<stdc++.h>
using namespace std;

vector<int> getUniqueElements(int arr[],int n){
    int Xor = 0;
    for(int i=0; i<n ;i++){
        Xor^=arr[i];
    }

    int mask = Xor & ~(Xor-1);
    int x= 0, y = 0;

    for(int i=0; i<n ;i++){
        if(mask&arr[i]) x ^= arr[i];
        else y ^=arr[i];
    }

    vector<int> ans;
    ans.push_back(x);
    ans.push_back(y);
    if(x<y){
        return ans;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int arr[] = {36,50,24,56,36,24,42,50};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> ans = getUniqueElements(arr,n);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}