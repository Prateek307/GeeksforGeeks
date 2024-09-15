// link to the problem --->https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//{ Driver Code Starts
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

/* Link list Node */
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

void print(Node *root)
{
  Node *temp = root;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
}

// } Driver Code Ends
/* Link list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
public:
  /* Function to delete a node from a linked list */
  int length(Node *head)
  {
    Node *curr = head;
    int len = 0;
    while (curr)
    {
      len++;
      curr = curr->next;
    }
    return len;
  }

  Node *DeleteAtStart(Node *head)
  {
    if (head == nullptr)
      return head;

    else
    {
      Node *curr = head;
      head = curr->next;
      delete (curr);
    }
    return head;
  }

  Node *DeleteAtEnd(Node *head)
  {
    if (head == nullptr)
      return head;

    else if (head->next == nullptr)
    {
      delete (head);
      head = nullptr;
    }

    else
    {
      Node *curr = head;
      Node *prev;
      while (curr->next)
      {
        prev = curr;
        curr = curr->next;
      }
      prev->next = nullptr;
      delete (curr);
    }
    return head;
  }

  Node *DeleteElement(Node *head, int position)
  {
    Node *temp = head;
    Node *curr;
    while (position - 1)
    {
      curr = temp;
      temp = temp->next;
      position--;
    }

    curr->next = temp->next;
    delete (temp);
    return head;
  }

  Node *deleteNode(Node *head, int x)
  {
    // cdoe here

    int position = x;
    if (head == nullptr)
      return head;

    if (position == 1)
    {
      head = DeleteAtStart(head);
    }
    else if (position == length(head))
    {
      head = DeleteAtEnd(head);
    }
    else
    {
      head = DeleteElement(head, position);
    }
    return head;
  }
};

//{ Driver Code Starts.

/* Driver program to test above function */
int main()
{
  int T;
  cin >> T;
  cin.ignore(); // Clear newline character after T input

  while (T--)
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

    if (arr.empty())
    {
      cout << -1 << endl;
      continue;
    }

    int data = arr[0];
    Node *head = new Node(data);
    Node *tail = head;

    for (int i = 1; i < arr.size(); ++i)
    {
      data = arr[i];
      tail->next = new Node(data);
      tail = tail->next;
    }

    int k;
    cin >> k;
    cin.ignore(); // Clear newline character after k input

    Solution ob;
    Node *result = ob.deleteNode(head, k);
    print(result);
    cout << endl;

    // Clean up memory to prevent memory leaks
    while (result != NULL)
    {
      Node *temp = result;
      result = result->next;
      delete temp;
    }
  }

  return 0;
}

// } Driver Code Ends