#include<stdc++.h>
using namespace std;

void reverse(string s,string &ans,int i){
    if(s[i]=='\0') return ;

    reverse(s,ans,i+1);
    ans.push_back(s[i]);
}
int main(){
    string s = "Hello";
    string rev = "";
    reverse(s,rev,0);
    cout << rev << endl;
    return 0;
}