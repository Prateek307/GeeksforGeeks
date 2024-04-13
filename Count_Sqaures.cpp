// link to the problem ---> https://www.geeksforgeeks.org/problems/count-squares3649/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int countSquares(int N)
    {
        // code here
        double val = sqrt(N);
        val = ceil(val);
        return (val - 1);
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
        cout << ob.countSquares(N) << endl;
    }
    return 0;
}
// } Driver Code Ends