// link to the problem ---> https://www.geeksforgeeks.org/problems/pattern-searching4145/1?page=1&category=Arrays,Strings&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string text, string pat)
    {
        // Your code goes here
        return text.find(pat) != -1;
    }
};

//{ Driver Code Starts.

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;

        Solution ob;
        cout << ob.search(x, y) << "\n";
    }

    return 0;
}
// } Driver Code Ends