// link to the problem ---> https://www.geeksforgeeks.org/problems/find-pairs-with-given-sum-in-doubly-linked-list/0

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next, *prev;
  Node(int val) : data(val), next(NULL), prev(NULL)
  {
  }
};

// } Driver Code Ends
// User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
  vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
  {
    // code here
    Node *low = head;
    Node *high = head;
    vector<pair<int, int>> v;

    while (high->next)
      high = high->next;

    while (low->data < high->data)
    {
      int sum = low->data + high->data;
      if (sum == target)
      {
        v.push_back(make_pair(low->data, high->data));
        low = low->next;
        high = high->prev;
      }
      else if (sum < target)
      {
        low = low->next;
      }
      else
        high = high->prev;
    }
    return v;
  }
};

//{ Driver Code Starts.

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, target;
    cin >> target >> n;
    int a;
    cin >> a;
    Node *head = new Node(a);
    Node *tail = head;
    for (int i = 0; i < n - 1; i++)
    {
      cin >> a;
      tail->next = new Node(a);
      tail->next->prev = tail;
      tail = tail->next;
    }
    Solution ob;
    auto ans = ob.findPairsWithGivenSum(head, target);
    if (ans.size() == 0)
      cout << "-1";
    else
    {
      for (int i = 0; i < ans.size(); i++)
      {
        cout << "(" << ans[i].first << "," << ans[i].second << ")"
             << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}

// } Driver Code Ends