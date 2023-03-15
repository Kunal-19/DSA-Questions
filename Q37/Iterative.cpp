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

void spiralTraversal(vector<vector<int> > v,vector<int>&ans, int n){
    int st_row = 0, end_row = n-1, st_col = 0, end_col = n-1;

    int cnt = 0, total = n*n;
    while(cnt<total){

        //Start Row
        for(int i=st_col;i<=end_col && cnt<total; i++){
            ans.push_back(v[st_row][i]);
            cnt++;
        }
        st_row++;

        //End Col
        for(int i=st_row;i<=end_row && cnt<total; i++){
            ans.push_back(v[i][end_col]);
            cnt++;
        }
        end_col--;

        //End Row
        for(int i=end_col;i>=st_col && cnt<total; i--){
            ans.push_back(v[end_row][i]);
            cnt++;
        }
        end_row--;

        //Start Col
        for(int i=end_row;i>=st_row && cnt<total; i--){
            ans.push_back(v[i][st_col]);
            cnt++;
        }
        st_col++;
    }
}

void display(vector<int>&arr){
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void display(vector<vector<int> > v){
    for(int i=0; i<v.size(); i++){
        for(int j=0;j<v.size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cout << "Enter the size of square matrix: ";
    cin >> n;

    vector<vector<int> > v;
    input(v,n);
    display(v);

    vector<int>ans;
    spiralTraversal(v,ans,n);
    display(ans);

    return 0;
}