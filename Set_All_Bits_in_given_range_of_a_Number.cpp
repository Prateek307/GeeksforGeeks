//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int setAllRangeBits(int N, int L, int R)
    {
        // code here
        int i;
        int mask = 0;
        for (i = L - 1; i <= R - 1; i++)
        {
            mask |= (1 << i);
        }
        N |= mask;
        return N;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, L, R;

        cin >> N >> L >> R;

        Solution ob;
        cout << ob.setAllRangeBits(N, L, R) << endl;
    }
    return 0;
}
// } Driver Code Ends