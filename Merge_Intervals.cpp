// link to the problem ---> https://www.geeksforgeeks.org/problems/overlapping-intervals--170633/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>> &intervals)
    {
        // Code here
        int i, n = intervals.size();
        vector<vector<int>> ans, v;
        v = intervals;
        sort(v.begin(), v.end());
        for (i = 0; i < n; i++)
        {
            if (ans.empty() || ans.back()[1] < v[i][0])
                ans.push_back(v[i]);
            else
                ans.back()[1] = max(ans.back()[1], v[i][1]);
        }
        return ans;
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
        vector<vector<int>> Intervals(n);
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            Intervals[i].push_back(x);
            Intervals[i].push_back(y);
        }
        Solution obj;
        vector<vector<int>> ans = obj.overlappedInterval(Intervals);
        for (auto i : ans)
        {
            for (auto j : i)
            {
                cout << j << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends