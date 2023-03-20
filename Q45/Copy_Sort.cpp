#include<stdc++.h>
using namespace std;

/*
T.C : O(n^2logn^2)
S.C : O(n^2)
*/

int kthSmallest(int matrix[][3], int k) {
    vector<int> temp;

    for(int i=0; i<3;i++){
        for(int j=0; j<3; j++){
            temp.push_back(matrix[i][j]);
        }
    }

    sort(temp.begin(),temp.end());
    return temp[k-1];
}


int main(){
    int matrix[][3] = {{1,5,9},{10,11,13},{12,13,15}};
    cout << kthSmallest(matrix,8) << endl;
    return 0;
}