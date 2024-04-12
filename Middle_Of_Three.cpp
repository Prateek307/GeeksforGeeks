// link to the problem ---> https://www.geeksforgeeks.org/problems/middle-of-three2926/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int middle(int A, int B, int C)
    {
        // code here//Position this line where user code will be pasted.
        vector<int> v;
        v.push_back(A);
        v.push_back(B);
        v.push_back(C);
        sort(v.begin(), v.end());
        return v[1];
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C;
        cin >> A >> B >> C;
        Solution ob;
        cout << ob.middle(A, B, C) << "\n";
    }
    return 0;
}
// } Driver Code Ends