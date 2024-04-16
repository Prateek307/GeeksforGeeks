// link to the problem ---> https://www.geeksforgeeks.org/problems/maximize-sum-after-k-negations1149/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        int i;
        sort(a, a + n);
        for (i = 0; i < n && k > 0; i++)
        {
            if (a[i] < 0)
            {
                a[i] = (-1) * a[i];
            }
            else
                break;
            k--;
        }

        if (a[i] > 0)
        {
            int to_be_modified;
            if (i >= 1)
                to_be_modified = min(a[i - 1], a[i]);
            else
                to_be_modified = a[0];

            long long int sum = 0;
            for (i = 0; i < n; i++)
                sum += a[i];

            if (k & 1)
            {
                sum -= (to_be_modified * 2);
            }
            return sum;
        }

        else
        {
            long long int sum = 0;
            for (i = 0; i < n; i++)
                sum += a[i];
            return sum;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        long long int a[n + 5];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.maximizeSum(a, n, k) << endl;
    }

    return 0;
}
// } Driver Code Ends