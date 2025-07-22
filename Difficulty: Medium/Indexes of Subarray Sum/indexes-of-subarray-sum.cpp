class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
            if(sum==target)
            {
                return {1,i+1};
            }
            if(mp.find(sum-target)!=mp.end())
            {
                return {mp[sum-target]+2,i+1};
            }
            mp[sum]=i;
        }
        return {-1};
    }
};