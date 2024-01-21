//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        int i = 0 , lastPushedValue = 0;
        vector<int> dup;
        for(i=0;i<n;i++)
        {
            int index = arr[i]%n;
            arr[index]+=n;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]/n>=2)
            dup.push_back(i);
        }
        return (dup.size()==0)?vector<int>{-1}:dup;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends