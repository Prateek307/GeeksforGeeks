// link to the problem ---> https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&difficulty=Easy&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int missingNumber(vector<int> &array, int n)
    {
        // Your code goes here
        int i;
        sort(array.begin(), array.end());
        for (i = 0; i < n; i++)
        {
            if (array[i] != i + 1)
                return i + 1;
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
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i)
            cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends