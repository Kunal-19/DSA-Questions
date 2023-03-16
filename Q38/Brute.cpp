#include<stdc++.h>
using namespace std;

/*
T.C: O(M*N)
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
        for(int j=0; j<v[0].size(); j++){
            if(v[i][j]==target) return true;
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

    cout << findElement(v,5)<<endl;
    cout << findElement(v,51)<<endl;

    return 0;
}