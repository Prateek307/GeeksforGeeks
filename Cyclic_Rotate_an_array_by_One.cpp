// link to the problem ----> https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n);

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n], i;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        rotate(a, n);
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

void rotate(int arr[], int n)
{
    int temp;
    int i;
    temp = arr[n - 1];
    for (i = n; i > 0; --i)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}