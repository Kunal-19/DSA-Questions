#include<stdc++.h>
using namespace std;

/*
T.C = O(nlong)
S.C = O(1)
*/

int main(){
    int arr[7] = {5,2,6,1,7,3,10};
    sort(arr,arr+7);

    cout<< "Minimum = " << arr[0]<< endl;
    cout<< "Maximum = " << arr[6]<< endl;
    return 0;
}