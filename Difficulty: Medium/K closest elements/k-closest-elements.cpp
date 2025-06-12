class Solution {
  public:
    vector<int> printKClosest(vector<int> arr, int k, int x) {
        // Code here
        map<int,vector<int>>mp;
        vector<int>v;
        for(int i=0;i<arr.size();i++)
        {
            int a=abs(arr[i]-x);
            if(a!=0)
            {
                mp[a].push_back(i);
            }
            // cout<<a<<" "<<i<<endl;
        }
        for(auto i:mp)
        {
            int size=i.second.size()-1;
            if(k==0) break;
            while(k>0 and size>=0)
            {
                v.push_back(arr[i.second[size]]);
                size-=1;
                k-=1;
            }
        }
        return v;
    }
};