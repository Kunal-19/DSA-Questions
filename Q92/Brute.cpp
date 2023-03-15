#include<stdc++.h>
using namespace std;

/*
T.C = O(n)
S.C = O(1)
*/

int sqrt(int n){
    for(int i=0; i<n; i++){
        if(i*i == n) return i;
        else if(i*i >n) return i-1;
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