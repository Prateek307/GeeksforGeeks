//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find if there exists a triplet in the
    // array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        sort(A, A + n); // Step 1: Sort the array

        for (int i = 0; i < n - 2; i++)
        {
            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int curr_sum = A[i] + A[left] + A[right];

                if (curr_sum == X) // Step 4: Check if current sum equals X
                    return true;
                else if (curr_sum < X) // Move left pointer to increase sum
                    left++;
                else // Move right pointer to decrease sum
                    right--;
            }
        }

        return false; // No triplet found
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends