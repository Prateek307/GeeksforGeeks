// link to the problem ---> https://www.geeksforgeeks.org/problems/subset-sum-problem2014/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int solve(int i, int n, int target, int arr[], vector<vector<int>> &dp)
    {
        if (target == 0)
            return 1;

        if (i >= n || target < 0)
            return 0;

        if (dp[i][target] != -1)
            return dp[i][target];

        int include = 0, exclude = 0;
        if (arr[i] <= target)
            include = solve(i + 1, n, target - arr[i], arr, dp);
        exclude = solve(i + 1, n, target, arr, dp);

        return dp[i][target] = include | exclude;
    }

    int equalPartition(int N, int arr[])
    {
        // code here
        int sum = 0, i;
        for (i = 0; i < N; i++)
            sum += arr[i];

        if (sum & 1)
            return 0;

        int target = sum / 2;
        vector<vector<int>> dp(N + 1, vector<int>(target + 1, -1));
        return solve(0, N, target, arr, dp);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        if (ob.equalPartition(N, arr))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
// } Driver Code Ends