// link to the problem ---> https://www.geeksforgeeks.org/problems/pairs-with-specific-difference1533/1?page=1&category=Arrays&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int maxSumPairWithDifferenceLessThanK(int arr[], int N, int K)
    {
        // Your code goes here
        sort(arr, arr + N);
        int ans = 0;
        for (int i = N - 1; i > 0; i--)
        {
            if (arr[i] - arr[i - 1] < K)
            {
                ans += (arr[i] + arr[i - 1]);
                i--;
            }
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
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        int K;
        cin >> K;
        Solution ob;
        cout << ob.maxSumPairWithDifferenceLessThanK(arr, N, K) << endl;
    }
    return 0;
}

// } Driver Code Ends