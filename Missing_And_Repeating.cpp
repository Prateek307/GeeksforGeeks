// link to the problem ---> https://www.geeksforgeeks.org/problems/find-missing-and-repeating2512/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
  vector<int> findTwoElement(vector<int> arr, int n)
  {
    // code here
    vector<int> a;
    a = arr;
    long long SN = (long long)(n * (n + 1)) / 2;
    long long S2N = (long long)(n * (n + 1) * (2 * n + 1)) / 6;

    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++)
    {
      S += (long long)a[i];
      S2 += (long long)a[i] * (long long)a[i];
    }

    long long val1 = S - SN;   // X - Y
    long long val2 = S2 - S2N; // X^2 - Y^2

    // X + Y = val2 / val1
    long long sumXY = val2 / val1;

    // X = (sumXY + val1) / 2
    long long X = (sumXY + val1) / 2;

    // Y = X - val1
    long long Y = X - val1;

    return {(int)X, (int)Y};
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    Solution ob;
    auto ans = ob.findTwoElement(a, n);
    cout << ans[0] << " " << ans[1] << "\n";
  }
  return 0;
}
// } Driver Code Ends