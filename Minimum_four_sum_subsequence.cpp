// link to the problem ---> https://www.geeksforgeeks.org/problems/minimum-four-sum-subsequence/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
/*You are required to complete below method */

class Solution
{
public:
    int minSum(int arr[], int n)
    {
        // Write your code here
        if (n == 1)
            return arr[0];

        if (n == 2)
            return min({arr[0], arr[1]});

        if (n == 3)
            return min({arr[0], arr[1], arr[2]});

        if (n == 4)
            return min({arr[0], arr[1], arr[2], arr[3]});

        vector<int> dp(n);
        dp[0] = arr[0];
        dp[1] = arr[1];
        dp[2] = arr[2];
        dp[3] = arr[3];

        int i;
        for (i = 4; i < n; i++)
        {
            dp[i] = arr[i] + min({dp[i - 1], dp[i - 2], dp[i - 3], dp[i - 4]});
        }

        return min({dp[n - 1], dp[n - 2], dp[n - 3], dp[n - 4]});
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.minSum(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends