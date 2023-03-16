#include<stdc++.h>
using namespace std;

/*
T.C: O(M*logN)
S.C: O(1)
*/

void input(vector<vector<int> >&v,int n){
    int cnt = 1;
    for(int i = 0; i<n; i++){
        vector<int>temp;
        for(int j=0; j<n; j++){
            temp.push_back(cnt++);
        }
        v.push_back(temp);
    }
}

void display(vector<vector<int> > v){
    for(int i=0; i<v.size(); i++){
        for(int j=0;j<v.size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

bool findElement(vector<vector<int> > &v,int target){

    for(int i=0; i<v.size(); i++){
        int s = 0, e = v[0].size()-1, mid = s + (e-s)/2;

        while(s<=e){
            if(v[i][mid] == target) return true;
            else if(v[i][mid]>target) e = mid-1;
            else s = mid+1;

            mid = s + (e-s)/2;
        }
    }
    return false;
}

int main(){
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    vector<vector<int> > v;
    input(v,n);
    display(v);

    cout << findElement(v,4)<<endl;
    cout << findElement(v,51)<<endl;

    return 0;
}