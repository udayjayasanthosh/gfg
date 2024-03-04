//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    unordered_map<int,vector<int>>mp;
    vector<int>m;
    void dfs(vector<int>a)
    {
        for(int i=0;i<a.size();i++)
        {
            if(mp.find(a[i])!=mp.end())
            {
            m.push_back(a[i]);
            vector<int>b=mp[a[i]];
            auto it=mp.find(a[i]);
            mp.erase(it);
            dfs(b);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int>v;
        for(int i=0;i<V;i++)
        {
            for(auto j: adj[i])
            {
                mp[i].push_back(j);
            }
        }
        m.push_back(0);
        vector<int>b=mp[0];
        auto it=mp.find(0);
        mp.erase(it);
        dfs(b);
        return m;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends