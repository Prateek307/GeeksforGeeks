//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
        int cnt = 1,i;
        set<int> st;
        for(i=0;i<n;i++)
        st.insert(arr[i]);
        vector<int> v;
        for(auto it : st)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i]>=1 && v[i]==cnt)
            {
                cnt++;
            } 
            else if(v[i]>=1 && v[i]!=cnt)
            return cnt;
        }
        return cnt;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends