// link to the problem ---> https://www.geeksforgeeks.org/problems/reverse-a-string-using-stack/1?page=3&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
char *reverse(char *str, int len);
int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        char str[10000];
        cin >> str;
        long long int len = strlen(str);
        char *ch = reverse(str, len);
        for (int i = 0; i < len; i++)
        {
            cout << ch[i];
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// return the address of the string
char *reverse(char *S, int len)
{
    // code here
    char *ans = new char[len + 1];
    stack<char> st;
    int i;
    for (i = 0; i < len; i++)
        st.push(S[i]);
    i = 0;
    while (!st.empty())
    {
        ans[i++] = st.top();
        st.pop();
    }
    ans[i] = '\0';
    return ans;
}