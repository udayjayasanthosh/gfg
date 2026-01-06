class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        // code here
        int firstxor=0;
        for(int i=0;i<k and i<arr.size();i++)
        {
            firstxor^=arr[i];
        }
        int ans=firstxor;
        for(int i=k;i<arr.size();i++)
        {
            firstxor^=arr[i-k];
            firstxor^=arr[i];
            ans=max(ans,firstxor);
        }
        return ans;
    }
    
};