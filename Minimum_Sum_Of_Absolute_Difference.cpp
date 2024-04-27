// link to the problem ---> https://www.geeksforgeeks.org/problems/minimum-sum-of-absolute-differences-of-pairs/1?page=1&category=Arrays&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    long long findMinSum(vector<int> &A, vector<int> &B, int N)
    {
        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        int i;
        long long sum = 0;
        for (i = 0; i < N; i++)
        {
            sum += abs(A[i] - B[i]);
        }
        return sum;
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
        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> B[i];
        }
        Solution ob;
        cout << ob.findMinSum(A, B, N) << endl;
    }
}
// } Driver Code Ends