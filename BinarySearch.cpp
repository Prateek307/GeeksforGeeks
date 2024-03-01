//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int binarySearrch(int arr[], int n, int k)
    {
        int low = 0, high = n - 1, mid;
        while (low <= high)
        {
            mid = low + (high - low) / 2;

            if (arr[mid] == k)
                return mid;

            else if (arr[mid] < k)
                low = mid + 1;

            else
                high = mid - 1;
        }
        return -1;
    }
    int binarysearch(int arr[], int n, int k)
    {
        // code here
        return binarySearrch(arr, n, k);
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
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends