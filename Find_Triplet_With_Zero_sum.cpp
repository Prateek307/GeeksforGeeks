//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        map<int,int> m;
        int i,j;
        for(i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
    
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int sum = 0-(arr[i] + arr[j]);
                if(m.find(sum)!=m.end() && sum!=arr[i] && sum!=arr[j])
                return 1;
                
                 if (m.find(sum) != m.end() && sum == arr[i])
                {
                    if (arr[i] == arr[j] && m[arr[i]] > 2)
                        return 1;

                    if (arr[i] != arr[j] && m[arr[i]] > 1)
                        return 1;
                }

                if (m.find(sum) != m.end() && sum == arr[j])
                {
                    if (arr[j] == arr[i] && m[arr[j]] > 2)
                        return 1;

                    if (arr[i] != arr[j] && m[arr[j]] > 1)
                        return 1;
                }
               
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends