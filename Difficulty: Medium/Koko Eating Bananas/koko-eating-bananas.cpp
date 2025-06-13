class Solution {
  public:
    bool value_find(vector<int>&arr,int mid,int k)
    {
        int val=0;
        for(auto i:arr)
        {
            val+=ceil((double)i/mid);
        }
        if(val>k) return false;
        return true;
    }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int i=1;
        int j=*max_element(arr.begin(),arr.end());
        int ans=0;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(value_find(arr,mid,k))
            {
                ans=mid;
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return ans;
    }
};