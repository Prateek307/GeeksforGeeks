// link to the problem ---> https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1?page=2&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int findMin(int arr[], int n)
    {
        // complete the function here
        int i, ans = arr[0];
        for (i = 0; i < n; i++)
        {
            ans = min(ans, arr[i]);
        }
        return ans;
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
        int i, a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.findMin(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends