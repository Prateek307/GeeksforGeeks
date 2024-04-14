// link to the problem ---> https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    void rearrange(int arr[], int n)
    {
        // code here
        vector<int> pos, neg;
        int i, j;
        for (i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }

        int index = 0;
        i = 0;
        j = 0;
        while (i < pos.size() || j < neg.size())
        {
            if ((index & 1) && j < neg.size()) // insert negative
            {
                arr[index++] = neg[j];
                j++;
            }
            else if (!(index & 1) && (i < pos.size()))
            {
                arr[index++] = pos[i];
                i++;
            }
            else
                break;
        }
        while (i < pos.size())
        {
            arr[index++] = pos[i];
            i++;
        }
        while (j < neg.size())
        {
            arr[index++] = neg[j];
            j++;
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
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends