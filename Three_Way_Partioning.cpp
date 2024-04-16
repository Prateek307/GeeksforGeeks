// link to the problem ---> https://www.geeksforgeeks.org/problems/three-way-partitioning/1?page=1&difficulty=School,Basic,Easy&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int> &array, int a, int b)
    {
        // code here
        vector<int> first, second, third;
        int i, n = array.size();
        array.clear();
        for (i = 0; i < n; i++)
        {
            if (array[i] < a)
                first.push_back(array[i]);
            else if (array[i] >= a && array[i] <= b)
                second.push_back(array[i]);
            else if (array[i] > b)
                third.push_back(array[i]);
        }

        int index = 0;
        for (i = 0; i < first.size(); i++)
            array[index++] = first[i];

        for (i = 0; i < second.size(); i++)
            array[index++] = second[i];

        for (i = 0; i < third.size(); i++)
            array[index++] = third[i];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> array(N);
        unordered_map<int, int> ump;

        for (int i = 0; i < N; i++)
        {
            cin >> array[i];
            ump[array[i]]++;
        }

        int a, b;
        cin >> a >> b;

        vector<int> original = array;

        int k1 = 0, k2 = 0, k3 = 0;
        int kk1 = 0;
        int kk2 = 0;
        int kk3 = 0;

        for (int i = 0; i < N; i++)
        {
            if (original[i] > b)
                k3++;
            else if (original[i] <= b and original[i] >= a)
                k2++;
            else if (original[i] < b)
                k1++;
        }

        Solution ob;
        ob.threeWayPartition(array, a, b);

        for (int i = 0; i < k1; i++)
        {
            if (array[i] < b)
                kk1++;
        }

        for (int i = k1; i < k1 + k2; i++)
        {
            if (array[i] <= b and array[i] >= a)
                kk2++;
        }

        for (int i = k1 + k2; i < k1 + k2 + k3; i++)
        {
            if (array[i] > b)
                kk3++;
        }
        bool ok = 0;
        if (k1 == kk1 and k2 == kk2 and k3 == kk3)
            ok = 1;

        for (int i = 0; i < array.size(); i++)
            ump[array[i]]--;

        for (int i = 0; i < array.size(); i++)
            if (ump[array[i]] != 0)
                ok = 0;

        if (ok)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}

// } Driver Code Ends