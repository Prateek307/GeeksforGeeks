// link to the problem ---> https://www.geeksforgeeks.org/problems/maximum-profit4657/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    //      index   transaction
    int solve(int K, int N, int A[], int i, int j, vector<vector<int>> &dp)
    {
        if (j == K || i == N)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int notTake = 0;
        notTake = solve(K, N, A, i + 1, j, dp);
        int take = INT_MIN, ind;
        for (ind = i; ind < N; ind++)
        {
            if (A[ind] > A[i])
                take = max(take, A[ind] - A[i] + solve(K, N, A, ind + 1, j + 1, dp));
        }

        return dp[i][j] = max(take, notTake);
    }

    int maxProfit(int K, int N, int A[])
    {
        // code here
        vector<vector<int>> dp(N + 1, vector<int>(K + 1, -1));
        return solve(K, N, A, 0, 0, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++)
            cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends