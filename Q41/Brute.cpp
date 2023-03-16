#include<stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int> > sortedMatrix(int N, vector<vector<int> > Mat) {
        vector<int> temp;
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                temp.push_back(Mat[i][j]);
            }
        }
        
        sort(temp.begin(),temp.end());
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                Mat[i][j] = temp[N*i+j];
            }
        }
        
        return Mat;
    }
};

void display(vector<vector<int> > v){
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[0].size();j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 4;

    vector<vector<int> > v(n,vector<int>(n,0));
    v[0][0] = 10,v[0][1] = 20,v[0][2] = 30,v[0][3] = 40,v[1][0] = 15,v[1][1] = 25;
    v[1][2] = 35,v[1][3] = 45,v[2][1] = 29,v[2][2] = 27,v[2][3] = 37,v[3][3] = 48;
    v[3][0] = 32,v[3][1] = 33,v[3][2] = 39,v[3][3] = 50;

    Solution ans;
    v = ans.sortedMatrix(n,v);
    display(v);
    return 0;
}