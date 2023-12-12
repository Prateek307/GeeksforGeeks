// link to the problem ---> https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&sprint=a663236c31453b969852f9ea22507634&sortBy=submissions


//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        int last_lead = 0;
        vector<int> ans;
        int i;
        for(i=n-1;i>=0;--i)
        {
            if(a[i]>=last_lead)
            {
                ans.push_back(a[i]);
                last_lead = a[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

// } Driver Code Ends