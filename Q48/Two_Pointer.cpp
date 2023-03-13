#include<stdc++.h>
using namespace std;


int main(){
    string s = "ABB";

    int i=0, j = s.length() -1;

    while(i<j){
        if(s[i]!=s[j]){
            cout << "It's not a Palindrome!!";
            return 0;
        }
        i++;
        j--;
    }
    cout << "It's  a Palindrome!!";
    return 0;
}