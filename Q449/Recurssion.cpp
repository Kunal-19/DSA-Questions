#include<stdc++.h>
using namespace std;

class Solution{
    private:
        void solve(string &s,vector<string>&ans,string res,int index,int n){
            if(index>=n){
                if(!res.empty()) ans.push_back(res);
                return ;
            }
            
            //Exclude
            solve(s,ans,res,index+1,n);
            
            //Include
            res+=s[index];
            solve(s,ans,res,index+1,n);
        }
	public:
		vector<string> AllPossibleStrings(string s){
            vector<string> ans;
            string output= "";
            int n = s.length();
            solve(s,ans,output,0,n);
            sort(ans.begin(),ans.end());
            return ans;
		}
};

void print(vector<string>s){
    int n = s.size();
    for(int i=0; i<n; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}
int main(){
    string s = "abc";
    Solution ans;
    vector<string> res = ans.AllPossibleStrings(s);
    print(res);
    return 0;
}