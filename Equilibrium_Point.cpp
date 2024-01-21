//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        int i = 0;
        int leftSum[n];
        int rightSum[n];
        for(i=0;i<n;i++)
        {
            if(i==0)
            leftSum[i] = a[i];
            else
            leftSum[i] = a[i]+leftSum[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            if(i==n-1)
            rightSum[i] = a[i];
            else
            rightSum[i] = a[i]+rightSum[i+1];
        }
        for(i=0;i<n;i++)
        {
            if(leftSum[i]==rightSum[i])
            return i+1;
        }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends