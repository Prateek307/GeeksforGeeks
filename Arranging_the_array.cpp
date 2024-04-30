//  link to the problem ---> https://www.geeksforgeeks.org/problems/arranging-the-array1131/1?page=2&category=Arrays,Strings&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
public:
    void Rearrange(int arr[], int n)
    {
        // Your code goes here
        vector<int> pos, neg;
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] >= 0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }
        int cnt = 0;
        for (i = 0; i < neg.size(); i++)
            arr[cnt++] = neg[i];
        for (i = 0; i < pos.size(); i++)
            arr[cnt++] = pos[i];
    }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

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
            cin >> arr[i];
        long long j = 0;
        Solution ob;
        ob.Rearrange(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends