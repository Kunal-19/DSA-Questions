#include<stdc++.h>

using namespace std;

void minSwaps(vector<int>&arr, int n){
    vector<pair<int,int> > v;

    for(int i=0; i<n ;i++){
        pair<int,int> p = make_pair(arr[i],i);
        v.push_back(p);
    }

    sort(v.begin(),v.end());
    int cnt = 0;

    for(int i=0; i<n; i++){
        int index = v[i].second;

        if(index!=i){
            swap(v[i],v[index]);
            cnt++;
            i--;
        }
    }

    cout << cnt << endl;
}

int main(){
    vector<int> v;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for(int i=0; i<n ;i++){
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    minSwaps(v,n);
    return 0;
}