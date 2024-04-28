// link to the problem ---> https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1?page=1&category=Strings&difficulty=Easy&status=unsolved&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {

        // Your code here
        if (str1.size() != str2.size())
        {
            return false;
        }

        map<char, char> mp;

        for (int i = 0; i < str1.size(); i++)
        {
            if (mp.find(str1[i]) != mp.end())
            {
                if (mp[str1[i]] != str2[i])
                {
                    return false;
                }
            }
            else
            {

                for (const auto &pair : mp)
                {
                    if (pair.second == str2[i])
                    {
                        return false;
                    }
                }
                mp[str1[i]] = str2[i];
            }
        }

        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        Solution obj;
        cout << obj.areIsomorphic(s1, s2) << endl;
    }

    return 0;
}
// } Driver Code Ends