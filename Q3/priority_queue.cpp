#include <stdc++.h>
using namespace std;

/*
T.C : O(klogk + (n-k)log(n-k))
S.C : O(k)
*/


int findKthLargest(int nums[], int k, int n)
{
    priority_queue<int, vector<int>, greater<int> > q;

    for (int i = 0; i < k; i++)
    {
        q.push(nums[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (q.top() < nums[i])
        {
            q.pop();
            q.push(nums[i]);
        }
    }

    return q.top();
}

int findKthSmallest(int nums[], int k, int n)
{
    priority_queue<int> q;

    for (int i = 0; i < k; i++)
    {
        q.push(nums[i]);
    }

    for (int i = k; i < n; i++)
    {
        if (q.top() > nums[i])
        {
            q.pop();
            q.push(nums[i]);
        }
    }

    return q.top();
}

int main()
{
    int arr[7] = {5, 2, 6, 1, 7, 3, 10};
    int n = sizeof(arr) / sizeof(int);
    int k;
    cout << "Enter the value of K to find Kth largest term: ";
    cin >> k;

    cout << findKthLargest(arr, k, n) << endl;
    cout << findKthSmallest(arr, k, n) << endl;
    return 0;
}