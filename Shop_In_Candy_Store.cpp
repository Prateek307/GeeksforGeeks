// link to the problem ---> https://www.geeksforgeeks.org/problems/shop-in-candy-store1145/1?page=2&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        sort(candies, candies + N);

        int minCost = 0;
        int numMin = N;
        for (int i = 0; i < numMin; i++)
        {
            minCost += candies[i];
            numMin -= K;
        }

        int maxCost = 0;
        int numMax = 0;
        for (int i = N - 1; i >= numMax; i--)
        {
            maxCost += candies[i];
            numMax += K;
        }

        vector<int> rst;
        rst.push_back(minCost);
        rst.push_back(maxCost);
        return rst;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}
// } Driver Code Ends