// link to the problem ---> https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&difficulty=School&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;

// } Driver Code Ends
/*Complete the function below*/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int i, n = s.size();
        for (i = 0; i < s.size() / 2; i++)
        {
            if (s[i] != s[n - i - 1])
                return false;
        }
        return true;
    }
    int PalinArray(int a[], int n)
    {
        // code here
        int i;
        for (i = 0; i < n; i++)
        {
            string s = to_string(a[i]);
            if (!isPalindrome(s))
                return 0;
        }
        return 1;
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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.PalinArray(a, n) << endl;
    }
}
// } Driver Code Ends