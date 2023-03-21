#include<stdc++.h>
using namespace std;

/*
T.C : O(n^3)
S.C : O(1)
*/

vector<vector<int> > getTriplets(int arr[],int n, int sum){
    vector<vector<int> > ans;
    for(int i=0; i<n; i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==sum){
                    vector<int> res;
                    res.push_back(arr[i]);
                    res.push_back(arr[j]);
                    res.push_back(arr[k]);
                    ans.push_back(res);
                }
            }
        }
    }

    return ans;
}

void display(vector<vector<int> >arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int main(){
    int arr[] = {-1,0,1,2,-1,-4};
    display(getTriplets(arr,6,0));
    return 0;
}