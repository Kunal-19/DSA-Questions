#include<stdc++.h>
using namespace std;


int main(){
    int n;
    cin>> n;
    int prev1 = 1, prev2 = 2;

    while(prev1<=n && prev2<=n){
        if(prev1==n || prev2 == n){
            cout << "Divisible by 2!!";
            return 0;
        }
        prev1 = prev2;
        prev2*=2;
    }
    cout << "NOT DIVISIBLE BY 2!!"<< endl;
    return 0;
}