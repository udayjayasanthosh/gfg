class Solution {
  public:
    int vowelCount(string& s) {
        // code here
        unordered_map<int,int>mp;
        for(auto i:s)
        {
            if(i=='a'|| i=='e' || i=='i' || i=='o' || i=='u')
            {
                mp[i]++;
            }
        }
        int ans=0;
        if(mp.size()>0)
        {
            ans=1;
            for(int i=2;i<=mp.size();i++)
            {
                ans*=i;
            }
        }
        for(auto i:mp)
        {
            ans*=i.second;
        }
        return ans;
    }
};