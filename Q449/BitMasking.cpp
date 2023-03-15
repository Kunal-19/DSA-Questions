#include<stdc++.h>
using namespace std;

class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
            vector<string> ans;
            int size = s.length();
            int n = pow(2,size);
            
            for(int i=1; i<n; i++){
                string res = "";
                int j = i,index = 0;
                
                while(j){
                    if(j&1) res+= s[index];
                    j = j>>1;
                    index++;
                }
                ans.push_back(res);
            }
            
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