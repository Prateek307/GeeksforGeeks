// link to the problem ---> https://www.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1

//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k)
    {
        // Complet the function
        int i, cnt = 0;
        for (i = 0; i < n; i++)
        {
            if (arr[i] <= k)
                cnt++;
        }
        int fav = 0;
        for (i = 0; i < cnt; i++)
        {
            if (arr[i] <= k)
                fav++;
        }
        int ans = cnt - fav;
        for (i = cnt; i < n; i++)
        {
            if (arr[i] <= k)
                fav++;
            if (arr[i - cnt] <= k)
                fav--;
            ans = min(ans, cnt - fav);
        }
        return ans;
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
    return 0;
}

// } Driver Code Ends