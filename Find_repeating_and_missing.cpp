// link to the problem ---> https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?page=1&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> findTwoElement(vector<int> arr, int n)
    {
        // code here
        vector<int> v(n + 1), res;
        int i;
        for (i = 0; i < n + 1; i++)
        {
            v[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            v[arr[i]] -= 1;
        }
        int miss, dup;
        for (i = 0; i < n + 1; i++)
        {
            if (v[i] == -2)
            {
                res.push_back(i);
                break;
            }
        }
        for (i = 1; i < n + 1; i++)
        {
            if (v[i] == 0)
            {
                res.push_back(i);
                break;
            }
        }
        return res;
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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends