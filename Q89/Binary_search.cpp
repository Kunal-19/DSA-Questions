#include<stdc++.h>
using namespace std;

/*
T.C: O(logn)
S.C: O(1)
*/

int lowerIndex(int arr[],int n,int x){
    int s = 0, e = n-1, mid = s + (e-s)/2;
    int index  = -1;
    while(s<=e){
        if(arr[mid]==x) {
            index = mid;
            e = mid-1;
        }
        else if(arr[mid]>x) e = mid-1;
        else s = mid+1;
        mid = s + (e-s)/2;
    }
    return index;
}

int upperIndex(int arr[],int n,int x){
    int s = 0, e = n-1, mid = s + (e-s)/2;
    int index  = -1;
    while(s<=e){
        if(arr[mid]==x) {
            index = mid;
            s = mid+1;
        }
        else if(arr[mid]>x) e = mid-1;
        else s = mid+1;
        mid = s + (e-s)/2;
    }
    return index;
}

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    int low = lowerIndex(arr,n,x);
    int up = upperIndex(arr,n,x);
    
    ans.push_back(low);
    ans.push_back(up);
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