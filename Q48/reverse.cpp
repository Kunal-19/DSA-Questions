#include<stdc++.h>
using namespace std;


int main(){
    string s= "abbc";
    string temp = s;
    reverse(s.begin(),s.end());

    if(s==temp) cout<< "It's a palindrome!!";
    else cout << "It's not a palindrome";
    return 0;
}