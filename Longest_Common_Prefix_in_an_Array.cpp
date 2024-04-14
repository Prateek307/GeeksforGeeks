// link to the problem ---> https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    string longestCommonPrefix(string arr[], int N)
    {
        // your code here
        int i, j, len = INT_MAX;
        string str;
        // first we need to find the minimum length of the string
        for (i = 0; i < N; i++)
        {
            if (arr[i].size() < len)
            {
                str = arr[i];
                len = str.size();
            }
        }

        string ans;
        bool flag = 0;
        for (i = 0; i < len; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (arr[j][i] != str[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                break;
            ans.push_back(str[i]);
        }
        if (ans.size() > 0)
            return ans;
        return "-1";
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
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        Solution ob;
        cout << ob.longestCommonPrefix(arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends