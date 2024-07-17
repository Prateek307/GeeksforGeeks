// link to the problem ---> https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        int i, left[n], right[n];

        // computing left array
        int mx = arr[0];
        for (i = 0; i < n; i++)
        {
            if (mx < arr[i])
                mx = arr[i];
            left[i] = mx;
        }

        // computing right array
        mx = arr[n - 1];
        for (i = n - 1; i >= 0; i--)
        {
            if (mx < arr[i])
                mx = arr[i];
            right[i] = mx;
        }

        long long totalWater = 0;
        for (i = 0; i < n; i++)
        {
            totalWater += min(left[i], right[i]) - arr[i];
        }

        return totalWater;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
}
// } Driver Code Ends