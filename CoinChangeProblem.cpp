// link to the problem ---> https://www.geeksforgeeks.org/problems/coin-change2448/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    using ll = long long;
    ll solve(int i, int target, int n, int coins[], vector<vector<ll>> &dp)
    {
        if (target == 0)
            return 1;

        if (i == n || target < 0)
            return 0;

        if (dp[i][target] != -1)
            return dp[i][target];

        ll pick = 0, dontPick = 0;
        if (coins[i] <= target)
            pick = solve(i, target - coins[i], n, coins, dp);
        dontPick = solve(i + 1, target, n, coins, dp);

        return dp[i][target] = pick + dontPick;
    }

    long long int count(int coins[], int N, int sum)
    {

        // code here.
        vector<vector<ll>> dp(N + 1, vector<ll>(sum + 1, -1));
        return solve(0, sum, N, coins, dp);
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