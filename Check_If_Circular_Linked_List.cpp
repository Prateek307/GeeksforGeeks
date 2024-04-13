// link to the problem ---> https://www.geeksforgeeks.org/problems/circular-linked-list/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
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

/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);

/* Driver program to test above function*/
int main()
{
    int T, i, n, l, k;

    cin >> T;

    while (T--)
    {

        cin >> n >> k;
        Node *head = NULL, *tail = NULL;
        int x;
        cin >> x;
        head = new Node(x);
        tail = head;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x;
            tail->next = new Node(x);
            tail = tail->next;
        }
        if (k == 1 && n >= 1)
            tail->next = head;

        printf("%d\n", isCircular(head));
    }
    return 0;
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

bool Circular(Node *head)
{

    if (head == NULL)
        return 1;

    Node *temp;
    temp = head->next;
    while (temp != NULL && temp != head)
    {
        temp = temp->next;
    }

    if (temp == head)
        return 1;
    return 0;
}
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    // Your code here
    return ((Circular(head) == 1) ? 1 : 0);
}
