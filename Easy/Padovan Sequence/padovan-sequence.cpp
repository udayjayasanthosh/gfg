//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    // 
    // int p(int n,vector<int>&mp)
    // {
    //   if(n<=2)
    //   return 1;
    //   int a,b;
    //   if(mp[n-2]==-1)
    //   {
    //   a=p(n-2,mp);
    //   mp[n-2]=a;
    //   }
    //   else
    //   a=mp[n-2];
    //   if(mp[n-3]==-1)
    //   {
    //   b=p(n-3,mp);
    //   mp[n-3]=b;
    //   }
    //   else
    //   b=mp[n-3];
    //   return (a+b)%mod;
    // }
    int padovanSequence(int n)
    {
       //code here
       int mod=1000000007;
      if(n<=2)
      return 1;
      int c=0;
      int one=1;
       int two=1;
        int three=1;
      for(int i=3;i<=n;i++)
      {
          c=(three+two)%mod;
          int d=one;
          int e=two;
          one=c;
          two=d;
          three=e;
      }
      return c%mod;
    }
    
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.padovanSequence(n) << endl;
    }
    return 0;
}
// } Driver Code Ends