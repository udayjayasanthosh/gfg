class Solution {
  public:
    int finding_value(vector<int>&heights,vector<int>&cost,int height)
    {
        int val=0;
        for(int i=0;i<heights.size();i++)
        {
            int a=abs(heights[i]-height)*cost[i];
            val+=a;
        }
        return val;
    }
    int minCost(vector<int>& heights, vector<int>& cost) {
        // code here
        int i=*min_element(heights.begin(),heights.end());
        int j=*max_element(heights.begin(),heights.end());
        while(i<=j)
        {
            int mid=(j+i)/2;
            int middle=finding_value(heights,cost,mid);
            int left=finding_value(heights,cost,mid-1);
            int right=finding_value(heights,cost,mid+1);
            if(middle<=left and middle<right)
            return middle;
            if(middle<=left)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return -1;
    }
};
