#include<stdc++.h>
using namespace std;

/*
T.C: O(log(m*n))
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

bool findElement(vector<vector<int> > &matrix,int target){

    int row = matrix.size(), col = matrix[0].size();
        int s = 0, e = row*col - 1, mid = s + (e-s)/2;

        while(s<=e){
            int i = mid/col;
            int j = mid%col;

            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target) s = mid + 1;
            else e = mid -1;

            mid = s + (e-s)/2;
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