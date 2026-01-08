class Solution {
  public:
    int countSubarrays(vector<int>& arr, int k) {
        int prev=0;
        int ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            prev+= arr[i]%2==0 ? 0:1;
            if(prev==k)
            ans+=1;
            ans+=mp[prev-k];
            mp[prev]+=1;
        }
        return ans;
    }
};