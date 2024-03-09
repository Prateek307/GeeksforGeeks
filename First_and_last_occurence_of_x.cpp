// link to the problem ---> https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1?page=2&difficulty=Medium&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;
int find_the_element(int arr[], int n, int x)
{
    int low = 0, high = n - 1, mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    sort(arr, arr + n);
    int x;
    cin >> x;
    int i;
    for (i = 0; i < n; i++)
        cin >> arr[i];
    int index = find_the_element(arr, n, x);
    if (index != -1)
    {
        int first = index, last = index;
        while (arr[first] == x)
            first--;
        while (arr[last] == x)
            last++;
        cout << first + 1 << " " << last - 1 << '\n';
    }
    else
        cout << "-1 -1\n";
    return 0;
}