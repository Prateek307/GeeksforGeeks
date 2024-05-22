// link to the Problem ---> https://www.geeksforgeeks.org/problems/minimum-steps-to-delete-a-string2956/1

class Solution
{

public:
    int solve(int i, int j, string s, vector<vector<int>> &dp)
    {
        if (i > j)
            return 0;

        if (j - i + 1 == 1)
            return 1;

        if (dp[i][j] != -1)
            return dp[i][j];

        int op1 = 1e9, op2 = 1e9, op3 = 1e9;

        op1 = 1 + solve(i + 1, j, s, dp);

        if (s[i] == s[i + 1])
            op2 = 1 + solve(i + 2, j, s, dp);

        int ind;
        for (ind = i + 2; ind <= j; ind++)
        {
            if (s[i] == s[ind])
                op3 = min(op3, solve(i + 1, ind - 1, s, dp) + solve(ind + 1, j, s, dp));
        }

        return dp[i][j] = min({op1, op2, op3});
    }

    int minStepToDeleteString(string s)
    {
        // Your code goes here
        int n = s.size();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return solve(0, s.size() - 1, s, dp);
    }
};