#include<stdc++.h>
using namespace std;

/*
T.C : O(logn)
S.C : O(1)
*/

int getMedian(int arr1[],int arr2[],int n1,int n2){
    if(n1>n2) return getMedian(arr2,arr1,n2,n1);

    int s= 0, e = n1 , mid = s + (e-s)/2;

    while(s<=e){
        int cut1 = mid;
        int cut2 = (n1+n2+1)/2 - mid;

        int l1 = cut1==0 ? INT_MIN : arr1[cut1-1];
        int l2 = cut2==0 ? INT_MIN : arr2[cut2-1];

        int r1 = cut1==n1 ? INT_MAX : arr1[cut1];
        int r2 = cut2==n2 ? INT_MAX : arr2[cut2];
        
        if(l1<=r2 && l2<=r1){
            if((n1+n2)&1) return max(l1,l2);
            return (max(l1,l2) + min(r1,r2))/2;
        }
        else if(l1>r2) e = mid-1;
        else s = mid + 1;

        mid = s + (e-s)/2;
    }

    return 0;
}

int main(){
    int arr1[] = {1,12,26,38};
    int arr2[] = {2,13,17,30,45};
    cout << getMedian(arr1,arr2,4,5);

    return 0;
}