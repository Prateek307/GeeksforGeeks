// link to the problem ---> https://www.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
// Initial Template for C++
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

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution
{
public:
  int length(Node *head)
  {
    int len = 0;
    Node *curr = head;
    while (curr)
    {
      curr = curr->next;
      len++;
    }
    return len;
  }

  int findPos(Node *head, int pos)
  {
    Node *curr = head;
    pos = (length(head) - pos) + 1;
    while (pos - 1)
    {
      curr = curr->next;
      pos--;
    }
    return curr->data;
  }

  int getKthFromLast(Node *head, int k)
  {
    // Your code here

    if (head == nullptr)
      return -1;

    if (k > length(head) || k < 1)
      return -1;

    return findPos(head, k);
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

    // Read numbers from the input line
    while (ss >> number)
    {
      arr.push_back(number);
    }

    int x;
    cin >> x;
    cin.ignore();

    Node *head = nullptr;

    // Check if the array is empty
    if (!arr.empty())
    {
      head = new Node(arr[0]);
      Node *tail = head;
      for (size_t i = 1; i < arr.size(); ++i)
      {
        tail->next = new Node(arr[i]);
        tail = tail->next;
      }
    }

    Solution ob;
    cout << ob.getKthFromLast(head, x) << endl;
  }
  return 0;
}
// } Driver Code Ends