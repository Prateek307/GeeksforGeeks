// link to the problem ---> https://www.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&difficulty=Medium&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {

        // your code here
        map<int, int> m;
        int i, n = size;
        for (i = 0; i < n; i++)
        {
            m[a[i]]++;
        }
        for (auto it : m)
        {
            if (it.second > n / 2)
                return it.first;
        }
        return -1;
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
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends