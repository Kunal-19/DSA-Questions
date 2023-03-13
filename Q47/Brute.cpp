#include<stdc++.h>
using namespace std;


int main(){
    string s = "Hello";
    int i = 0, n = s.length();
    while(i<(n/2)){
        swap(s[i],s[n-1-i]);
        i++;
    }
    cout << s<< endl;
    return 0;
}