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
        int pos = 1, i = 0, cnt = 0;
        while (N)
        {
            if (N & 1)
            {
                pos = i + 1;
                cnt++;
            }
            i++;
            N >>= 1;
        }
        return (cnt > 1 || cnt == 0) ? -1 : pos;
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