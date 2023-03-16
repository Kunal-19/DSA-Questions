#include<stdc++.h>
using namespace std;

void display(int arr[][5]){
    int n=4;

    for(int i=0; i<n; i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print(vector<int>ans){
    for(int i=0; i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[][5] = {{1,2,1,4,8},{3,7,8,5,1},{8,7,7,3,1},{8,1,2,7,9}};

    //Sorting Array
    for(int i=0; i<4; i++){
        sort(arr[i],arr[i]+5);
    }
    display(arr);
    vector<int> ans;

    int indices[4] = {0};
    int mini = 0,col=0;

    while(col<5){
        bool flag = true;
        for(int i=0; i<3; i++){
            if(arr[i][indices[i]]<arr[i+1][indices[i]]){
                if(arr[mini]>arr[i]) mini = i;
                flag = false;
            }
        }
        if(flag){
            ans.push_back(arr[col][0]);

            for(int i=0; i<4; i++){
                indices[i]++;
                col = max(col,indices[i]);
            }
        } 
        else{
            indices[mini]++;
        }
    }
    
    print(ans);
    return 0;
}