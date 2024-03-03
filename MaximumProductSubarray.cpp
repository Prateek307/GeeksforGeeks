// link to the problem ---> https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1?page=1&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
using ll = long long;
class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n)
    {
        // code here
        ll i, pre = 1, suf = 1, ans = INT_MIN;
        for (i = 0; i < n; i++)
        {
            if (pre == 0)
                pre = 1;
            if (suf == 0)
                suf = 1;
            pre *= arr[i];
            suf *= arr[n - i - 1];
            ans = max(ans, max(pre, suf));
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends