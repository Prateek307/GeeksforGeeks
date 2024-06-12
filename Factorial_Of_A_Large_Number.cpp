// link to the problem ---> https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    static const int MAX = 1000000;

    int multiply(int x, int res_size, int res[])
    {
        int i, carry = 0;
        for (i = 0; i < res_size; i++)
        {
            int pro = res[i] * x + carry;
            res[i] = pro % 10;
            carry = pro / 10;
        }
        while (carry)
        {
            res[res_size] = carry % 10;
            carry = carry / 10;
            res_size++;
        }
        return res_size;
    }

    vector<int> factorial(int N)
    {
        // code here
        int n = N, x, i, res_size = 1, res[MAX];
        res[0] = 1;

        for (x = 2; x <= n; x++)
        {
            res_size = multiply(x, res_size, res);
        }

        vector<int> ans;
        for (i = res_size - 1; i >= 0; i--)
            ans.push_back(res[i]);
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
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i)
        {
            cout << result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends