#include<stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1,a1+n);
    sort(a2,a2+m);

    int i=0, j=0;
    while(j<m){
        if(a1[i]==a2[j]){
            i++;
            j++;
        }
        else if(a1[i]<a2[j]) i++;
        else return "No";
    }
    return "Yes";
}

int main(){
    int arr[] = {1,2,3,5,6};
    int brr[] = {1,2,4};
    cout << isSubset(arr,brr,6,3) << endl;
    return 0;
}