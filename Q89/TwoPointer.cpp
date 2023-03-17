#include<stdc++.h>
using namespace std;

/*
T.C: O(n)
S.C: O(1)
*/

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int s = 0, e = n-1;
    while(s<=e){
        if(arr[s]==x && arr[e]==x){
            ans.push_back(s);
            ans.push_back(e);
            return ans;
        }
        else if(arr[s]==x && arr[e]!=x){
            e--;
        }
        else if(arr[s]!=x && arr[e]==x){
            s++;
        }
        else{
            s++;
            e--;
        }
    }
    ans.push_back(-1);
    ans.push_back(-1);
    return ans;
}

int main(){
    int arr[] =  { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int x= 5;
    int n = sizeof(arr)/sizeof(int);
    vector<int> ans = find(arr,n,x);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}