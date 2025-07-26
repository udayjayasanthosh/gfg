class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int a=arr.size()/3;
        vector<int>ans;
        map<int,int>mp;
        for(auto i:arr)
        {
            mp[i]++;
        }
        for(auto i:mp)
        {
            if(i.second>a)
            {
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};