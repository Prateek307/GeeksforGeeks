// link to the problem ---> https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty=Medium&sortBy=submissions


//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        int i,sum = 0, low = 0 , high = 0;
        bool found = false;
        vector<int> ans;
        if(s==0 && arr[0]==0)
        {
            ans.push_back(1);
            ans.push_back(1);
            return ans;
        }
        if(s==0)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[j]==0)
                {
                    ans.push_back(1);
                    ans.push_back(1);
                    return ans;
                }
            }
             ans.push_back(-1);
             return ans;
        }
        for(i=0;i<n;i++)
        {
            sum+=arr[i];
            
            if(sum>=s)
            {
                high = i;
                while(s<sum && low<n)
                {
                    sum-=arr[low++];
                }
            }
            
            if(sum==s)
            {
                ans.push_back(low+1);
                ans.push_back(high+1);
                found = true;
                break;
            }
        }
        if(found==true)
        {
        return ans;
        }
        ans.push_back(-1);
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends