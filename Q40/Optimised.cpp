#include<stdc++.h>
using namespace std;

/*
T.C : O(n + m)
S.C : O(1)
*/


class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int ans = -1;
        int i = 0, j = m-1;
        while(i<n && j>=0){
            if(arr[i][j]){
                ans = i;
                j--;
            }
            else i++;
        }
	    
	    return ans;
	}

};


void display(vector<vector<int> > &v,int n,int m){
    for(int i=0; i<n ;i++){
        for(int j=0; j<m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main(){
    int n,m;
    cout << "Enter the number of rows and columms respectively: ";
    cin >> n >> m;

    n = 4, m=4;
    vector<vector<int> > v(n,vector<int>(m,0));

    v[0][1] = v[0][2] = v[0][3] = v[1][2] = v[1][3] = v[2][0] = v[2][1] = v[2][2] = v[2][3] = 1;
    display(v,n,m);
    Solution s;
    cout << s.rowWithMax1s(v,n,m) << endl;
    return 0;
}