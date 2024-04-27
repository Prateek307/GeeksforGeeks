// link to the problem ---> https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=1&category=Arrays&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {

        int i, j, ans = 0, cnt = 0, index = -1;
        for (i = 0; i < n; i++)
        {
            cnt = 0;
            for (j = 0; j < m; j++)
            {
                if (arr[i][j] == 1)
                    cnt++;
            }
            if (cnt > ans)
            {
                index = i;
                ans = cnt;
            }
        }
        return index;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends