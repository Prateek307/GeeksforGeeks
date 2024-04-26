// link to the problem ---> https://www.geeksforgeeks.org/problems/check-if-it-is-possible-to-survive-on-island4922/1?page=3&difficulty=School,Basic,Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions


//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int minimumDays(int S, int N, int M)
    {
        // code here
        int total_food_required = S * M;
        int no_of_purchasable_day = S - S / 7;
        int max_food_bought = no_of_purchasable_day * N;
        if (max_food_bought < total_food_required)
        {
            return -1;
        }
        else
        {
            return ceil(1.00 * total_food_required / N);
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
        int S, N, M;
        cin >> S >> N >> M;

        Solution ob;
        cout << ob.minimumDays(S, N, M) << endl;
    }
    return 0;
}
// } Driver Code Ends