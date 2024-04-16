// link to the problem ---> https://www.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here
        int prev = 0, i = 0, sum = 0, cnt = 0, ans = INT_MAX;
        while (i < n)
        {

            cnt++;
            sum = sum + arr[i];
            if (sum > x)
            {
                while (sum - arr[prev] > x)
                {
                    sum = sum - arr[prev];
                    prev++;
                    cnt--;
                }
                ans = min(ans, cnt);
            }

            i++;
        }
        if (ans >= 1 && ans != INT_MAX)
            return ans;
        return 0;
    }
};

//{ Driver Code Starts.

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.smallestSubWithSum(a, n, x) << endl;
    }
    return 0;
}
// } Driver Code Ends