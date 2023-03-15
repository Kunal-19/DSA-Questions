#include<stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int cnt = 0;
    while(n){
        cnt++;
        n = n>>1;
    }

    cout << cnt << endl;
    return 0;
}