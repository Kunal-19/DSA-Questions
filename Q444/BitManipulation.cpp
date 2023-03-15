#include<stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n&(n-1)) cout << "NOT DIVISIBLE BY 2!!" << endl;
    else cout << "DIVISIBLE BY 2!!" << endl;
    return 0;
}