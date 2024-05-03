// link to the problem ---> https://www.geeksforgeeks.org/problems/next-permutation5226/1?page=1&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions 

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> nextPermutation(int N, vector<int> arr)
    {
        // code here
        bool hasnext = next_permutation(arr.begin(), arr.end());
        return arr;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends