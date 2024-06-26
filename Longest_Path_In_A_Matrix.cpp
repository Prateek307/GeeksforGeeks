// link to the problem ---> https://www.geeksforgeeks.org/problems/longest-path-in-a-matrix3019/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int lip(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &mat, int n, int m)
    {
        if (i < 0 || j < 0 || i >= n || j >= m)
        {
            return 0; // out of bound case
        }
        if (dp[i][j] > 0)
        {
            return dp[i][j]; // we've already some value in dp[i][j]
        }

        int currmax = 1;
        if (i + 1 < n && i + 1 >= 0 && mat[i + 1][j] > mat[i][j])
        {
            currmax = max(currmax, 1 + lip(i + 1, j, dp, mat, n, m));
        }
        if (j + 1 < m && j + 1 >= 0 && mat[i][j + 1] > mat[i][j])
        {
            currmax = max(currmax, 1 + lip(i, j + 1, dp, mat, n, m));
        }
        if (i - 1 >= 0 && i - 1 < n && mat[i - 1][j] > mat[i][j])
        {
            currmax = max(currmax, 1 + lip(i - 1, j, dp, mat, n, m));
        }
        if (j - 1 >= 0 && j - 1 < m && mat[i][j - 1] > mat[i][j])
        {
            currmax = max(currmax, 1 + lip(i, j - 1, dp, mat, n, m));
        }

        dp[i][j] = currmax;
    }
    int longestIncreasingPath(vector<vector<int>> &matrix)
    {
        // Code here
        vector<vector<int>> mat;
        mat = matrix;
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        int maxi = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                // here we're iterating through every possible cell inorder to get the cell from where we can get max ans
                maxi = max(maxi, lip(i, j, dp, mat, n, m));

                // lip stands for longest increasing path
            }
        }
        return maxi;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.longestIncreasingPath(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends