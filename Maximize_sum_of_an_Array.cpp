// Maximize sum(arr[i]*i) of an Array

// link to the problem ---> https://www.geeksforgeeks.org/problems/maximize-arrii-of-an-array0026/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    const long long mod = 1e9 + 7;
    int Maximize(int a[], int n)
    {
        // Complete the function
        sort(a, a + n);
        long long i, ans = 0;
        for (i = 0; i < n; i++)
        {
            long long val = (a[i] * i) % mod;
            ans = ((ans % mod) + (val % mod)) % mod;
        }
        return static_cast<int>(ans);
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
        cout << ob.Maximize(a, n) << endl;
    }
}
// } Driver Code Ends