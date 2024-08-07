// link to the problem ---> https://www.geeksforgeeks.org/problems/unique-bsts-1587115621/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return the total number of possible unique BST.
    int numTrees(int N)
    {
        // Your code here
        long long i, j, mod = 1e9 + 7;
        vector<long long> dp(N + 1);
        dp[0] = 1;
        dp[1] = 1;
        for (i = 2; i <= N; i++)
        {
            for (j = 0; j < i; j++)
                dp[i] = (dp[i] + (dp[j] * dp[i - j - 1]) % mod) % mod;
        }
        return dp[N];
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9 + 7)
int main()
{

    // taking total testcases
    int t;
    cin >> t;
    while (t--)
    {

        // taking total number of elements
        int n;
        cin >> n;
        Solution ob;
        // calling function numTrees()
        cout << ob.numTrees(n) << "\n";
    }
}
// } Driver Code Ends