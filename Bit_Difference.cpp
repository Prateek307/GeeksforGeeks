// link to the problem ---> https://www.geeksforgeeks.org/problems/bit-difference-1587115620/1?page=1&difficulty=Basic&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

string convert_to_binary(int n)
{
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    string s;
    int i;
    for (i = 0; i < v.size(); i++)
    {
        s.push_back(v[i] + '0');
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    int a, b;
    cin >> a >> b;
    string s1 = convert_to_binary(a);
    string s2 = convert_to_binary(b);

    if (s1.size() < s2.size())
    {
        int n = s1.size();
        int m = s2.size();
        int diff = abs(n - m);
        string temp;
        int i;
        for (i = 0; i < diff; i++)
            temp.push_back('0');
        string temp2 = s1;
        s1 = temp;
        s1 += temp2;
    }
    else if (s1.size() > s2.size())
    {
        int n = s1.size();
        int m = s2.size();
        int diff = abs(n - m);
        string temp;
        int i;
        for (i = 0; i < diff; i++)
            temp.push_back('0');
        string temp2 = s2;
        s2 = temp;
        s2 += temp2;
    }


    int cnt = 0 , i = 0;
    while(i<s1.size())
    { 
        if(s1[i]!=s2[i])
        cnt++;
        i++;
    }
    cout<<cnt<<'\n';
    return 0;
}