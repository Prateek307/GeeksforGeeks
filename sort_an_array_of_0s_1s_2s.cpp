//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int i = 0;
        int zero = 0, one = 0, two = 0;
        for (i = 0; i < n; i++)
        {
            if (a[i] == 0)
                zero++;
            if (a[i] == 1)
                one++;
            if (a[i] == 2)
                two++;
        }
        i = 0;
        while (i < n)
        {
            if (zero > 0)
            {
                zero--;
                a[i] = 0;
                i++;
                continue;
            }
            if (one > 0)
            {
                one--;
                a[i] = 1;
                i++;
                continue;
            }
            if (two > 0)
            {
                two--;
                a[i] = 2;
                i++;
                continue;
            }
        }
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
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends