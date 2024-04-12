// link to the problem ---> https://www.geeksforgeeks.org/problems/find-position-of-set-bit3706/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int findPosition(int N)
    {
        // code here
        int pos = 1, ans;
        int cnt = 0;
        while (N)
        {
            if (N & 1)
            {
                cnt++;
                ans = pos;
            }
            N >>= 1;
            pos++;
        }
        if (cnt == 1)
            return ans;
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
        int N;

        cin >> N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends