//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        map<char,int>mp;
        vector<int>v;
        int help=0;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
        for(auto i:mp)
        {
            v.push_back(i.second);
        }
        int a=v.size();
        for(int i=0;i<k;i++)
        {
            sort(v.begin(),v.end());
            v[a-1]=v[a-1]-1;
        }
        for(int i=0;i<v.size();i++)
        {
            help=help+pow(v[i],2);
        }
        return help;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends