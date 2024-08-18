// link to the problem ---> https://www.geeksforgeeks.org/problems/convert-to-roman-no/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        
        int nums[13] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string sym[13] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        
        
        int val = 0,i = 12;
        string ans= "";
        while(n)
        {
             val = n/nums[i];
             while(val>0)
             { 
                 ans+=sym[i];
                 n-=nums[i];
                 val--;
             }
             i--;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}
// } Driver Code Ends