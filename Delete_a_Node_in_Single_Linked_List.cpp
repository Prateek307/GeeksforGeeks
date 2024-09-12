// link to the problem ---> https://www.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

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

  // Function to delete the head node
  Node *DeleteAtStart(Node *head)
  {
    if (head == nullptr)
    {
      cout << "The Linked List is empty\n";
    }
    else
    {
      Node *curr = head;
      head = curr->next;
      delete (curr);
    }
    return head;
  }

  // Function to delete the last node
  Node *DeleteAtEnd(Node *head)
  {
    if (head == nullptr)
    {
      cout << "The Linked List is empty\n";
    }
    else if (head->next == nullptr)
    {
      delete (head);
      head = nullptr;
    }
    else
    {
      Node *curr = head;
      Node *prev = nullptr;
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

  // Function to delete a node at a given position (1-based index)
  Node *DeleteElement(Node *head, int position)
  {
    // Edge case: If position is 1, delete the head
    if (position == 1)
    {
      return DeleteAtStart(head);
    }

    Node *temp = head;
    Node *prev = nullptr;

    // Move to the node just before the position
    for (int i = 1; i < position - 1 && temp != nullptr; i++)
    {
      temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr)
    {
      cout << "Position out of bounds\n";
      return head;
    }

    // Delete the node at the position
    Node *toDelete = temp->next;
    temp->next = toDelete->next;
    delete (toDelete);

    return head;
  }
  Node *deleteNode(Node *head, int x)
  {
    // cdoe here

    if (head == nullptr)
      return head;

    head = DeleteElement(head, x);
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