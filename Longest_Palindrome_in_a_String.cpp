// link to the problem ---> https://www.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
  string longestPalin(string S)
  {
    // code here
    int n = S.size(), i;
    string s = S, palindrome, ans = "";

    int low, high;
    for (i = 0; i < n; i++)
    {
      low = i;
      high = i;
      while (s[low] == s[high])
      {
        low--;
        high++;
        if (low == -1 || high == n)
          break;
      }

      palindrome = s.substr(low + 1, high - low - 1);
      if (palindrome.size() > ans.size())
        ans = palindrome;

      low = i - 1;
      high = i;
      while (s[low] == s[high])
      {
        low--;
        high++;
        if (low == -1 || high == n)
          break;
      }

      palindrome = s.substr(low + 1, high - low - 1);
      if (palindrome.size() > ans.size())
        ans = palindrome;
    }
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
    string S;
    cin >> S;

    Solution ob;
    cout << ob.longestPalin(S) << endl;
  }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends