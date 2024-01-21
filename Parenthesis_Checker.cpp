//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        string  s = x;
        stack<char> stk;
        int i = 0;
        while(i<s.size())
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            stk.push(s[i]);
            
            else
            {
                if(stk.empty())
                return 0;
                
                if((s[i]==')' && stk.top()=='(') || (s[i]=='}' && stk.top()=='{') || (s[i]==']' && stk.top()=='['))
                stk.pop();
                 
                else
                return 0;
            }
            ++i;
        }
        if(stk.empty())
        return 1;
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends