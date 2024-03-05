//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    // map<int,vector<int>>v;
    // unordered_map<int,vector<int>>mp;
    // void bfs(vector<int>a,int level)
    // {
    //     for(auto i:a)
    //     {
    //         v[level].push_back(i);
    //     }
    //     for(auto i:a)
    //     {
    //         vector<int>k=mp[i];
    //         auto it=mp.find(i);
    //         mp.erase(it);
    //         bfs(k,level+1);
    //     }
    // }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        // vector<int>h;
        // for(int i=0;i<V;i++)
        // {
        //     for(auto j:adj[i])
        //     {
        //     mp[i].push_back(j);
        //     }
        // }
        // vector<int>b;
        // b=mp[0];
        // auto it=mp.find(0);
        // mp.erase(it);
        // bfs(b,0);
        // h.push_back(0);
        // for(auto i:v)
        // {
        //     for(auto j:i.second)
        //     {
        //         if(find(h.begin(),h.end(),j)==h.end())
        //         h.push_back(j);
        //     }
        // }
        // return h;
        vector<int>res;
        queue<int>q;
        q.push(0);
        vector<int>vis(V,0);
        vis[0]=1;
        while(!q.empty()){
            int top=q.front();
            q.pop();
            res.push_back(top);
            for (auto it:adj[top]){
                if (!vis[it])q.push(it);
                vis[it]=1;
            }
            
        }
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends