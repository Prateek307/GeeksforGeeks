// link to the problem ---> https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

// ------------------------------------------------------------------------------
// LOGIC

// it involves three important steps for any number of disks

// move n-1 from A to B using C
// move a disk from A to C
// move n-1 disk from B to C using A

// ------------------------------------------------------------------------------

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{
public:
  // You need to complete this function

  // avoid space at the starting of the string in "move disk....."

  long long solve(int n, int A, int B, int C, long long &cnt)
  {
    if (n > 0)
    {
      solve(n - 1, A, C, B, cnt);
      cout << "move disk " << n << " from rod " << A << " to rod " << C << "\n";
      cnt++;
      solve(n - 1, B, A, C, cnt);
    }
    return cnt;
  }

  long long toh(int n, int from, int to, int aux)
  {
    // Your code here
    long long cnt = 0;
    return solve(n, from, aux, to, cnt);
  }
};

//{ Driver Code Starts.

int main()
{

  int T;
  cin >> T; // testcases
  while (T--)
  {

    int N;
    cin >> N; // taking input N

    // calling toh() function
    Solution ob;

    cout << ob.toh(N, 1, 3, 2) << endl;
  }
  return 0;
}

// } Driver Code Ends