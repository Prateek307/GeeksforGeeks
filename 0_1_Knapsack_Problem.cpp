// link to the problem ---> https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return max value that can be put in knapsack of capacity W.

    int solve(int i, int capacity, int wt[], int val[], int n, vector<vector<int>> &dp)
    {
        if (i == n - 1)
        {
            if (wt[i] <= capacity)
                return val[i];
            return 0;
        }

        if (dp[i][capacity] != -1)
            return dp[i][capacity];

        int pick = 0, dontPick = 0;
        if (wt[i] <= capacity)
            pick = val[i] + solve(i + 1, capacity - wt[i], wt, val, n, dp);
        dontPick = solve(i + 1, capacity, wt, val, n, dp);

        return dp[i][capacity] = max(pick, dontPick);
    }

    int knapSack(int W, int wt[], int val[], int n)
    {
        // Your code here
        vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
        return solve(0, W, wt, val, n, dp);
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
        // reading number of elements and weight
        int n, w;
        cin >> n >> w;

        int val[n];
        int wt[n];

        // inserting the values
        for (int i = 0; i < n; i++)
            cin >> val[i];

        // inserting the weights
        for (int i = 0; i < n; i++)
            cin >> wt[i];
        Solution ob;
        // calling method knapSack()
        cout << ob.knapSack(w, wt, val, n) << endl;
    }
    return 0;
}
// } Driver Code Ends