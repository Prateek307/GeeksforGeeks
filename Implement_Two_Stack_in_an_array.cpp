// link to the problem ---> https://www.geeksforgeeks.org/problems/implement-two-stacks-in-an-array/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class twoStacks
{
    int *arr;
    int size;
    int top1, top2;

public:
    twoStacks(int n = 100)
    {
        size = n;
        arr = new int[n];
        top1 = -1;
        top2 = size;
    }

    // Function to push an integer into the stack1.
    void push1(int x)
    {
        // if there is space between the top of both stacks
        // we push the element at top1+1.
        if (top1 < top2 - 1)
        {
            top1++;
            arr[top1] = x;
        }
    }
    // Function to push an integer into the stack2.
    void push2(int x)
    {
        // if there is space between the top of both stacks
        // we push the element at top2-1.
        if (top1 < top2 - 1)
        {
            top2--;
            arr[top2] = x;
        }
    }
    // Function to remove an element from top of the stack1.
    int pop1()
    {
        // if top1==-1, stack1 is empty so we return -1 else we
        // return the top element of stack1.
        if (top1 >= 0)
        {
            int x = arr[top1];
            top1--;
            return x;
        }
        else
            return -1;
    }
    // Function to remove an element from top of the stack2.
    int pop2()
    {
        // if top2==size of array, stack2 is empty so we return -1 else we
        // return the top element of stack2.
        if (top2 < size)
        {
            int x = arr[top2];
            top2++;
            return x;
        }
        else
            return -1;
    }
};

//{ Driver Code Starts.

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        twoStacks *sq = new twoStacks();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int stack_no;
            cin >> stack_no;
            int QueryType = 0;
            cin >> QueryType;

            if (QueryType == 1)
            {
                int a;
                cin >> a;
                if (stack_no == 1)
                    sq->push1(a);
                else if (stack_no == 2)
                    sq->push2(a);
            }
            else if (QueryType == 2)
            {
                if (stack_no == 1)
                    cout << sq->pop1() << " ";
                else if (stack_no == 2)
                    cout << sq->pop2() << " ";
            }
        }
        cout << endl;
    }
}

// } Driver Code Ends