// link to the problem ---> https://www.geeksforgeeks.org/problems/finding-the-numbers0215/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums)
    {
        // Code here.
        map<int, int> m;
        int i;
        vector<int> ans;
        for (i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        for (auto it : m)
        {
            if (it.second == 1)
                ans.push_back(it.first);
        }
        return ans;
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
        vector<int> v(2 * n + 2);
        for (int i = 0; i < 2 * n + 2; i++)
            cin >> v[i];
        Solution ob;
        vector<int> ans = ob.singleNumber(v);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends