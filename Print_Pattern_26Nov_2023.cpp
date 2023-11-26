// problem of the day 26 november 2023
// Link to the problem
//  https://www.geeksforgeeks.org/problems/print-pattern3549/1

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void solve1(int n, vector<int> &ans)
{
    if (n > 0)
    {
        ans.push_back(n);
        solve1(n - 5, ans);
    }
    ans.push_back(n);
    return;
}
    vector<int> pattern(int N){
    // code here
    vector<int> ans;
    solve1(N, ans);
    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends