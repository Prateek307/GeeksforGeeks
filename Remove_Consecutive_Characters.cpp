// link to the problem ---> https://www.geeksforgeeks.org/problems/consecutive-elements2306/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        int i, n = S.size();
        string s = S;
        for (i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
                s[i - 1] = '*';
        }
        string temp;
        for (i = 0; i < n; i++)
        {
            if (s[i] != '*')
                temp.push_back(s[i]);
        }
        return temp;
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
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;
    }
}

// } Driver Code Ends