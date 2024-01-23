// link to the problem ---> https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1?page=1&difficulty=Medium&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        // Your code here
        int i, mx = 0, maxRange = 0, jump = 0;
        if (n == 1)
            return 0;
        for (i = 0; i < n; i++)
        {
            mx = max(mx, i + arr[i]);
            if (i == maxRange)
            {
                maxRange = mx;
                jump++;
                if (maxRange >= n - 1)
                    return jump;
            }
        }
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
        int n, i, j;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.minJumps(arr, n) << endl;
    }
    return 0;
}

// } Driver Code Ends