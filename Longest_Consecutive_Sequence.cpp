// link to the problem ---> https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1?page=1&difficulty=Medium&status=unsolved&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // arr[] : the input array
    // N : size of the array arr[]

    // Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
        // Your code here
        int i, n = N;
        vector<int> v(100013, -1);
        for (i = 0; i < n; i++)
        {
            v[arr[i]] = 1;
        }
        int ans = INT_MIN, cnt = 0, flag = 0;
        for (i = 0; i <= 100013; i++)
        {
            if (v[i] == 1)
            {
                cnt++;
            }
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
                flag = 1;
            }
        }
        return (flag == 1) ? ans : cnt;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t, n, i, a[100001];
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.findLongestConseqSubseq(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends