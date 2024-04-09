// link to the problem ---> https://www.geeksforgeeks.org/problems/sorted-matrix2333/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat)
    {
        // code here
        vector<int> ans;
        int i, j;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                ans.push_back(Mat[i][j]);
            }
        }

        sort(ans.begin(), ans.end());

        int cnt = 0;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                Mat[i][j] = ans[cnt];
                cnt++;
            }
        }
        return Mat;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends