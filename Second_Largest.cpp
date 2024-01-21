//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    // Function returns the second
    // largest elements
    int print2largest(int arr[], int n)
    {
        // code here
        set<int> st;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            st.insert(arr[i]);
        }

        set<int>::reverse_iterator it;
        int val;
        int cnt = 0;
        if (st.size() >= 2)
        {
            for (it = st.rbegin(); it != st.rend(); it++)
            {
                val = *it;
                cnt++;
                if (cnt == 2)
                    break;
            }
            return val;
        }
        return -1;
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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends