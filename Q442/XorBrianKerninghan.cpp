#include<stdc++.h>
using namespace std;

int numSwap(int a,int b){
    int cnt = 0;
    int sum = a^b;
    
    while(sum){
        cnt++;
        sum = sum&(sum-1);
    }
    return cnt;
}

int main(){
    int a,b;
    cin >> a>> b;
    cout << numSwap(a,b) << endl;
    return 0;
}