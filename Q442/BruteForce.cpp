#include<stdc++.h>
using namespace std;

int numSwap(int a,int b){
    int cnt = 0;
    while(a || b){
        if(a&1 && !(b&1)) cnt++;
        else if(b&1 && !(a&1)) cnt++;
        a= a>>1;
        b= b>>1;
    }
    return cnt;
}

int main(){
    int a,b;
    cin >> a>> b;
    cout << numSwap(a,b) << endl;
    return 0;
}