class Solution {
  public:
    bool check(vector<int>&arr,int &k,int mid)
    {
        int val=0;
        for(auto i:arr)
        {
            val+=ceil((double)i/mid);
        }
        // cout<<val<<" "<<mid<<endl;
        if(val<=k) return true;
        return false;
    }
    int smallestDivisor(vector<int>& arr, int k) {
        // Code here
        int i=1;
        int j=*max_element(arr.begin(),arr.end());
        int ans=0;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(check(arr,k,mid))
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
