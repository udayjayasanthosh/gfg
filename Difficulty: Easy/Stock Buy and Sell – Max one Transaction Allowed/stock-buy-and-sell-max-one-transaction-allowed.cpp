class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        // code here
        int minimum=0;
        stack<int>s;
        int ans=0;
        for(int i=0;i<prices.size();i++)
        {
            
            while(!s.empty() and s.top()>prices[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                minimum=prices[i];
            }
            ans=max(ans,prices[i]-minimum);
            s.push(prices[i]);
        }
        return ans;
    }
};
