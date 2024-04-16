// link to the problem ---> https://www.geeksforgeeks.org/problems/remove-all-duplicates-from-a-given-string4321/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    string removeDuplicates(string str)
    {
        // code here
        int i = 0;
        string s = str, ans;
        map<char, int> m;
        while (s[i] != '\0')
        {
            if (m.find(s[i]) != m.end())
                i++;
            else
            {
                m[s[i]]++;
                ans.push_back(s[i]);
                i++;
            }
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
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends