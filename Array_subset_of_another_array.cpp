// link to the problem -->https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1?page=1&sprint=a663236c31453b969852f9ea22507634&sortBy=submissions

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
    map<int,int> m1;
    map<int,int> m2;
    int i;
    for(i=0;i<n;i++)
    {
        m1[a1[i]]++;
    }
    bool flag = 0;
    for(i=0;i<m;i++)
    {
        m2[a2[i]]++;
    }
    for(i=0;i<m;i++)
    {
        auto it = m1.find(a2[i]);
        if(it==m1.end())
        {
            flag = 1;
            break;
        }
        else if(it!=m1.end() && m1[a2[i]]<m2[a2[i]])
        {
            flag = 1;
            break;
        }
    }
    if(flag)
    return "No";
    return "Yes";
}