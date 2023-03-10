#include<stdc++.h>
using namespace std;

    vector<vector<int> > merge(vector<vector<int> >& intervals) {
        int n = intervals.size();
        if(n==1) return intervals;

        sort(intervals.begin(),intervals.end());    
        vector<vector<int> > ans;
        ans.push_back(intervals[0]);

        int j = 0;

        for(int i=1; i < n;i++){
            if(ans[j][1] >= intervals[i][0]){
                ans[j][1] = max(ans[j][1],intervals[i][1]);
            }
            else{
                ans.push_back(intervals[i]);
                j++;
            }
        }

        return ans;
    }

void display(vector<vector<int> > v){
    int n = v.size();

    for(int i=0; i<n; i++){
        for(int j=0; j<2;j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    vector<vector<int> > v;
    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    for(int i=0; i<n;i++){
        vector<int> temp;
        int start,end;
        cout << "Enter the start and end point in interval " << i+1 << ":";
        cin >> start >> end;
        temp.push_back(start);
        temp.push_back(end);
        v.push_back(temp);
    }

    vector<vector<int> > ans = merge(v);
    display(ans);
    return 0;
}