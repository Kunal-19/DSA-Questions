#include<stdc++.h>
using namespace std;

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
    cout <<endl;
}

void tranpose(vector<vector<int> >&v,int n){
    
    for(int i=0; i<n;i++){
        for(int j=i; j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
}

void shift(vector<vector<int> >&v,int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n/2; j++){
            swap(v[i][j],v[i][n-1-j]);
        }
    }
}

int main(){
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    vector<vector<int> > v;
    input(v,n);
    display(v);

    tranpose(v,n);
    shift(v,n);
    display(v);

    return 0;
}