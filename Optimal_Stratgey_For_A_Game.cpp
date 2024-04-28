// link to the problem ---> https://www.geeksforgeeks.org/problems/optimal-strategy-for-a-game-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

// Function to find the maximum possible amount of money we can win.
class Solution
{
public:
    long long solve(int low, int high, int n, int arr[], vector<vector<int>> &dp)
    {

        if (low > high || low >= n || high < 0)
            return 0;

        if (dp[low][high] != -1)
            return dp[low][high];

        long long first = 0, last = 0;
        first = arr[low] + min(solve(low + 2, high, n, arr, dp), solve(low + 1, high - 1, n, arr, dp));
        last = arr[high] + min(solve(low, high - 2, n, arr, dp), solve(low + 1, high - 1, n, arr, dp));

        return dp[low][high] = max(first, last);
    }

    long long maximumAmount(int n, int arr[])
    {
        // Your code here

        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(0, n - 1, n, arr, dp);
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.maximumAmount(n, a) << endl;
    }
    return 0;
}
// } Driver Code Ends