//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isMaxHeap(int arr[], int n)
    {
        // Your code goes
        int c=1;
        if(n==1)return 1;
        if(n==2 && arr[0]>arr[1])return 1;
        int i=0;
        while(2*i+1<n || 2*i+2<n)
        {
            int x=0,y=0;
            if(2*i+1<n)
            {
                y=arr[2*i+1];
            }
            if(2*i+2<n)
            {
                x=arr[2*i+2];
            }
            if(x>arr[i])
            c=0;
            if(y>arr[i])
            c=0;
            i++;
        }
        if(c==0)
        {
            return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
       int n;
       cin >> n;
       int a[4*n]={0};
       for(int i =0;i<n;i++){
           cin >> a[i];
       }
       Solution ob;
       cout<<ob.isMaxHeap(a, n)<<endl;
        
    }
    return 0;
}

// } Driver Code Ends