// link to the problem ---> https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1?page=1&difficulty=Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
    {

        // code here
        int i;
        long long int l[n], r[n];
        vector<long long int> ans(n);
        l[0] = 1;
        r[n - 1] = 1;

        for (i = 1; i < n; i++)
        {
            l[i] = l[i - 1] * nums[i - 1];
        }

        for (i = n - 2; i >= 0; i--)
        {
            r[i] = r[i + 1] * nums[i + 1];
        }

        for (i = 0; i < n; i++)
        {
            ans[i] = l[i] * r[i];
        }

        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; // number of test cases
    cin >> t;
    while (t--)
    {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr, n); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends