//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        unordered_set<char>s;
        int count=0;
        for(auto i:str)
        {
            if(i!=' ')
            {
            s.insert(i);
            count++;
            // cout<<i;
            }
        }
        if(count<26)
        {
            return false;
        }
        else if(26-s.size()<=k)
        {
            return true;
        }
        return false;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends