#include<stdc++.h>
using namespace std;

/*
T.C : N^2 logn
S.C : O(k)
*/

int kthSmallest(int matrix[][3], int k) {
    priority_queue<int> q;

    for(int i=0; i<3; i++){
        for(int j=0; j<3;j ++){
            if(k){
                q.push(matrix[i][j]);
                k--;
            }
            else if(matrix[i][j]<q.top()){
                q.pop();
                q.push(matrix[i][j]);
                            }
        }
    }
    return q.top();
}


int main(){
    int matrix[][3] = {{1,5,9},{10,11,13},{12,13,15}};
    cout << kthSmallest(matrix,8) << endl;
    return 0;
}