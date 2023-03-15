#include<stdc++.h>
using namespace std;


int main(){
    int n = 31,cnt = 0;

    while(n){
        cnt++;
        n = n&(n-1);
    }

    cout << cnt << endl;
    return 0;
}