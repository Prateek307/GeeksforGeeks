// link to the problem ---> https://www.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find minimum number of attempts needed in
    // order to find the critical floor.

    int solve(int eggs, int floors, vector<vector<int>> &dp)
    {
        if (floors == 1 || floors == 0)
            return floors;

        if (eggs == 1)
            return floors;

        if (dp[eggs][floors] != -1)
            return dp[eggs][floors];

        int k, mn = INT_MAX;
        for (k = 1; k <= floors; k++)
        {
            int temp = 1 + max(solve(eggs - 1, k - 1, dp), solve(eggs, floors - k, dp));
            mn = min(mn, temp);
        }

        return dp[eggs][floors] = mn;
    }

    int eggDrop(int n, int k)
    {
        // your code here
        vector<vector<int>> dp(n + 1, vector<int>(k + 1, -1));
        return solve(n, k, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking eggs and floors count
        int n, k;
        cin >> n >> k;
        Solution ob;
        // calling function eggDrop()
        cout << ob.eggDrop(n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends