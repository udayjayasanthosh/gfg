//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        string s="";
        while(x>0)
        {
            if(x&1==1)
            {
                s+='1';
            }
            else
            {
                s+='0';
            }
            x=x>>1;
        }
        int a=s.size();
        while(a!=32)
        {
            s=s+'0';
            a++;
        }
        long long h=0;
        long long base=1;
        for(int i=31;i>=0;i--)
        {
            if(s[i]=='1')
            {
                h+=base;
            }
            base=base*2;
        }
        return h;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends