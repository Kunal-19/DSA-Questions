#include<stdc++.h>
using namespace std;

/*
T.C : n*logn *logn
S.C : O(1)
*/

int kthSmallest(int matrix[][3], int k) {
    //Usage of Sorted nature of matrix..
    int s = matrix[0][0] , e = matrix[2][2] , mid = s + (e-s)/2;

    while(s<e){
        int cnt = 0;

        for(int i=0; i<3; i++){
            int low = 0, high = 2, center = low + (high - low)/2;

            while(low<high){
                if(matrix[i][center]<=mid) low = center + 1;
                else high = center;

                center = low + (high-center)/2;
            }

            if(matrix[i][center] <= mid) cnt +=(center+1);
            else cnt+= center;
        }
        
        if(cnt >= k) e = mid;
        else s = mid + 1;

        mid = s + (e-s)/2;
    }
    
    return s;
}


int main(){
    int matrix[][3] = {{1,5,9},{10,11,13},{12,13,15}};
    cout << kthSmallest(matrix,8) << endl;
    return 0;
}