// link to the problem ---> https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1?page=1&difficulty=Medium&status=unsolved&sortBy=submissions

//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        vector<int> v = A,subsum(n);
        map<int,int> m;
        int i;
        subsum[0] = v[0];
        for(i=1;i<n;i++)
        subsum[i] = v[i] + subsum[i-1];
        
        int len = 0;
        for(i=0;i<n;i++)
        {
            
            if(subsum[i]==0)
            len = i + 1;
            
            if(m.find(subsum[i])!=m.end())
            {
                len = max(len,i-m[subsum[i]]);
            }
            else
            m[subsum[i]] = i;
        }
        return (len==INT_MIN)?0:len;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends