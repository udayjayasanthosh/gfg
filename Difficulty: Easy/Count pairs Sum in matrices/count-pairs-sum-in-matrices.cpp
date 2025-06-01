class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
        // code here
        int ans=0;
        unordered_set<int>mp;
        for(auto i:mat1)
        {
            for(auto j:i)
            {
                mp.insert(j);
            }
        }
        for(auto i:mat2)
        {
            for(auto j:i)
            {
                if(mp.find(x-j)!=mp.end())
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};