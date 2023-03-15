#include<stdc++.h>
using namespace std;

/*
T.C = O(logn)
S.C = O(1)
*/

int sqrt(int n){
    if(n == 0) return 0;
    else if(n==1) return 1;

    int s = 0, e = n-1, mid = s + (e-s)/2;

    while(s<=e){
        if(mid*mid <= n && (mid+1)*(mid+1)>n) return mid;
        else if(mid*mid < n) s = mid;
        else e = mid;

        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << sqrt(n) << endl;
    return 0;
}