// link to the problem ---> https://www.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    const long long mod = 1e9 + 7;

    int ways(int i, vector<int> &dp)
    {
        if (i == 0 || i == 1)
            return dp[i] = 1;

        if (dp[i] != -1)
            return dp[i];

        int right, left;
        right = ways(i - 1, dp);
        left = ways(i - 2, dp);

        return dp[i] = ((right % mod) + (left % mod)) % mod;
    }
    // Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        vector<int> dp(n + 1, -1);
        return ways(n, dp);
    }
};

//{ Driver Code Starts.
int main()
{
    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {
        // taking stair count
        int m;
        cin >> m;
        Solution ob;
        cout << ob.countWays(m) << endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends