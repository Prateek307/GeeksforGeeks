// link to the problem ---> https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1?page=2&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    using ll = long long;
    const ll mod = 1e9 + 7;
    ll solve(int arr[], int n, int target, int index, int sum, vector<vector<ll>> &dp)
    {
        if (index == n)
            return (sum == target) ? 1 : 0;

        if (dp[index][sum] != -1)
            return dp[index][sum];

        ll include = 0, exclude = 0;
        if (arr[index] + sum <= target)
            include = solve(arr, n, target, index + 1, sum + arr[index], dp);
        exclude = solve(arr, n, target, index + 1, sum, dp);

        return dp[index][sum] = ((include % mod) + (exclude % mod)) % mod;
    }
    int perfectSum(int arr[], int n, int sum)
    {
        // Your code goes here
        vector<vector<ll>> dp(n, vector<ll>(sum + 1, -1));
        return solve(arr, n, sum, 0, 0, dp);
    }
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];

        Solution ob;
        cout << ob.perfectSum(a, n, sum) << "\n";
    }
    return 0;
}

// } Driver Code Ends