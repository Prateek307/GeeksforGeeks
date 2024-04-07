// link to the problem ---> https://www.geeksforgeeks.org/problems/find-the-median0527/1?page=1&difficulty=School&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
public:
    int find_median(vector<int> v)
    {
        // Code here.
        sort(v.begin(), v.end());
        int th_term, n = v.size();
        if (n & 1) // if n is odd
        {
            return v[n / 2];
        }
        else
        {
            return (v[n / 2] + v[(n / 2) - 1]) / 2;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        Solution ob;
        int ans = ob.find_median(v);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends