// link to the problem ---> https://www.geeksforgeeks.org/problems/coin-change2448/1?page=2&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    using ll = long long int;

    ll solve(int coins[], int n, int target, int i, ll sum, vector<vector<ll>> &dp)
    {
        if (i == n)
        {
            return (target == sum) ? 1 : 0;
        }

        if (dp[i][sum] != -1)
            return dp[i][sum];

        ll include = 0, exclude = 0;

        if (sum + coins[i] <= target)
            include = solve(coins, n, target, i, sum + coins[i], dp);

        exclude = solve(coins, n, target, i + 1, sum, dp);

        return dp[i][sum] = include + exclude;
    }
    long long int count(int coins[], int N, int sum)
    {
        vector<vector<ll>> dp(N, vector<ll>(sum + 1, -1));
        return solve(coins, N, sum, 0, 0, dp);
        // code here.
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum, N;
        cin >> sum >> N;
        int coins[N];
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        Solution ob;
        cout << ob.count(coins, N, sum) << endl;
    }

    return 0;
}

// } Driver Code Ends