// link to the problem ---> https://www.geeksforgeeks.org/problems/bit-difference-1587115620/1//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        // Your logic here
        int xorVal = a ^ b;
        int cnt = 0;
        while (xorVal)
        {
            cnt += xorVal & 1;
            xorVal >>= 1;
        }
        return cnt;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;   // input the testcases
    while (t--) // while testcases exist
    {
        int a, b;
        cin >> a >> b; // input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
}
// } Driver Code Ends