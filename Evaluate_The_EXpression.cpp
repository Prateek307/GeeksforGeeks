// link to the problem ---> https://www.geeksforgeeks.org/problems/evaluate-the-expression0307/1?page=2&difficulty=School,Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int fib(int n)
    {

        // Declare an array to store
        // Fibonacci numbers.
        // 1 extra to handle
        // case, n = 0
        int f[n + 2];
        int i;

        // 0th and 1st number of the
        // series are 0 and 1
        f[0] = 0;
        f[1] = 1;

        for (i = 2; i <= n; i++)
        {

            // Add the previous 2 numbers
            // in the series and store it
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
    int evaluate_exp(int n)
    {
        // Code here
        return (fib(n - 1) * fib(n + 1) - fib(n) * fib(n));
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.evaluate_exp(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends