// link to the program ---> https://www.geeksforgeeks.org/problems/copy-set-bits-in-range0623/1?page=1&category=Arrays,Strings,Bit%20Magic,Searching&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissionsz

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int setSetBit(int x, int y, int l, int r)
    {
        // code here
        // we have to just traverse in the range l to r and check if the bit is set
        // y if yes then set the bit in x as well

        int i;
        for (i = r; i >= l; i--)
        {
            // check if the ith bit is set in y
            if (y & 1 << (i - 1))
                x = x | (1 << (i - 1));
        }
        return x;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, l, r;
        cin >> x >> y >> l >> r;

        Solution ob;
        cout << ob.setSetBit(x, y, l, r) << "\n";
    }
    return 0;
}
// } Driver Code Ends