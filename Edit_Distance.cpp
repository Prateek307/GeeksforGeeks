// link to the problem ---> https://www.geeksforgeeks.org/problems/edit-distance3702/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int solve(int i, int j, string s, string t, vector<vector<int>> &dp)
    {

        if (i == -1)
            return j + 1;
        if (j == -1)
            return i + 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        if (s[i] == t[j])
            return dp[i][j] = solve(i - 1, j - 1, s, t, dp);

        int op1 = 0, op2 = 0, op3 = 0;
        op1 = 1 + solve(i, j - 1, s, t, dp);
        op2 = 1 + solve(i - 1, j, s, t, dp);
        op3 = 1 + solve(i - 1, j - 1, s, t, dp);

        return dp[i][j] = min({op1, op2, op3});
    }

    int editDistance(string s, string t)
    {
        // Code here
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
        return solve(n - 1, m - 1, s, t, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends