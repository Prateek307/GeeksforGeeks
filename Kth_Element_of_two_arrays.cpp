// link to the problem ---> https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1?page=2&difficulty=Medium&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int> ans;
        int i;
        for (i = 0; i < n; i++)
            ans.push_back(arr1[i]);
        for (i = 0; i < m; i++)
            ans.push_back(arr2[i]);
        sort(ans.begin(), ans.end());
        int counter = 1;
        for (auto it : ans)
        {
            if (counter == k)
                return it;
            it++;
            counter++;
        }
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n], arr2[m];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        for (int i = 0; i < m; i++)
            cin >> arr2[i];

        Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k) << endl;
    }
    return 0;
}
// } Driver Code Ends