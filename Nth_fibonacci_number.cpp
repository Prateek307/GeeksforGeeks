// link to the problem ---> https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=1&difficulty=Easy&sortBy=submissions


//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    const int mod = 1e9 + 7;
    int nthFibonacci(int n)
    {
        // code here
        int i;
        int val[n + 1];
        val[0] = 0;
        val[1] = 1;
        for (i = 2; i <= n; i++)
        {
            val[i] = ((val[i - 1]) % mod + (val[i - 2]) % mod) % mod;
        }
        return val[n];
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