#include<stdc++.h>
using namespace std;

int minJumps(int arr[], int n){
    int i = 0,cnt = 0;
    
    while(i<n){
        if(arr[i]==0) return -1;
        
        int j = i+1;
        int maxi = 0 , maxIndex = 0;
        int m = j+arr[i];
        
        while(j< m){
            if(j+arr[j]>=maxi){
                maxi = j+arr[j];
                maxIndex = j;
            }
            j++;
            if(j==n) return cnt+1;
        }
        
        i+= (maxIndex-i);
        cnt++;
    }
    return cnt;
}
    
int main(){
    int N = 11;
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    cout << minJumps(arr,N) << endl;
    return 0;
}