// link to the problem ---> https://www.geeksforgeeks.org/problems/word-break1352/1

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// s : given string to search
// dictionary : vector of available strings

class Solution
{
public:
    int solve(int index, string s, set<string> st)
    {
        if (index == s.size())
            return 1;

        int i;
        string temp;
        for (i = index; i < s.size(); i++)
        {
            temp += s[i];
            if (st.find(temp) != st.end())
            {
                if (solve(i + 1, s, st))
                    return 1;
            }
        }
        return 0;
    }

    int wordBreak(int n, string s, vector<string> &dictionary)
    {
        // code here
        set<string> st;
        int i;
        for (i = 0; i < n; i++)
            st.insert(dictionary[i]);
        return solve(0, s, st);
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
        vector<string> dictionary;
        for (int i = 0; i < n; i++)
        {
            string S;
            cin >> S;
            dictionary.push_back(S);
        }
        string s;
        cin >> s;
        Solution ob;
        cout << ob.wordBreak(n, s, dictionary) << "\n";
    }
}

// } Driver Code Ends