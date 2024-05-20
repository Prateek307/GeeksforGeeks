//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int solve(int i, int prev, int n, int a[], vector<vector<int>> &dp)
    {
        if (i == n)
            return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        int take = 0, notTake = 0;
        notTake = solve(i + 1, prev, n, a, dp);

        if (prev == -1 || a[i] > a[prev])
            take = 1 + solve(i + 1, i, n, a, dp);

        return dp[i][prev + 1] = max(take, notTake);
    }

    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        // your code here
        vector<int> next(n + 1, 0), curr(n + 1, 0);

        int i, j;
        for (i = n - 1; i >= 0; i--)
        {
            for (j = i - 1; j >= -1; j--)
            {
                int take = 0;
                if (j == -1 || a[i] > a[j])
                {
                    take = 1 + next[i + 1];
                }
                int notTake = 0 + next[j + 1];
                int ans = max(take, notTake);
                curr[j + 1] = ans;
            }
            next = curr;
        }
        return next[0];
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends

// another approach
// ------------------------------------------------------------------------------------------------------------------------

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
        // your code here
        int i;
        vector<int> ans;
        ans.push_back(a[0]);
        for (i = 1; i < n; i++)
        {
            if (a[i] > ans.back())
                ans.push_back(a[i]);
            else
            {
                int index = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
                ans[index] = a[i];
            }
        }
        return ans.size();
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t, n;
    cin >> t;
    while (t--)
    {
        // taking size of array
        cin >> n;
        int a[n];

        // inserting elements to the array
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        // calling method longestSubsequence()
        cout << ob.longestSubsequence(n, a) << endl;
    }
}

// } Driver Code Ends