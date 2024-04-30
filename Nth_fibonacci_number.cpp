// link to the problem ---> https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    const long long mod = 1e9 + 7;

    long long solve(int n, vector<long long> &dp)
    {
        if (n == 1 || n == 2)
            return 1;

        if (dp[n] != -1)
            return dp[n];

        return dp[n] = (solve(n - 1, dp) % mod + solve(n - 2, dp) % mod) % mod;
    }

    int nthFibonacci(int n)
    {
        // code here
        vector<long long> dp(n + 1, -1);
        return solve(n, dp);
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
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends