// link to the problem ---> https://www.geeksforgeeks.org/problems/max-rope-cutting1312/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    long long maxProduct(int n)
    {
        // code here

        if (n == 1)
            return 0;

        vector<long long> dp(n + 1, 0);
        int i, j;
        for (i = 2; i <= n; i++)
        {
            for (j = 1; j < i; j++)
            {
                dp[i] = max(dp[i], max(1LL * j * (i - j), 1LL * j * dp[i - j]));
            }
        }
        return dp[n];
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
        auto ans = ob.maxProduct(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends