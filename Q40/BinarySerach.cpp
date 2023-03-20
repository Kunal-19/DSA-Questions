#include<stdc++.h>
using namespace std;

/*
T.C : O(n*logn)
S.C : O(1)
*/


class Solution{
private:
    int lowerIndex(vector<vector<int> > arr, int row, int m){
        int s = 0, e = m-1, mid = s + (e-s)/2;
        int ans = -1;
        
        while(s<=e){
            if(arr[row][mid]==1){
                ans = mid;
                e = mid - 1;
            }
            else if(arr[row][mid]==0) s = mid + 1;
            
            mid = s + (e-s)/2;
        }
        return ans;
    }
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	    int mini = INT_MAX, ans = -1;
	    
	    for(int i=0; i<n; i++){
	        
	        int low = lowerIndex(arr,i,m);
	        
	        if(low!=-1 && low< mini){
	            mini = low;
	            ans = i;
	        }
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