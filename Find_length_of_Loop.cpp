// link to the problem ---> https://www.geeksforgeeks.org/problems/find-length-of-loop/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

void printList(Node *node)
{
  while (node != NULL)
  {
    cout << node->data << " ";
    node = node->next;
  }
  cout << "\n";
}

void loopHere(Node *head, Node *tail, int position)
{
  if (position == 0)
    return;

  Node *walk = head;
  for (int i = 1; i < position; i++)
    walk = walk->next;
  tail->next = walk;
}

// } Driver Code Ends
/*

struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution
{
public:
  // Function to find the length of a loop in the linked list.

  int countNodes(Node *slow)
  {
    int len = 0;
    Node *curr = slow;
    do
    {
      len++;
      curr = curr->next;
    } while (curr != slow);

    return len;
  }

  int countNodesinLoop(Node *head)
  {
    // Code here
    int length = 0;
    Node *fast = head;
    Node *slow = head;
    while (fast && fast->next)
    {
      slow = slow->next;
      fast = fast->next->next;
      length++;
      if (slow == fast)
        return countNodes(slow);
    }
    return 0;
  }
};

//{ Driver Code Starts.

int main()
{
  int t;
  cin >> t;
  cin.ignore();
  while (t--)
  {
    vector<int> arr;
    string input;
    getline(cin, input);
    stringstream ss(input);
    int number;
    while (ss >> number)
    {
      arr.push_back(number);
    }
    int k;
    cin >> k;
    cin.ignore();
    struct Node *head = new Node(arr[0]);
    struct Node *tail = head;
    for (int i = 1; i < arr.size(); ++i)
    {
      tail->next = new Node(arr[i]);
      tail = tail->next;
    }
    loopHere(head, tail, k);

    Solution ob;
    cout << ob.countNodesinLoop(head) << endl;
  }
  return 0;
}

// } Driver Code Ends