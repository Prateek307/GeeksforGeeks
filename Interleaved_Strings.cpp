// link to the problem ---> https://www.geeksforgeeks.org/problems/interleaved-strings/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    /*You are required to complete this method */

    int solve(int i, int j, int k, string A, string B, string C, vector<vector<int>> &dp)
    {
        if (dp[i][j] != -1)
            return dp[i][j];

        if (i == A.size() && j == B.size() && k == C.size())
            return 1;

        int ans1 = 0, ans2 = 0;
        if (i <= A.size() - 1)
        {
            if (A[i] == C[k])
            {
                ans1 = solve(i + 1, j, k + 1, A, B, C, dp);
            }
        }

        if (j <= B.size() - 1)
        {
            if (B[j] == C[k])
            {
                ans2 = solve(i, j + 1, k + 1, A, B, C, dp);
            }
        }

        return dp[i][j] = ans1 | ans2;
    }

    bool isInterleave(string A, string B, string C)
    {
        // Your code here
        vector<vector<int>> dp(A.size() + 1, vector<int>(B.size() + 1, -1));
        return solve(0, 0, 0, A, B, C, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b, c;
        cin >> a;
        cin >> b;
        cin >> c;
        Solution obj;
        cout << obj.isInterleave(a, b, c) << endl;
    }
    // your code goes here
    return 0;
}
// } Driver Code Ends