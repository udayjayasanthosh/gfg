class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int value=0;
        int ans=0;
        for(int i=0;i<k and i<arr.size();i++)
        {
            value+=arr[i];
        }
        ans=value;
        for(int i=k;i<arr.size();i++)
        {
            value-=arr[i-k];
            value+=arr[i];
            if(value>ans)
            {
                ans=value;
            }
        }
        return ans;
    }
};