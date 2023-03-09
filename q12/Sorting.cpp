#include<stdc++.h>
using namespace std;

/*
T.C : O(n*logn)
S.C : O(1)
*/

void display(vector<int> arr){
    int n= arr.size();

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    //Here, The vector v1 size is fixed to m+n... And we ha
    int m = 3,n = 3;
    vector<int> v1, v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(6);

    int i = 0, j=0;

    for(int i=0; i<n; i++){
        v1.push_back(v2[i]);
    }

    sort(v1.begin(),v1.end());
    display(v1);
    return 0;
}