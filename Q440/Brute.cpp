#include<stdc++.h>
using namespace std;


int main(){
    int n = 31;
    int cnt = 0;
    while(n){
        if(n&1) cnt++;
        n = n>>1;
    }

    cout << cnt << endl;
    return 0;
}