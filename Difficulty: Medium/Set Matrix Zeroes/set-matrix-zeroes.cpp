//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        unordered_set<int>row;
        unordered_set<int>col;
        int len1=mat.size();
        int len2=mat[0].size();
        for(int i=0;i<len1;i++)
        {
            for(int j=0;j<len2;j++)
            {
                if(mat[i][j]==0)
                {
                   row.insert(i);
                   col.insert(j);
                }
            }
        }
        for(auto i:row)
        {
            for(int k=0;k<len2;k++)
            {
                mat[i][k]=0;
            }
        }
        for(auto i:col)
        {
            for(int k=0;k<len1;k++)
            {
                mat[k][i]=0;
            }
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends