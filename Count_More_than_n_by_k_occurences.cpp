// link to the problem ---> https://www.geeksforgeeks.org/problems/count-element-occurences/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k)
    {
        // Your code here
        int i;
        map<int, int> m;
        for (i = 0; i < n; i++)
            m[arr[i]]++;

        int cnt = 0, value = n / k;
        for (auto it : m)
        {
            if (it.second > value)
                cnt++;
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++)
            cin >> arr[i];
        int k;
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends