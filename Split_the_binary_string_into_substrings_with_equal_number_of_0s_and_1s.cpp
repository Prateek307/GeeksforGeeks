// link to the problem ---> https://www.geeksforgeeks.org/problems/split-the-binary-string-into-substrings-with-equal-number-of-0s-and-1s/1?page=1&category=Arrays,Strings&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxSubStr(string str)
    {
        // Write your code here
        int res = 0, sum = 0;
        int n = str.length();
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '0')
                sum--;
            else
                sum++;

            if (sum == 0)
                res++;
        }
        if (sum == 0)
            return res;
        return -1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.maxSubStr(str);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends