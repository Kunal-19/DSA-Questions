#include<stdc++.h>
using namespace std;

/*
T.C : O(n^2)
S.C : O(1)
*/

vector<vector<int> > getTriplets(int arr[],int n, int sum){
            sort(arr,arr+n);
        vector<vector<int> > ans;

        for(int i=0; i<=n-3; i++){
            int num1 = arr[i];
            int s = i+1, e = n-1;
            
            while(s<e){
                int sum = arr[s] + arr[e];
                
                if(sum==-num1){
                    vector<int> v;
                    v.push_back(arr[i]);
                    v.push_back(arr[s]);
                    v.push_back(arr[e]);
                    ans.push_back(v);
                    
                    int num2 = arr[s], num3 = arr[e];
                    while(s<n && arr[s]==num2) s++;
                    while(e>i && arr[e]==num3) e--;

                }
                else if(sum>-num1) e--;
                else s++;
            }

            while(i<n && arr[i]==num1) i++;
            i--;
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