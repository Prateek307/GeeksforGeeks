// link to the problem ---> https://www.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
  // Function to reverse words in a given string.
  string reverseWords(string S)
  {
    // code here
    int n = S.size(), i = n - 1;
    string s = S, temp, res;
    while (i >= 0)
    {
      if (s[i] != '.')
      {
        temp.push_back(s[i]);
      }
      else
      {
        reverse(temp.begin(), temp.end());
        res += temp;
        res.push_back('.');
        temp.clear();
      }
      i--;
    }
    reverse(temp.begin(), temp.end());
    res += temp;
    return res;
  }
};

//{ Driver Code Starts.
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.reverseWords(s) << endl;
  }
}
// } Driver Code Ends