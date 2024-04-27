// link to the problem ---> https://www.geeksforgeeks.org/problems/find-optimum-operation4504/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minOperation(int n)
    {
        // code here.
        int cnt = 0;
        while (n >= 1)
        {
            if (n % 2 != 0)
            {
                n--;
                cnt++;
            }
            else
            {
                n = n / 2;
                cnt++;
            }
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
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperation(n) << endl;
    }
}
// } Driver Code Ends