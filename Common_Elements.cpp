// link to the problem ---> https://www.geeksforgeeks.org/problems/common-elements1132/1?page=2&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
    {
        // code here.
        vector<int> ans;
        int i = 0, j = 0, k = 0;

        while (i < n1 && j < n2 && k < n3)
        {
            if (A[i] == B[j] && B[j] == C[k])
            {
                ans.push_back(A[i]);
                // Move all pointers as the elements are the same
                i++;
                j++;
                k++;
            }
            else if (A[i] < B[j])
            {
                i++; // Move pointer for array A
            }
            else if (B[j] < C[k])
            {
                j++; // Move pointer for array B
            }
            else
            {
                k++; // Move pointer for array C
            }
        }

        // Return empty array if no common elements found
        if (ans.empty())
        {
            ans.push_back(-1);
            return ans;
        }

        // Remove duplicates from the answer vector
        ans.erase(unique(ans.begin(), ans.end()), ans.end());

        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];

        for (int i = 0; i < n1; i++)
            cin >> A[i];
        for (int i = 0; i < n2; i++)
            cin >> B[i];
        for (int i = 0; i < n3; i++)
            cin >> C[i];

        Solution ob;

        vector<int> res = ob.commonElements(A, B, C, n1, n2, n3);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends